//
#include <iostream>

int main() {
  int* ptr = new int;  // Allocate memory on the heap
  *ptr = 10;          // Assign a value to the allocated memory
  
  std::cout << "The value stored at address " << ptr << " is " << *ptr << std::endl;
  
  delete ptr;         // Deallocate the memory
  
  return 0;
}
//