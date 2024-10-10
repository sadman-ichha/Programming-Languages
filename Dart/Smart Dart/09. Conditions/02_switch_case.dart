void main() {
  // Example 1: Basic switch statement
  String grade = 'B';

  switch (grade) {
    case 'A':
      print('Excellent! A');
      break;
    case 'B':
      print('Good job! B');
      break;
    case 'C':
      print('Satisfactory C');
      break;
    case 'D':
      print('Needs improvement! D');
      break;
    default:
      print('Invalid grade!');
  }

  // Example 2: Switch statement with fall-through
  int number = 2;

  switch (number) {
    case 1:
      print('One');
      break;
    case 2:
    case 3:
      print('Two or Three'); // This block will execute for both 2 and 3
      break;
    case 4:
      print('Four');
      break;
    default:
      print('Other');
  }

  // Example 3: Switch statement with expressions
  String fruit = 'apple';

  switch (fruit.length) {
    case 5:
      print('Medium-sized fruit');
      break;
    case 6:
      print('Large-sized fruit');
      break;
    default:
      print('Size information not available');
  }
}

/*

  Note:
  This Dart file illustrates the usage of the switch statement in Dart.
  It includes examples showcasing the basic switch statement, fall-through cases,
  and a switch statement based on expressions.

*/