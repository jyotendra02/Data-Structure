#include<iostream>
using namespace std;

class rectangle
{
    //data
     int length;
     int breadth;

     public:
     //function
     rectangle(int len,int bred)
     {
        length =len;
        breadth =bred;
     }

     int area()
     {
        int area = length*breadth;
     }
};

int main()
{
    rectangle rect1(10,20);

    cout<<rect1.area()<<endl;

    return 0;
}