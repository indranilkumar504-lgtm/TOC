#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>

using namespace std;

/* ----------- DFA SIMULATION MODULE ----------- */

class DFA {

    int states;
    int symbols;
    int startState;
    set<int> finalStates;
    vector<vector<int>> transition;

public:

    void inputDFA() {

        cout << "Enter number of states: ";
        cin >> states;

        cout << "Enter number of symbols: ";
        cin >> symbols;

        transition.resize(states, vector<int>(symbols));

        for(int i = 0; i < states; i++) {

            for(int j = 0; j < symbols; j++) {

                cout << "delta(" << i << "," << j << ") = ";
                cin >> transition[i][j];
            }
        }

        cout << "Enter start state: ";
        cin >> startState;

        int f;
        cout << "Enter number of final states: ";
        cin >> f;

        for(int i = 0; i < f; i++) {

            int x;
            cout << "Enter final state: ";
            cin >> x;

            finalStates.insert(x);
        }
    }

    void simulate() {

        string input;

        cout << "Enter input string: ";
        cin >> input;

        int current = startState;

        for(char c : input) {

            int symbol = c - '0';

            if(symbol >= symbols) {
                cout << "Invalid symbol\n";
                return;
            }

            current = transition[current][symbol];
        }

        if(finalStates.count(current))
            cout << "String Accepted\n";
        else
            cout << "String Rejected\n";
    }
};


/* ----------- CYK PARSER MODULE ----------- */

class CYKParser {

    map<char, vector<string>> grammar;

public:

    void inputGrammar() {

        int rules;

        cout << "Enter number of productions: ";
        cin >> rules;

        for(int i = 0; i < rules; i++) {

            char lhs;
            string rhs;

            cout << "Production " << i+1 << " (Example A BC): ";
            cin >> lhs >> rhs;

            grammar[lhs].push_back(rhs);
        }
    }

    bool cyk(string word) {

        int n = word.length();

        vector<vector<set<char>>> table(n, vector<set<char>>(n));

        /* CYK logic still incomplete */
        /* TODO: fill table properly */

        return false;
    }

    void simulate() {

        string word;

        cout << "Enter string to test: ";
        cin >> word;

        if(cyk(word))
            cout << "String Accepted by CFG\n";
        else
            cout << "String Rejected\n";
    }
};


/* ----------- MAIN FUNCTION ----------- */

int main() {

    DFA dfa;
    CYKParser parser;

    int choice;

    cout << "Formal Language Simulator\n";

    while(true) {

        cout << "\n1. DFA Simulation\n";
        cout << "2. CFG Parsing\n";
        cout << "3. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {

            dfa.inputDFA();
            dfa.simulate();
        }

        else if(choice == 2) {

            parser.inputGrammar();
            parser.simulate();
        }

        else if(choice == 3) {

            break;
        }

        else {

            cout << "Invalid option\n";
        }
    }

    return 0;
}