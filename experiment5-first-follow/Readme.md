Experiment 5 — FIRST and FOLLOW
Aim
Compute FIRST and FOLLOW sets for a grammar.

Theory
FIRST(X)
Set of terminals that begin strings derived from X.

FOLLOW(X)
Set of terminals that appear immediately after X.

Example:

E → TE'
FIRST(E) = {(, id}

Algorithm
Read grammar productions.

Compute FIRST sets.

Check ε-productions.

Compute FOLLOW sets.

Add $ to start symbol.

Print results.

How to Run
gcc first_follow.c
./a.out
Sample Output
FIRST(E) = {(, id}
FOLLOW(E) = {), $}
Files
first_follow.c
Concepts Used
Context Free Grammar

FIRST Sets

FOLLOW Sets
