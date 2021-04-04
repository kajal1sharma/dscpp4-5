
#include <iostream>

using namespace std;
void print(int n){
    if(n==1){
    cout<<n<<" ";
    return;
        
    }
    //linear recursion
    cout<<n<<" ";
    print(n-1);
    cout<<n<<" ";
    
}

int main()
{
    int n;
    cin>>n;
    print(n);
    //cout<<sum;
    return 0;
}
