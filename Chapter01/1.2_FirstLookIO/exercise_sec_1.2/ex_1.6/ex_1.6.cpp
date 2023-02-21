// exercise section 1.2
// exercise 1.6
// Exercise 1.6: 
// Explain whether the following program fragment is legal.
// std::cout << "The sum of " << v1; << " and " << v2;
//              << " is " << v1 + v2 << std::endl;
// If the program is legal, what does it do? 
// If the program is not legal, why not? How would you fix it?

// Programmers often add print statements during debugging.
//  Such state- ments should always flush the stream. 
//  Otherwise, if the program crashes, output may be 
//  left in the buffer, leading to incorrect inferences 
//  about where the program crashed.