#include <iostream>
#include<string.h>
using namespace std;

class x
{

public:
static int c;
x()
{
c++;
cout<<"hai i am constructor "<<c<<endl;

}

void show()
{
cout<<"Number of objects created="<<c<<endl;
}

~x()
{
cout<<"hai i am destructor "<<c<<endl;
c--;
}
};
int x::c=0;

int main()
{
x a1;

x a2,a3,a4;


x a5;
a1.show();
}

