#include <iostream>
using namespace std;
int main()
{
    int array[4][5] = {

            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12,13, 14, 15},
            {16, 17, 18, 19, 20}
       
       };

    for(int row =0;row<4;row++)
    {
        for(int col=0;col < 5 ;col++)
        {
            cout<<array[row][col]<<" ";
        }
        cout<<endl;
    }

    

    return 0;
}