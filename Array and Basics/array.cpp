#include<iostream>
using namespace std;

struct student  //9byte
{
    int roll_no; //4byte
    int score; //4byte
    char initial; //1byte
};

int main()
{
    student jay,aakriti;
    
    jay.roll_no =37;
    jay.score=50;

    aakriti.roll_no =2;
    aakriti.score=50;

    return 0;
}