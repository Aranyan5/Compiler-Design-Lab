Experiment 2 — Regular Expression to NFA
Aim

Convert a Regular Expression into an equivalent Non-deterministic Finite Automaton (NFA).

Theory

A Regular Expression (RE) represents patterns in strings.

An NFA allows:

Multiple transitions for the same input

ε-transitions

Conversion is typically done using Thompson's Construction.

Example:

a|b

Accepts either a or b.

Algorithm

Read the regular expression.

Scan characters sequentially.

Handle operators:

| union

* closure

Create state transitions.

Print NFA states and transitions.

How to Run
gcc regex_to_nfa.c
./a.out
Sample Output
Enter Regular Expression: a|b

State Transitions
q0 --a--> q1
Union operator detected
q1 --b--> q2

Start State: q0
Final State: q2
Files
regex_to_nfa.c
Concepts Used

Regular Expressions

Finite Automata

Thompson Construction
