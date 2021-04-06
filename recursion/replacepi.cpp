#include <iostream>
#include <string.h>

using namespace std;

string replacepi(string s,int in){
    if(in==s.length()){
        return s;
    }
    
    if(s[in]=='p'&&  s[in+1]=='i'){
        string ns=s.substr(0,in)+"3.14"+s.substr(in+2);
        return replacepi(ns,in+4);
    }
    else{
        return replacepi(s,in+1);
    }
}

int main()
{
    string s="piabcpiabcpip";
    
    s=replacepi(s,0);
    cout<<s;
    return 0;
}
