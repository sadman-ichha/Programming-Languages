/*
  Dart File: async_programming_example.dart

  Note:
  This Dart file demonstrates the basics of asynchronous programming in Dart using the Future class.
  It includes a simple asynchronous function that simulates fetching data.


*/

import 'dart:async';


void main() {
  print('Please Wait Fetching data...');

  // Using Future to handle asynchronous operations
  fetchData().then((data) {
    print('Data received: $data');
  }).catchError((error) {
    print('Error: $error');
  });

  print('Main function continues to execute...');
}

// Asynchronous function simulating data fetching
Future<String> fetchData() async {
  // Simulating a delay (e.g., fetching data from an API)
  await Future.delayed(Duration(seconds: 2));

  // Returning fetched data
  return 'Fetched data from the server!';
}
