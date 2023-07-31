#include <iostream>

using namespace std;


//Array ADT
struct array{
   int size = 10;
   int length = 0;
   int arr[10];
};

// Add function will append item to end of last element in array
void add(struct array *array  , int item)
{
    if(array->length == array->size)
    {
        cout<<"Array is Filled!! "<<endl;
    }
    array->arr[array->length] = item;
    array->length++;
}
//Assignment
void display(struct array array )
{
    //Code for displaying values of array
}

int main()
{
    array arr1;

    add(&arr1,10);
    add(&arr1,11);
    
}