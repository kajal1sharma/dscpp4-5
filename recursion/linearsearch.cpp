#include <iostream>
#include <string.h>

using namespace std;

int linearsearch(int *arr,int key,int in,int len){
    if(in==len){
        return -1;
    }
    
    if(arr[in]==key)
    return in;
    else{
        return linearsearch(arr,key,in+1,len);
    }
}
int linearsearch2(int *arr,int key,int in,int len){
    if(in==len){
        return -1;
    }
    int index=linearsearch(arr,key,in+1,len);
    if(index==-1 && arr[in]==key){
        index=in;
        return index;
    }
    else{
        return index;
    }
}
int main()
{
    int arr[]={1,6,4,7,5,3,2,5,6};
    int len=sizeof(arr)/sizeof(int);
    //int key=2;
    int key=10;
    
    int index=linearsearch(arr,key,0,len);
    if(index==-1){
        cout<<"element not present";
        
    }
    else{
        cout<<"element present at "<<index<<" index";
    }
    return 0;
}
