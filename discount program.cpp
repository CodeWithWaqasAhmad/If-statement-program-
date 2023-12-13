#include <iostream>

using namespace std;

int main()
{
    int quantity;
    float price, expenses, discount = 0;

    cout<<"enter the quantity of items purchased"<<endl;
    cin>>quantity;
    cout<<"\nenter the price of one items"<<endl;
    cin>>price;

    expenses = (quantity * price) - (quantity * price * discount);

    if (quantity > 1000)
        discount = 0.1;
    cout<<"\nyour total expenses after giving you "<<discount<<" is equal to"<<expenses;



    return 0;
}
