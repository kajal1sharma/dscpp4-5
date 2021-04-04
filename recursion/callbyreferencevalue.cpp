#include <string.h>
#include <iostream>

using namespace std;

void reverse(int *c){
   *c=89;
}
void reverse2(int v){
    v=90;
    
}
int main()
{
   //pass by value
   int b=89;
   reverse2(b);
   cout<<b;
   //pass by reference
   int a=90;
   reverse(&a);
  //cout<<a;

    return 0;
}
