// #include <iostream>
// #include <algorithm>
// using namespace std ;
// int main()
// {
//     int arr[] = {1,2,3,4,5,6};
    
//     for(int i = 0 ; i<6 ; i+=2)
//     {
//         if(i+1<6)
//         {
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     for(int i = 0 ; i<6 ; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0 ;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std ;
// int main()
// {
//     int arr[] = {1,2,3,4,5,6};
    
//     for(int i = 0 ; i<6 ; i+=2)
//     {
//         int temp;
//         temp = arr[0];
//         arr[0]=arr[1];
//         arr[1]=temp;

//         int temp1;
//         temp1 = arr[2];
//         arr[2]=arr[3];
//         arr[3]=temp1;

//         int temp2;
//         temp2 = arr[4];
//         arr[4]=arr[5];
//         arr[5]=temp2;
//     }
//     for(int i = 0 ; i<6 ; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0 ;
// }


#include <iostream>
#include <algorithm>
using namespace std ;
int main()
{
    int arr[] = {1,2,3,4,5,6};
    
    for(int i = 0 ; i<6 ; i+=2)
    {
        if(i+1<6)
        {
        int temp;
        temp = arr[0];
        arr[0]=arr[1];
        arr[1]=temp;
        }

        
    }
    for(int i = 0 ; i<6 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0 ;
}