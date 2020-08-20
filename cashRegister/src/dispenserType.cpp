#include "dispenserType.h"

dispenserType::dispenserType()
{

}
int dispenserType::countt()
{
    return numberOfproducts;
}
int dispenserType::productCost()
{
    return cost;
}
dispenserType::dispenserType(int setNoOfProducts,int setCost )
{
    if(setNoOfProducts >= 0)
	   numberOfproducts = setNoOfProducts;
	else
	   numberOfproducts = 50;

	if(setCost >= 0)
	   cost = setCost;
	else
	   cost = 50;

}
int dispenserType::makeSale()
{
    numberOfproducts--;
}
dispenserType::~dispenserType()
{
    //dtor
}
