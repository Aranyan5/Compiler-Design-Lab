Experiment 3 — NFA to DFA
Aim
Convert a Non-deterministic Finite Automaton (NFA) into a Deterministic Finite Automaton (DFA).

Theory
In an NFA, a state may have multiple transitions for the same symbol.

In a DFA, each state has exactly one transition per symbol.

Conversion uses the Subset Construction Algorithm.

Each DFA state represents a set of NFA states.

Algorithm
Start with ε-closure of the start state.

Treat this as the first DFA state.

For each DFA state and input symbol:

Compute move() operation.

Apply ε-closure.

Add new DFA states.

Continue until no new states appear.

How to Run
gcc nfa_to_dfa.c
./a.out
Sample Output
Enter number of states: 3

DFA Transition Table
0 1
1 2
2 0
Files
nfa_to_dfa.c
Concepts Used
Finite Automata

Subset Construction

DFA Simulation
