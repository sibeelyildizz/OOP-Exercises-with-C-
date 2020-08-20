#ifndef DISPENSERTYPE_H
#define DISPENSERTYPE_H


class dispenserType
{
    public:
        dispenserType();
        dispenserType(int setNoOfProducts=50,int setCost=50);
        int countt(); //ürün sayýsýný döndürürü
        int productCost();   //ürün fiyatý
        int makeSale();  //ürün sayýsý azacalacak
        virtual ~dispenserType();

    protected:

    private:
        int numberOfproducts;
        int cost;
};

#endif // DISPENSERTYPE_H
