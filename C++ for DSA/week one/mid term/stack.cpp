//[STACK MEMORY]
//Stack memory is automatically managed by the compiler . 

//The memory is allocated when a function is called and deallocated when the function returns.

//Each function call creates a new frame on top of the stack to store local variables, parameters, and the return address.

//The stack follows the Last-In-First-Out principle. The most recently added item (the top of the stack) is the first one to be removed.

//The stack has a limited size, and exceeding its capacity can result in a stack overflow error.

//The stack memory is typically faster to allocate and deallocate.


//[HEAP MEMORY]
//Heap memory is a region of memory used for dynamic memory allocation.

//Heap memory is manually managed by the programmer using new to allocate memory and delete to deallocate it.

//Heap memory allows for flexible and dynamic allocation of memory during runtime.

//The allocated memory remains available until it is explicitly deallocated with delete.

//If we don't deallocate memory it will result in memory leaks, where the allocated memory is no longer accessible but still occupies space in the system.