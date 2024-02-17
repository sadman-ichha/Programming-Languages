import 'dart:io';

void main() {
  // Prompt the user for input
  print("Enter your name:");

  // Read user input
  String userName = stdin.readLineSync() ?? "";

  // Display a personalized greeting
  print("Hello, $userName! How are you?");
}

/*
   User Input in Dart:
   In Dart, you can interact with users by capturing input from the console. 
   The `stdin` library can be used to read input from the user.
*/