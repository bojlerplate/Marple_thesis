#include <iostream>
#include <string>

using namespace std;

// This function takes in a string and returns its length
int getStringLength(string str) {
  return str.length();
}

// This function takes in two integers and returns their sum
int addNumbers(int a, int b) {
  return a + b;
}

int main() {
  string name = "Pepperprint";
  int length = getStringLength(name);
  cout << "The length of the string is: " << length << endl;

  int sum = addNumbers(5, 7);
  cout << "The sum of the numbers is: " << sum << endl;

  return 0;
}
