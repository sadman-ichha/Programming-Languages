void main() {
     // Type Conversion - Implicit (Coercion)
     int intValue = 42;
     double doubleValue = intValue.toDouble(); // Implicit conversion from int to double
     print("Implicit Type Conversion: $doubleValue");

     // Type Conversion - Explicit
     double explicitDoubleValue = 3.14;
     int intFromDouble = explicitDoubleValue.toInt(); // Explicit conversion from double to int
     print("Explicit Type Conversion: $intFromDouble");

     // Type Casting
     Object myObject = "Hello Dart!";
     if (myObject is String) {
       String myString = myObject as String; // Type casting using 'as'
       print("Type Casting: $myString");
     }

     // Type Conversion between Strings and Numbers
     String ageString = "25";
     int age = int.parse(ageString); // Convert String to int
     String priceString = "42.99";
     double price = double.parse(priceString); // Convert String to double
     print("Converted Age: $age, Converted Price: $price");
   }


/*
   Type Conversion and Type Casting in Dart:

   In Dart, type conversion and type casting are techniques used to change the data type of a variable or object.

   1. **Type Conversion:**
      - Involves converting a value of one data type to another.
      - Implicit Type Conversion (Coercion): Automatically performed by the Dart runtime.
      - Explicit Type Conversion: Manually performed using predefined functions.

   2. **Type Casting:**
      - Involves treating an object as if it were an instance of a different type.
      - Used in situations where the compiler needs to know the specific type.
      - Requires explicit casting using the `as` keyword.
*/

  

   