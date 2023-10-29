
# Operators priority in programming?


1.Parentheses () - Highest Priority:

Parentheses are used to group sub-expressions and force the evaluation order. Expressions inside parentheses are evaluated first.
Postfix Operators (e.g., a++, a--) and Member Access (.or ->):

2.Postfix operators and member access operators are evaluated from left to right after the expression within parentheses.
Prefix Operators (e.g., ++a, --a, +a, -a, !a, ~a, sizeof, type casts):

3.Prefix operators, including increment, decrement, unary plus, unary minus, logical NOT, bitwise NOT, and others, are evaluated from right to left.
Multiplicative Operators (e.g., *, /, %):

Multiplication (*), division (/), and modulo (%) operators are evaluated from left to right.
Additive Operators (e.g., +, -):

Addition (+) and subtraction (-) operators are evaluated from left to right.
Shift Operators (e.g., <<, >>):

Left shift (<<) and right shift (>>) operators are evaluated from left to right.
Relational Operators (e.g., <, <=, >, >=):

Relational operators compare values and return a boolean result. They are evaluated from left to right.
Equality Operators (e.g., ==, !=):

Equality operators check for equality or inequality. They are evaluated from left to right.
Bitwise AND Operator &:

Bitwise AND operators are evaluated from left to right.
Bitwise XOR Operator ^:

Bitwise XOR operators are evaluated from left to right.
Bitwise OR Operator |:

Bitwise OR operators are evaluated from left to right.
Logical AND Operator &&:

Logical AND operators are evaluated from left to right. They are typically short-circuited, meaning the second operand may not be evaluated if the first is false.
Logical OR Operator ||:

Logical OR operators are evaluated from left to right. Like logical AND, they are typically short-circuited.
Conditional (Ternary) Operator ? ::

The ternary conditional operator is evaluated from left to right and is used for conditional expressions.
Assignment Operators (e.g., =, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=):

Assignment operators are evaluated from right to left. These operators also have a lower precedence compared to many other operators, which is why assignments like a = b = 5 work as expected.
Comma Operator , - Lowest Priority:

The comma operator is evaluated from left to right, and it is used to separate expressions. It is often used in for loops and function calls.