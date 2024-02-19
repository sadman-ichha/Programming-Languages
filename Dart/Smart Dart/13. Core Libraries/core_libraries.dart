// ignore_for_file: unnecessary_import

import 'dart:core';
import 'dart:math';
import 'dart:convert';
import 'dart:async';
import 'dart:io';
import 'dart:typed_data';


void main() {
  // 1. dart:core Library
  int age = 25;
  double piValue = 3.14;
  String name = 'Dart';
  bool isTrue = true;
  dynamic dynamicVariable = 'Dynamic Type';

  print(
      'Age: $age, PI: $piValue, Name: $name, Boolean: $isTrue, Dynamic: $dynamicVariable');

  // 2. dart:math Library
  double randomValue = Random().nextDouble();
  int randomNumber = Random().nextInt(100);

  print('Random Double: $randomValue, Random Integer: $randomNumber');

  // 3. dart:convert Library
  String jsonData = '{"name": "John", "age": 30}';
  Map<String, dynamic> decodedData = json.decode(jsonData);
  print('Decoded JSON: $decodedData');

  // 4. dart:async Library
  Future<void> delayedFunction() async {
    await Future.delayed(Duration(seconds: 2));
    print('Delayed Function Executed!');
  }

  print('Start of Program');
  delayedFunction();
  print('End of Program');

  // 5. dart:io Library
  File file = File('example.txt');
  file.writeAsStringSync('Hello, Dart IO Library!');
  String fileContent = file.readAsStringSync();

  print('File Content: $fileContent');

  // 6. dart:collection Library
  List<String> stringList = ['apple', 'banana', 'orange'];
  Set<int> integerSet = {1, 2, 3};
  Map<String, int> stringToIntMap = {'one': 1, 'two': 2, 'three': 3};

  print(
      'String List: $stringList, Integer Set: $integerSet, String to Int Map: $stringToIntMap');

  // 7. dart:typed_data Library
  ByteData byteData = ByteData(4);
  byteData.setInt32(0, 42);
  Uint8List uint8List = Uint8List.fromList([10, 20, 30]);
  print('Byte Data Value: ${byteData.getInt32(0)}, Uint8List: $uint8List');
  
}


/*
  Dart File: core_libraries_example.dart

  Note:
  This Dart file provides an overview of Dart's Core Libraries, demonstrating key functionalities.
  It covers the following aspects:

  1. **dart:core Library:**
     - Basic data types: int, double, String, bool.
     - Dart's dynamic type.
     - Common operations and properties.

  2. **dart:math Library:**
     - Mathematical operations and constants.

  3. **dart:convert Library:**
     - JSON encoding and decoding.

  4. **dart:async Library:**
     - Asynchronous programming with Futures and Streams.

  5. **dart:io Library:**
     - Input and output operations for file handling.

  6. **dart:collection Library:**
     - Collections: List, Set, Map.

  7. **dart:typed_data Library:**
     - Typed data: ByteData, Uint8List.

*/