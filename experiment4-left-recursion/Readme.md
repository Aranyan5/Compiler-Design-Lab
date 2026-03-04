Experiment 4 — Left Recursion Elimination
Aim
Eliminate Left Recursion from a given grammar.

Theory
A grammar is left recursive if:

A → Aα
Left recursion causes problems in top-down parsers.

It can be removed by transforming:

A → Aα | β
into

A → βA'
A' → αA' | ε
Algorithm
Read the grammar rule.

Separate recursive and non-recursive parts.

Introduce a new non-terminal.

Rewrite productions.

Display transformed grammar.

How to Run
gcc left_recursion.c
./a.out
Sample Output
E -> TE'
E' -> +TE' | ε
Files
left_recursion.c
Concepts Used
Context Free Grammar

Left Recursion Removal

Grammar Transformation

