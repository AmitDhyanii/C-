// #include <iostream>
// using namespace std ;
// int main()
// {
//     //creating 2d array
//     //formula for 2d array = c * i + j

//     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//     }

//     return 0 ;
// }





// #include <iostream>
// using namespace std ;
// int main()
// {
//     int arr[3][4];

//     //row wise input

//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0 ;
// }



#include <iostream>
using namespace std ;
int main()
{
    int arr[3][4];

    //column wise input

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[j][i];
        }
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    
    return 0 ;
}