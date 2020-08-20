#include <iostream>

using namespace std;

int main()
{
    int *p;
    int x=37;
    cout<<"line1:x="<<x<<endl;

    p=&x;
    cout<<"line3:*p="<<*p<<",x="<<x<<endl;

    *p=58;
    cout<<"line5:*p="<<*p<<",x="<<x<<endl;
    cout<<"line6:address of p="<<&p<<endl;
    cout<<"line7:value of p="<<p<<endl;
    return 0;
}
