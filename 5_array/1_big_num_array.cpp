// #include <iostream>
// #include <cmath>
// using namespace std ;
// int main()
// {
    

//     int arr[6] = {-3,-2,-1};
//     int maxx = arr[0] ;
    
//     for(int i = 0; i<3; i++)
//     {
//         if(arr[i]>maxx)
//         maxx=arr[i];
        
//     }
//     cout<<maxx;
// }


#include <iostream>
using namespace std ;
int main()
{
    int arr[6] = {2,99,56,74,66,100};
    int maxx = arr[0];
    
    for(int i = 0; i<6; i++)
    {
        // maxx = max(maxx,arr[i]) ;
        if(arr[i]>maxx)
        maxx=arr[i];
    }
    cout<<maxx;
    return 0 ;
}

// #include <iostream>
// using namespace std ;
// int main()
// {
//     int arr[4] = {4,12,8,10};
//     int min = arr[0];

//     for(int i = 0 ; i<4 ; i++)
//     {
//         if(arr[i]<min)
//         {
//             min=arr[i];
//         }
//     }
//     cout<<min;
//     return 0 ;
// }


// #include <iostream>
// using namespace std ;


// void print(int arr[] , int n)
// {
//     cout<<"Printing...\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" "  ;
//     }
// }


// void fun(int other[] , int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         other[i] = 0 ;
//     }
// }


// int main()
// {
//     int size ;
//     cout<<"Enter no. of elements to insert\n" ;

//     cin>>size ;

//     int arr[size] ;   // dynamically memory allocation - stack memo
//     cout<<"Enter "<<size<<" elements : ";
//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i] ;
//     }

//     print(arr , size) ;

//     fun(arr,size) ;

//     print(arr , size) ;
    
//     return 0 ;
// }