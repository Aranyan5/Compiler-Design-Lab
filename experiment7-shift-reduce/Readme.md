Experiment 7 — Shift Reduce Parsing
Aim
Implement Shift Reduce Parsing.

Theory
Shift Reduce Parsing is a bottom-up parsing technique.

Operations:

Operation	Description
Shift	Move symbol to stack
Reduce	Replace RHS with LHS
Accept	Input accepted
Algorithm
Read input string.

Push symbols to stack.

Apply shift operation.

Apply reduce rules.

Continue until start symbol is produced.

How to Run
gcc shift_reduce.c
./a.out
Sample Output
STACK    INPUT      ACTION
$id      +id*id     SHIFT
$E       +id*id     REDUCE
Files
shift_reduce.c
Concepts Used
Bottom-Up Parsing

Stack Operations

Shift Reduce Algorithm
