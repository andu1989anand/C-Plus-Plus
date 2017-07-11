#include <iostream>
using namespace std;

class x
{
int r,i;

public:

x()
{
}
x(int m,int n)
{
r=m;
i=n;
}

void show()
{
cout<<r<<"+i"<<i<<endl;
}

friend x add(x x1,x x2);
};
x add(x x1,x x2)
{
x t;
t.r=x1.r+x2.r;
t.i=x1.i+x2.i;
return t;
}


int main()
{
x x1(10,20);
x x2(20,40);

x1.show();
x2.show();

x x3;
x3=add(x1,x2);
x3.show();
}
