#ifndef DISPENSERTYPE_H
#define DISPENSERTYPE_H


class dispenserType
{
    public:
        dispenserType();
        dispenserType(int setNoOfProducts=50,int setCost=50);
        int countt(); //�r�n say�s�n� d�nd�r�r�
        int productCost();   //�r�n fiyat�
        int makeSale();  //�r�n say�s� azacalacak
        virtual ~dispenserType();

    protected:

    private:
        int numberOfproducts;
        int cost;
};

#endif // DISPENSERTYPE_H
