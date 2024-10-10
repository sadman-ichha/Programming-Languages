// Defining an enum named 'Year' with a set of constant values
enum Year {
  January,
  February,
  March,
  April,
  May,
  June,
  July,
  August,
  September,
  October,
  November,
  December,
}

void main() {
  // Iterating through enum values
  for (var year in Year.values) {
    print(
        "${year.index + 1}.${year.name}"); // Adding 1 to index to display month numbers & month name
  }
}
