Experiment 6 — Predictive Parsing Table
Aim
Construct an LL(1) Predictive Parsing Table.

Theory
Predictive parsing is a top-down parsing technique.

It uses:

FIRST sets

FOLLOW sets

The parser selects productions based on one lookahead symbol.

Algorithm
Compute FIRST sets.

Compute FOLLOW sets.

For each production:

Fill parsing table entries.

Handle ε-productions.

Display table.

How to Run
gcc predictive_parser.c
./a.out
Sample Output
Predictive Parsing Table
E T
T F
F i
Files
predictive_parser.c
Concepts Used
LL(1) Parsing

Predictive Parsing

Syntax Analysis

