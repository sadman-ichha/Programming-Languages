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
  Stream<int> numbersStream = generateNumbers();

  StreamSubscription<int>? subscription;

  // Listening to data events using .listen()
  subscription = numbersStream.listen(
    (int number) {
      print('Received number: $number');
      // Canceling the subscription when number == 3
      if (number == 3) {
        print("Canceling the subscription");
        subscription!.cancel();
      }
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
  // Future.delayed(Duration(seconds: 3), () {
  //   print('Canceling the subscription');
  //   subscription.cancel();
  // });

  print('End of the program');
}





/*
  Dart File:stream_example.dart

  Note:
  This Dart file demonstrates the basics of using Streams in Dart for asynchronous programming.
  It includes the creation of a simple Stream, listening to events using `.listen()`,
  and handling data, error, and completion events.
  
----Stream----
A stream is a sequence of asynchronous events representing multiple values that will arrive in the future. Stream class deals with sequences of events instead of single events. Stream has one or more listeners, and all listeners will receive the same value.

For example, A stream is like a pipe that emits events, you put a value on the one end, and if there’s a listener on the other end that listener will receive that value. These events can be values of any type, errors or a “done” event to signal the end of the stream.

Single Value	Zero or more values
Sync	int	Iterator
Async	Future<int>	Stream<int>

----Info----
Note: To use yield you have to use async*.

----Types Of Stream----
There are two types of streams:

----Single Subscription streams----
Broadcast streams


----Single Subscription Stream----
By default, Streams are set up for a single subscription. They hold onto the values until someone subscribes and can only be listened to once. 
You will get an exception if you try to listen more than once. Any event’s value should not be missed and must be in the correct order. 
Inside the stream controller, there is only one stream, and only one subscriber can use that stream.


----Broadcast Stream----
This is the stream that is set up for multiple subscriptions. They hold onto the values until subscribers can only listen many times. 
You can use the broadcast stream if you want more objects to listen to the stream. It can be used for mouse events in a browser. 
Inside the stream controller, many streams can be used by many subscribers. E.g., You can start watching videos on such a stream at any time, 
and more than one subscriber can watch the video simultaneously. Similarly, you can watch again after canceling a previous subscription.

----Types Of Classes In Stream----
Four major classes in Dart’s async libraries are used to manage streams.

Stream: It represents an asynchronous stream of data. For E.g:

EventSink: It is like a stream that flows in the opposite direction.

StreamController: It simplifies stream management, automatically creating a stream and sink and also providing methods for controlling a stream’s behavior.

StreamSubscription: It saves the references of the subscription and allows them to pause, resume or cancel the flow of data they receive.


----Keywords Used In Stream----
async*: It is mainly used in the stream that works like the async in the future.

yield: It is used to emit values from a generator, either async or sync. yield returns values from an Iterable or a Stream.

yield*: yield* is used to call its Iterable or Stream function recursively.




----async vs async In Dart*----

async	                                                    
It gives a Future.                                       	
async keyword does some work that might take a long time.	                                  
It gives the result wrapped in future.	                  

async*
It gives a Stream.
async* returns a bunch of future values on at a time.
It gives the result wrapped in the stream.


---yield vs yield In Dart*---
yield	
It is a keyword that returns single value to the sequence, but doesn’t stop the generator function.

yield*
It is used for returning recursive generator.
*/
