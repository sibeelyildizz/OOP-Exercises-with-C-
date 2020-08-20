#include <iostream>


#include <dispenserType.h>
#include <cashRegister.h>
using namespace std;


void showSelection()
  {
	cout<<"*** Welcome to Shelly's Candy Shop ***"<<endl;
	cout<<"To select an item, enter "<<endl;
	cout<<"1 for Candy"<<endl;
	cout<<"2 for Chips"<<endl;
	cout<<"3 for Gum"<<endl;
	cout<<"4 for Cookies"<<endl;
	cout<<"9 to exit"<<endl;
   }

void sellProduct(dispenserType& product,cashRegister& count){
   int amount,numberofProuct;
   cin>>amount
    if(product.productCost()<amount)
    {
        cout<<"yetersiz bakiye"<<endl;
    }
    else if()


}
int main()
{
    cashRegister counter;
	dispenserType candy(100,50);
	dispenserType chips(100,65);
	dispenserType gum(75,45);
	dispenserType cookies(100,85);

	int choice;

	showSelection();
	cin>>choice;

	while(choice != 9)
	{
		switch(choice)
		{
		    case 1: sellProduct(candy, counter);
				break;
		    case 2: sellProduct(chips, counter);
				break;
		    case 3: sellProduct(gum, counter);
				break;
		    case 4: sellProduct(cookies, counter);
				break;
		    default: cout<<"Bad Selection"<<endl;
		}//end switch


    return 0;
}
}
