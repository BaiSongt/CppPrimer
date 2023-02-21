// exercise section 1.2
// exercise 1.5
// Exercise 1.5: 
// We wrote the output in one large
//  statement. Rewrite the program to use
// a separate statement to print each operand.

#include <iostream>

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " 
              << v2 << " is " << v1 + v2 << std::endl;
    std::cout << "The minus of " << v1 << " and " 
              << v2 << " is " << v1 - v2 << std::endl;
    std::cout << "The product of " << v1 << " and " 
              << v2 << " is " << v1 * v2 << std::endl;
    std::cout << "The division of " << v1 << " and " 
              << v2 << " is " << v1 / v2 << std::endl;
    return 0;
}