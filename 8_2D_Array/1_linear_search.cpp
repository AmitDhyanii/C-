#include <iostream>
using namespace std ;
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==11)
            {
            cout<<"Present";
            return 0;
            }
        }
    }
    cout<<"Not present";
    return 0 ;
}