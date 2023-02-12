#include <iostream>
using namespace std;

class store{
    int code,quantity;
    string name;
    float price;
public:
    void add_item();
    void del_item();
    int dislay_item();
};

void store::add_item()
{
    cout<<"\nEnter the Product name : ";
    cin>>name;
    cout<<"\nEnter the Product code : ";
    cin>>code;
    cout<<"\nEnter the price of the Product : ";
    cin>>price;
    cout<<"\nEnter the Quantity : ";
    cin>>quantity;
}

void store::del_item(){
    cout<<"Enter the product code of the item to be deleted:";
}
