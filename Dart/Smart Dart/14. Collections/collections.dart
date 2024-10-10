import 'dart:collection';

void main() {
  // 1. List
  print("\n-- Collections-List --");
  List<String> fruits = ['Apple', 'Banana', 'Orange'];
  fruits.add('Mango');
  fruits.addAll(['Berry', 'Blueberry', 'Cherry', 'Lemon']);

  // Accessing elements by index
  String firstFruit = fruits[0];

  // Checking if the list contains an element
  bool containsBanana = fruits.contains('Banana');

  // Removing elements
  fruits.remove('Cherry');
  fruits.removeAt(2);

  // Length of the list
  int listLength = fruits.length;

  // Clearing the list
  fruits.clear();

  print('Fruits List: $fruits');
  print('First Fruit: $firstFruit');
  print('Contains Banana: $containsBanana');
  print('List Length: $listLength');

  // 2. Set
  print("\n-- Collections-Set --");
  Set<int> numbers = {1, 2, 3, 4, 5};

  // Adding elements to the set
  numbers.add(6);
  numbers.addAll({7, 8, 9});

  // Checking if the set contains an element
  bool containsThree = numbers.contains(3);

  // Removing elements
  numbers.remove(4);

  // Length of the set
  int setLength = numbers.length;

  // Clearing the set
  numbers.clear();

  print('Numbers Set: $numbers');
  print('Contains Three: $containsThree');
  print('Set Length: $setLength');

  // 3. Map
  print("\n-- Collections-Map --");

  Map<String, int> studentGrades = {
    'Alice': 90,
    'Bob': 85,
    'Charlie': 95,
  };
  print("Map List : ${studentGrades}");

  // Adding or updating entries
  studentGrades['David'] = 88;
  studentGrades.addAll({'Eva': 92, 'Frank': 78});
  print("Map updated List : ${studentGrades}");

  // Accessing values by key
  int bobGrade = studentGrades['Bob']!;

  // Checking if the map contains a key
  bool containsAlice = studentGrades.containsKey('Alice');

  // Checking if the map contains a value
  bool containsGrade95 = studentGrades.containsValue(95);

  // Removing entries by key
  studentGrades.remove('Charlie');

  // Length of the map
  int mapLength = studentGrades.length;

  // Clearing the map
  studentGrades.clear();

  print('Student Grades: $studentGrades');
  print('Bob\'s Grade: $bobGrade');
  print('Contains Alice: $containsAlice');
  print('Contains Grade 95: $containsGrade95');
  print('Map Length: $mapLength');

  // 4. Queue
  print("\n-- Collections-Queue --");
  Queue<int> queue = Queue();
  queue.addAll([1, 2, 3]);
  queue.addLast(4);
  queue.addFirst(0);
  print('Queue: $queue');
}
