#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int[10];
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    cout<<ptr[0];
    return 0;
}