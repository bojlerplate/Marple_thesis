#include <iostream>

// Function declaration
double CalculateRectangleArea(double length, double width);

int main() {
  double length, width, area;

  // Get the length of the rectangle from the user
  std::cout << "Enter the length of the rectangle: ";
  std::cin >> length;

  // Get the width of the rectangle from the user
  std::cout << "Enter the width of the rectangle: ";
  std::cin >> width;

  // Calculate the area of the rectangle
  area = CalculateRectangleArea(length, width);

  // Print the area of the rectangle to the console
  std::cout << "The area of the rectangle is: " << area << std::endl;

  return 0;
}

// Function definition
double CalculateRectangleArea(double length, double width) {
  return length * width;
}