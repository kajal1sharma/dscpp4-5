
#include <iostream>

using namespace std;

int  print(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    return n+print(n-1);
}

int main()
{
    int n;
    cin>>n;
    int sum =print(n);
    cout<<sum;
    return 0;
}
