// ignore_for_file: dead_code

void main() {
  // Example 1: Basic if statement
  int number = 10;

  if (number > 0) {
    print('$number is positive');
  }

  // Example 2: if-else statement
  int anotherNumber = -5;

  if (anotherNumber > 0) {
    print('$anotherNumber is positive');
  } else {
    print('$anotherNumber is non-positive');
  }

  // Example 3: if-else if-else ladder
  int score = 75;

  if (score >= 90) {
    print('A');
  } else if (score >= 80) {
    print('B');
  } else if (score >= 70) {
    print('C');
  } else if (score >= 60) {
    print('D');
  } else {
    print('F');
  }

  // Example 4: Nested if statements
  bool isSunny = true;
  bool isWarm = true;

  if (isSunny) {
    if (isWarm) {
      print('It\'s a sunny and warm day!');
    } else {
      print('It\'s sunny, but not warm.');
    }
  } else {
    print('It\'s not a sunny day.');
  }
}
