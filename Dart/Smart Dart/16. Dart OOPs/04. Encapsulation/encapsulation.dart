import 'dart:math';

void main() {
  DateProvider dp = DateProvider();
  dp.method();
}

class DateProvider {
  String? get StringOrNull => Random().nextBool() ? "Hello" : null;
  void method() {
    String? values = StringOrNull;
    if (values is String) {
      print("Text length: ${values.length}");
    } else
      print("text is not String");
  }
}
