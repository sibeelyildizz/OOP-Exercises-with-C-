#include <iostream>

using namespace std;



int main()
{
 int array[]={1,2,3,4};
 int *ptr=array;
 cout<<ptr[3]<<endl;



    return 0;
}



////uygulama 1

/*

int main()
{
    int a=12;
    int *p=&a;

    cout<<"pyi yazdirma...."<<p<<endl;  //pyi yazd�rma
    cout<<"anin adresi..."<<&a<<endl; //an�n adresi
    cout<<"pyi yazdirma..."<<*p<<endl;  //pyi yazd�rma
    cout<<"anin degeri..."<<a<<endl;  //an�n degeri



    cout << "Hello world!" << endl;
    *p=220;
     cout<<"pyi yazdirma...."<<p<<endl;  //pyi yazd�rma
    cout<<"anin adresi..."<<&a<<endl; //an�n adresi
    cout<<"pyi yazdirma..."<<*p<<endl;  //pyi yazd�rma
    cout<<"anin degeri..."<<a<<endl;  //an�n degeri



    return 0;
}


UYGULAMA 2

void Arttir(int *a)
{
    (*a)++;
}

int main()
{
 int sayi=120;
 cout<<"arttirmadan once:"<<sayi<<endl;
 Arttir(&sayi);    //!!!!!!say�n�n adresini veriyorsun

   cout<<"arttirdan sonra:"<<sayi<<endl;

    return 0;
}



UYGULAMA 3

int main()
{
 int array[]={1,2,3,4};


 cout<<array<<endl;   //ekrana ba�lang�� de�erinin adresini yazar
 cout<<array+1<<endl;
 int *ptr=array;//ba�lang�� adresinin de�erini pointera atam�� olursun
 cout<<ptr<<endl;
 cout<<ptr+1<<endl;
    return 0;
}

UYGULAMA 4
int main()
{
 int array[]={1,2,3,4};
 int *ptr=&array[1];   //1. indisin bulundugu adres

 cout<<ptr<<endl;  //ekrana adresi basar
 cout<<*ptr<<endl;   //ekrana o adresteki eleman� basar


    return 0;
}
*/
