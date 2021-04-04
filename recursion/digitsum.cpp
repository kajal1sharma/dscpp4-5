
#include <iostream>

using namespace std;

int digisum(int n){
    if(n==0){
        return 0;
    }
    return n%10+digisum(n/10);
    // int sum=digisum(n/10);//head recursion
    // return n%10 +sum;
}
int main()
{
    cout<< digisum(12006);

    return 0;
}
