#include <iostream>
#include<string.h>
using namespace std;

class x
{

public:
int a,b;

void read(int m,int n)
{
a=m;
b=n;
}

void show(x o)
{
cout<<++o.a<<endl<<++o.b<<endl;
cout<<&o.a<<endl<<&o.b<<endl;
}
};

int main()
{
x x1;
x1.read(10,20);
x1.show(x1);
cout<<x1.a<<endl<<x1.b<<endl;
cout<<&x1.a<<endl<<&x1.b<<endl;
x x2;
x2=x1;
x2.show(x2);
cout<<x2.a<<endl<<x2.b<<endl;
cout<<&x2.a<<endl<<&x2.b<<endl;
}
