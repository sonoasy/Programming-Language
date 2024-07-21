#include<vector>
#include <iostream>
#include<map>
using namespace std;

void moom(int *a,int *b,int *c,int age){
    *a=age-4;
    *b=age+3;
    *c=age*2;
}


int main()
{
  int age;
  cin>>age; 
  int a,b,c;
  moom(&a,&b,&c,age);
  cout<<a<<' '<<b<<' '<<c;
}
