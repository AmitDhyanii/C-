#include <iostream>
using namespace std ;
int main()
{
    int arr[3][3]={5,2,9,4,8,10,11,17,0};
    int maxx=INT32_MIN;
    int rowIndex = -1;
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
        if(sum>maxx)
        {
            maxx=sum;
            rowIndex=i;
        }
    }
    cout<<"Maximum sum is "<<maxx<<endl;
    cout<<"The row is at index "<<rowIndex;
    return 0 ;
}



