Compiler Design Lab
This repository contains implementations of important Compiler Design Laboratory experiments.
The programs demonstrate fundamental concepts of lexical analysis, automata theory, grammar transformations, and parsing techniques.

All experiments are implemented using C programming language and can be compiled using the GCC compiler.

List of Experiments
Experiment	Title
1	Lexical Analyzer
2	Regular Expression to NFA
3	NFA to DFA Conversion
4	Left Recursion Elimination
5	FIRST and FOLLOW Computation
6	Predictive Parsing Table
7	Shift Reduce Parsing
8	Leading and Trailing Sets
Experiment Descriptions
1. Lexical Analyzer
Implements a lexical analyzer that scans a source program and identifies tokens such as:

Keywords

Identifiers

Operators

Constants

This represents the first phase of a compiler.

2. Regular Expression to NFA
Converts a Regular Expression into a Non-deterministic Finite Automaton (NFA).

The experiment demonstrates automata construction techniques used in compiler design.

3. NFA to DFA Conversion
Implements the conversion of an NFA into a DFA using the Subset Construction Algorithm.

This conversion removes nondeterminism from finite automata.

4. Left Recursion Elimination
Transforms grammars containing left recursion into equivalent grammars without left recursion.

This transformation is required for top-down parsers.

5. FIRST and FOLLOW Computation
Computes the FIRST and FOLLOW sets of grammar non-terminals.

These sets are essential for constructing LL(1) parsing tables.

6. Predictive Parsing Table
Constructs an LL(1) predictive parsing table using FIRST and FOLLOW sets.

This experiment demonstrates top-down parsing techniques.

7. Shift Reduce Parsing
Implements Shift Reduce Parsing, which is a bottom-up parsing technique used in syntax analysis.

Operations include:

Shift

Reduce

Accept

Error

8. Leading and Trailing Sets
Computes LEADING and TRAILING sets for operator precedence grammars.

These sets are used to construct operator precedence parsers.

Requirements
To run the programs you need:

GCC Compiler

Linux / Windows terminal

Install GCC (Linux)

sudo apt install gcc
Compilation and Execution
Navigate to the experiment folder and run:

gcc program_name.c
./a.out
Example:

gcc lexical_analyzer.c
./a.out
Concepts Covered
This repository demonstrates key topics from Compiler Design:

Lexical Analysis

Regular Expressions

Finite Automata

NFA to DFA Conversion

Grammar Transformations

FIRST and FOLLOW Sets

Predictive Parsing

Bottom-Up Parsing

Operator Precedence Parsing

