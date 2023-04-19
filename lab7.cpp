// 1
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


// 2
#include<iostream>
using  namespace std;

float * foo(float x, float y,float*z)
{
    *z =x+y;
    return z;

}
int main()
{
  float x = 4;
  float y =6;
  float z;
  cout<<*foo(x,y,&z);

}


// 3
#include<iostream>
using namespace std;
int * smaller(int *x, int* y);

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int *s=smaller(&a&b);
    cout<<"smaller= "<<*s<<endl;    
}

int * smaller(int *x, int* y)
{
    return(*x<*y?x:y);


}


// 4
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double *sum=nullptr,
    int sum=0,N;
    cout<<"Enter array size: ";
    cin<<N;

    int *a = new int[N];
    cout<<"\nEnter "<<N<<"interger numbers: ";

    for (int i=0; i<N, i++)
    {   
        cin>>*(a+i);
    }
    
    cout<<"Input array is..."<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<a[i]<<endl;
        sum=sum+a[i];
    }
    cout<<"Total Sum= "<<sum;

    delete []a;
    a=nullptr;
}

