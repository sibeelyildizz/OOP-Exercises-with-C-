#ifndef CASHREGISTER_H
#define CASHREGISTER_H



class cashRegister
{
    public:
        //cashRegister();
        int currentBalance();
        void acceptAmount(int amountIn);
        cashRegister(int cashIn=500);
        virtual ~cashRegister();

    protected:

    private:
        int cashOnHand;
};

#endif // CASHREGISTER_H
