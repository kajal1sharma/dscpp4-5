#include <iostream>
#include <cstring>
using namespace std;


string reverse(string s,int len,int si){
    
    if(len<=si){
        return s;
    }
    
    //swap
    
    char temp=s[si];
    s[si]=s[len];
    s[len]=temp;
    
    return reverse(s,len-1,si+1);
    
    
}

int main()
{
    //char arr[]="abcdefg";
   // int len=sizeof(arr)-1;
    string s="abcdefg";
    int len=s.length();
    //cout<<len;
    s=reverse(s,len-1,0);
  
    cout<<s;

    return 0;
}
