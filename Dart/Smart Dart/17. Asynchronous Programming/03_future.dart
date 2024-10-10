// ignore_for_file: body_might_complete_normally_catch_error

// Function simulating an asynchronous task
Future<int> fetchUserData() async {
  // Simulating an asynchronous task with a delay
  await Future.delayed(Duration(seconds: 2));

  // Returning a result after the delay
  return 42;
}

void main() {
  print('Start of the program');

  // Creating a Future
  Future<int> userDataFuture = fetchUserData();

  // Handling success using .then()
  userDataFuture.then((userData) {
    print('User data: $userData');
  });

  // Handling error using .catchError()
  userDataFuture.catchError((error) {
    print('Error: $error');
  });

  // Using async and await for more readable code
  fetchData() async {
    try {
      int result = await fetchUserData();
      print('Result using async/await: $result');
    } catch (e) {
      print('Error using async/await: $e');
    }
  }

  // Calling the asynchronous function using async/ await
  fetchData();

  print('End of the program');
}


/*
  ---Future In Dart---
  In dart, the Future represents a value or error that is not yet available. It is used to represent a potential value, 
  or error, that will be available at some time in the future.

  Note:
  This Dart file demonstrates the basics of using Futures in Dart for asynchronous programming.
  It includes the creation of a simple Future, handling success and error scenarios using `.then()` and `.catchError()`,
  and using `async` and `await` for more readable asynchronous code.

  ---More About Future----
  Future represents the result of an asynchronous operation and can have 2 states.

  ---State Of Future---
  Uncompleted
  Completed

  ---Uncompleted---
  When you call an asynchronous function, it returns to an uncompleted future. 
  It means the future is waiting for the function asynchronous operation to finish or to throw an error.

  ---Completed---
  It can be completed with value or completed with error. Future<int> produces an int value, and Future<String> produces a String value. If the future doesn’t produce any value, then the type of future is Future<void>.

 ---Info---
  Note: If the asynchronous operation performed by the function fails due to any reason, 
  the future completes with an error.
*/