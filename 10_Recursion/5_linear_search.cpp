#include <iostream>
using namespace std ; 

bool linearsearch(int arr[],int size,int k)
{
    if(size==0){
        return 0 ; 
    }
    if (arr[0] == k )
    {
        return true; 
    }
    bool remaining = linearsearch(arr+1,size-1,k);
    return remaining; 
   
}
int main()
{

    
   int arr[5] = {9,6,1,8,5};
   int size =5;
   int key = 8;
   bool ans = linearsearch(arr,size,key);
   if(ans)
   {
    cout<<"Present"<<endl;
   }
   else{
    cout<<"Absent"<<endl;
   }
return 0;
}
