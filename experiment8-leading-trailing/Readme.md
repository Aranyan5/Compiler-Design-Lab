Experiment 8 — Leading and Trailing
Aim
Compute LEADING and TRAILING sets for operator precedence grammar.

Theory
LEADING(A)
Terminals appearing first in strings derived from A.

TRAILING(A)
Terminals appearing last in strings derived from A.

These sets help construct operator precedence parsers.

Algorithm
Read grammar productions.

Identify terminals.

Compute LEADING sets.

Compute TRAILING sets.

Print results.

How to Run
gcc leading_trailing.c
./a.out
Sample Output
LEADING = { id ( }
TRAILING = { id ) }
Files
leading_trailing.c
Concepts Used
Operator Precedence Grammar

Leading Sets

Trailing Sets
