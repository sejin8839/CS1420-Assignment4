#include<iostream>
using namespace std;

int main()
{
  char ch ='A';
   char *p=&ch;
   char **q=&p;
   char ***r =&q;

cout<<ch<<endl;
cout<<*p<<endl;
cout<<**q<<endl;
cout<<***r<<endl;
return 0;

}
