/*
  Dart File: stream_example.dart

  Note:
  This Dart file demonstrates the basics of using Streams in Dart for asynchronous programming.
  It includes the creation of a simple Stream, listening to events using `.listen()`,
  and handling data, error, and completion events.

  Author: [Your Name]
  Date: [Current Date]
*/

import 'dart:async';

// Function simulating the generation of a stream of numbers
Stream<int> generateNumbers() async* {
  for (int i = 1; i <= 5; i++) {
    // Simulating asynchronous delay
    await Future.delayed(Duration(seconds: 1));

    // Yielding the generated number to the stream
    yield i;
  }
}

void main() {
  print('Start of the program');

  // Creating a Stream
  Stream<int> numbersStream = generateNumbers();

  // Listening to data events using .listen()
  StreamSubscription<int> subscription = numbersStream.listen(
    (int number) {
      print('Received number: $number');
    },
    // Handling errors
    onError: (dynamic error) {
      print('Error: $error');
    },
    // Handling completion
    onDone: () {
      print('Stream has completed');
    },
    // Canceling the subscription when necessary
    cancelOnError: true,
  );

  // Additional code can be executed while listening to the stream
  print('Doing some other work...');

  // Canceling the subscription after a delay
  Future.delayed(Duration(seconds: 3), () {
    print('Canceling the subscription');
    subscription.cancel();
  });

  print('End of the program');
}
