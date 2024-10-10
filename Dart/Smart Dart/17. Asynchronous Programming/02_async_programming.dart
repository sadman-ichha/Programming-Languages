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


/*

  In Asynchronous programming, program execution continues to the next line without waiting to complete other work. 
  It simply means, Don’t wait. It represents the task that doesn’t need to solve before proceeding to the next one.
  
  Note: Asynchronous Programming improves the responsiveness of the program.

  Note:
  This Dart file demonstrates the basics of asynchronous programming in Dart using the Future class.
  It includes a simple asynchronous function that simulates fetching data.
  
  ---Why We Need Asynchronous---
  To Fetch Data From Internet,
  To Write Something to Database,
  To execute a long-time consuming task,
  To Read Data From File, and
  To Download File etc.
  Such asynchronous operations usually take a long time to complete, so it usually provide results in the form of a Future. 
  If the result has multiple parts, then it provides as a Stream. You will learn about Future and Stream in the next section.
  
  ---Important Terms---
  Synchronous operation blocks other operations from running until it completes.
  Synchronous function only perform a synchronous operation.
  Asynchronous operation allows other operations to run before it completes.
  Asynchronous function performs at least one asynchronous operation and can also perform synchronous operations.
 
*/
