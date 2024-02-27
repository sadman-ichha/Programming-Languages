/*

  Note:
  In Synchronous programming, the program is executed line by line, one at a time. 
  Synchronous operation means a task that needs to be solved before proceeding to the next one.
  
  This Dart file demonstrates the basics of synchronous programming in Dart.
  It includes a simple synchronous function and showcases how code is executed sequentially.
  
*/

// Synchronous function performing a simple task
void printNumbers() {
  for (int i = 1; i <= 5; i += 1) {
    print('Number: $i');
  }
}

void main() {
  print('Start of the program');
  // Calling a synchronous function
  printNumbers();
  print('End of the program');
}
