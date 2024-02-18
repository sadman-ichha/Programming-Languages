void main() {
  // break and continue
  print('\n--- Break and Continue ---');
  for (int i = 0; i < 7; i++) {
    if (i == 2) {
      continue; // Skip iteration when i is 2
    }
    if (i == 6) {
      break; // Exit the loop when i is 4
    }
    print('Iteration $i');
  }
}
