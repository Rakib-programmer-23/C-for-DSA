//[Dynamic Memory Allocation]
//Dynamic memory allocation is the process of allocating memory at runtime, rather than at compile time.
//this is done by using a library function 'new' in c++.
/*
# We can allocate and deallocate the memory.
Ex:
    int* num = new int;  // Allocate memory
    *num = 101;           // Assign a value to the allocated memory
    delete num;          // Deallocate the memory

for Arrays: 
    int size = 5;
    int* arr = new int[size];       // Allocate memory for an array 
    for (int i = 0; i < size; i++)
    {
      arr[i] = i + 2;               // Assign values to the array elements
    }
    delete[] arr;                 // Deallocate the memory
 
## We can return an Array from the function:
   
#include<bits/stdc++.h>
using namespace std;
int* get_array(int n)
{
    int *a=new int [n];//dynamic memory allocation..
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    int *a=get_array(n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
      
    return 0;
}

### We can increase the array size ::

#include <bits/stdc++.h>
using namespace std;

int main() {
    int* arr = new int[5]; 
    
   
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }
    
    
    int newSize = 10;
    int* newArr = new int[newSize]; // Allocate memory for the new size
    
    
    for (int i = 0; i < 5; i++) 
    {
        newArr[i] = arr[i];
    }
    
    delete[] arr;  // Deallocate memory of the old array
    
    arr = newArr;  // Update the pointer variable to point to the new array
    
    
    for (int i = 5; i < newSize; i++) 
    {
        arr[i] = i;
    }
    
    
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
    delete[] arr;// Deallocate memory of the new array
    
    return 0;
}



*/
