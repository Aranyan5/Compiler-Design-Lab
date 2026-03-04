Experiment 1 — Lexical Analyzer


Aim

Develop a Lexical Analyzer that identifies tokens such as keywords, identifiers, operators, constants, and punctuation symbols from a given C program.

Theory:

The Lexical Analyzer is the first phase of a compiler.
Its main responsibility is to convert a sequence of characters into a sequence of tokens.

A token is the smallest meaningful unit of a program.

Example tokens:

Token Type	Example
Keyword	int, float
Identifier	x, total
Operator	+, -, *, /
Constant	10, 3.14
Algorithm Steps

Start the program.

Read the input program file.

Scan characters one by one.

If characters form a keyword, print keyword.

If characters form an identifier, print identifier.

Identify operators and constants.

Continue until end of file.

Display all tokens.

How to Run:

gcc lexical_analyzer.c
./a.out
Sample Output
float → Keyword
x → Identifier
= → Operator
a → Identifier
+ → Operator
10 → Constant
Files
lexical_analyzer.c — Implementation of lexical analyzer

Concepts Used:

Tokenization

Lexical Analysis

Pattern Recognition

Compiler Front End
