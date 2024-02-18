void main() {
  // Example 1: for loop
  print('--- For Loop ---');
  for (int i = 0; i < 5; i++) {
    print('Iteration $i');
  }

  // Example 2: while loop
  print('\n--- While Loop ---');
  int j = 0;
  while (j < 5) {
    print('Iteration $j');
    j++;
  }

  // Example 3: do-while loop
  print('\n--- Do-While Loop ---');
  int k = 0;
  do {
    print('Iteration $k');
    k++;
  } while (k < 5);

  // Example 4: for-in loop
  print('\n--- For-in Loop ---');
  List<int> numbers = [1, 2, 3, 4, 5];
  for (var number in numbers) {
    print('Number $number');
  }

  // Example 5: forEach method
  print('\n--- ForEach Method ---');
  numbers.forEach((e) => print('Number $e'));

}

/*

  Note:
  This Dart file demonstrates the usage of various loop structures.
  It includes examples of for loop, while loop, do-while loop, for-in loop,
  forEach method, and the usage of break and continue statements.

*/