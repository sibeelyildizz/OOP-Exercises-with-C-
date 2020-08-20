#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream dosya;
    dosya.open("deneme.txt",ios::out|ios::in|ios::app);
    char text;
    dosya>>text;
    dosya<<text;
    dosya.close();
}
