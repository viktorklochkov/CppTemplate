/**
 * @file main.cpp
 * @brief A simple C++ program that prints "Hello, World!" to the console.
 *
 * This program demonstrates basic input/output operations in C++.
 */

#include <iostream>
#include <string>
/**
 * @namespace demo
 * @brief A namespace for demonstration purposes.
 */
namespace demo {

/**
* @brief Returns "Hello, World!"
*
* This function returns "Hello, World!".
*/
std::string greeting() {
  return "Hello, World!\n";
}

}// namespace demo

/**
 * @brief The main function of the program.
 *
 * Entry point of the program. Calls the printGreeting() function.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
  std::cout << demo::greeting();
  return 0;
}
