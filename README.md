 Formal Language Simulator using C++

 Project Title
Design and Implementation of a Multi-Stage Formal Language Simulator using C++

 Aim of the Project
The aim of this project is to develop a C++ based simulator that demonstrates the working of formal languages. The system validates whether a given input string belongs to a particular language using automata simulation and grammar-based parsing techniques.


Overview
This project is based on concepts from **Theory of Computation (TOC)**. It provides a practical implementation of:

- Finite Automata (DFA)
- Context-Free Grammars (CFG)
- CYK Parsing Algorithm (under development)

The simulator helps users understand how strings are processed and validated in computational models.


 Features
- DFA simulation for string validation
- User-defined transition table
- Grammar input support (CFG)
- Menu-driven interface
- Modular and structured C++ code
- CYK parsing module (currently under development)

 Modules

 DFA Simulation Module
Simulates a deterministic finite automaton and checks whether a string is accepted or rejected.

 Grammar Processing Module
Accepts grammar rules from the user and stores them for parsing.

 CYK Parsing Module
Implements CYK algorithm to verify strings using CFG (in progress).

 Result Module
Displays the output of the simulation.

Technologies Used
- Programming Language: C++
- IDE: Visual Studio Code
- Compiler: GCC / MinGW
- Platform: Windows


 How to Run the Project

1. Open the project in Visual Studio Code
2. Compile the code:
   ```bash
   g++ main.cpp -o simulator
