#include "cashRegister.h"



cashRegister::currentBalance(){
        return cashOnHand;
}
void cashRegister::acceptAmount(int amountIn)
{
	cashOnHand += amountIn;
}
cashRegister::cashRegister(int cashIn)
{
	if(cashIn >= 0)
		cashOnHand = cashIn;
	else
		cashOnHand = 500;
}
cashRegister::~cashRegister()
{
    //dtor
}
