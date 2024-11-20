// #include <iostream>
// using namespace std ;
// int main()
// {
//     int arr[5] = {10,2,3,4,6};
//     int arr[5];
//     // cout<<arr[2];
//     // arr[2] = 12;
//     // cout<<arr[0];
//     // cout<<arr[1];
//     // cout<<arr[2];
//     // cout<<arr[3];
//     // cout<<arr[4];
//     for(int i=0; i<5 ;i++)
//     {
//         cin>>arr[i];
//         cout<<arr[i]<<endl;
//     }
    
//     return 0 ;
// }

// #include <iostream>
// using namespace std ;
// int main()
// {
//     int arr[5] = {6,54,8,80,34};
//     cout<<&arr[2]<<endl;
//     cout<<&arr[3]<<endl;
//     cout<<&arr[4]<<endl;
//     return 0 ;
// }




// #include <iostream>
// using namespace std ;
// int main()
// {
//     int arr[6] = {2,66,34,51,99,100};
//     bool isaval = false ;

//     for(int i=0 ; i<6 ; i++)
//     {
//         if(arr[i] == 342) //key matched
//             isaval = 1 ;
//     }

//     if (!isaval)   // isaval = False  
//     {
//         cout<<"Its not aval";
//     }
//     else
//     cout<<"its available \n";

//     return 0 ;
// }




#include <iostream>
using namespace std ;
int main()
{
    int arr[6] = {2,66,34,51,99,100};

    for(int i=0 ; i<6 ; i++)
    {
       if(arr[i]==99)
       {
        cout<<"Its available";
        return 0;
       }
    }
    cout<<"Its not available";

    

    return 0 ;
}







