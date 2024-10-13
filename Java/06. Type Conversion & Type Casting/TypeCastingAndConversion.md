
# Type Casting and Type Conversion in Java

## 1. Type Casting
**Definition**: The process of converting a variable from one type to another.

### Types:
- **Widening Casting (Implicit)**:
  - Converts a smaller primitive type to a larger primitive type (e.g., `int` to `double`).
  - No data loss occurs during this process.
  
- **Narrowing Casting (Explicit)**:
  - Converts a larger primitive type to a smaller primitive type (e.g., `double` to `int`).
  - Requires explicit casting by the programmer and may result in data loss.

## 2. Type Conversion
**Definition**: The process of transforming data between different types, often using methods from wrapper classes.

### Examples:
- Converting a `String` to an `int` or `double` using methods like `Integer.parseInt()` or `Double.parseDouble()`.
- Converting an `int` to a `String` using `Integer.toString()` or `String.valueOf()`.
- Converting a `double` to a `String` using `Double.toString()`.

## Key Differences
- **Scope**:
  - Type Casting typically deals with primitive types.
  - Type Conversion can involve both primitive types and objects.
  
- **Method**:
  - Type Casting can be implicit or explicit.
  - Type Conversion often requires specific methods.

- **Data Loss**:
  - Narrowing Casting can lead to data loss.
  - Type Conversion may not lead to data loss if handled correctly.

## Summary
- Type Casting focuses on changing primitive types and may result in data loss.
- Type Conversion encompasses a broader range of transformations between different data types.
