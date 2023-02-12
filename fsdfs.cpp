#include<iostream>
#include<iomanip>
using namespace std;
class shop
{
    private:
    int code;
    string name;
    float price;
    int quantity;
    public:
    void delete_item();
    void add_item();
    int display_item();
    int return_code()
    {
          return code;
    }
    shop()
    {}
    shop(const shop &i)
    {
        code=i.code;
        name=i.name;
        price=i.price;
        quantity=i.quantity;
    }
    int change_quantity();
};
void shop::add_item()
{
    cout<<"Enter the Product name : ";
    cin>>name;
    cout<<"Enter the Product code : ";
    cin>>code;
    cout<<"Enter the price of the Product : ";
    cin>>price;
    cout<<"Enter the Quantity : ";
    cin>>quantity;
}
int shop::display_item()
{
    int sum=price*quantity;
    cout<<setw(5)<<code<<setw(20)<<name<<setw(10)<<price<<setw(12)<<quantity<<setw(10)<<sum<<endl;
    return sum;
}
int shop::change_quantity()
{
    int a=0;
    cout<<"Enter quantity of "<<name<<" to be reduced ,currenty there are "<<quantity<<" "<<name<<" in the list : ";
    cin>>a;
    while(quantity-a<0)
    {
        cout<<"The quantity to be reduced is greater than quantity in the list, Please re-enter : ";
        cin>>a;
    }
    quantity-=a;
    if(quantity==0)
    return 1;
    else
    return 0;
}
int main()
{
    cout<<"------------------------------SHOP----------------------------"<<endl;
    int choice=0;
    shop ob[100];
    int i=1;
    do
    {
        cout<<"Enter 1 to add an item to the shopping list."<<endl;
        cout<<"Enter 2 to remove an item from the shopping list."<<endl;
        cout<<"Enter 3 to print the total value of the purchase order."<<endl;
        cout<<"Enter 4 to exit."<<endl<<endl;
        cout<<"Please Enter your choice : ";
        cin>>choice;
        cout<<endl;
        if(choice==1)
        {
            cout<<"---------------------------ADD ITEM--------------------------"<<endl;
            ob[i].add_item();
            i++;
            cout<<endl<<endl;
        }
        else if(choice ==2)
        {
            int cod,j=0,flag1=0,flag2=0,choice_1=0,index=0;
            cout<<"Enter the product code of the item to be deleted:";
            cin>>cod;
            while(flag1==0)
            {
                for(j=1;j<=i;j++)
                {
                    int code1=ob[j].return_code();
                    if(code1==cod)
                    {
                        flag2=1;
                        index=j;
                        break;
                    }                
                }  
                if(flag2==0)
                {
                    cout<<"The Entered code is Invalid, Please re-enter code:";
                    cin>>cod;
                }            
                if(flag2==1)
                {
                    flag1++;
                }
            }
            cout<<"Enter 1 to change quantity of the order."<<endl;
            cout<<"Enter 2 to delete the product completely."<<endl;
            cout<<"Enter your choice:";
            cin>>choice_1;
            while((choice_1!=1)&&(choice_1!=2))
            {
                cout<<"Wrong choice, Renter : ";
                cin>>choice_1;
            }
            switch (choice_1)
            {
            case 1:
                int k;
                k =ob[j].change_quantity();
                if(k==0)
                break;
            case 2:
                for(int k=index;k<i;k++)
                {
                    ob[k]=ob[k+1];
                }
                i--;
                cout<<"\nThe Product has been deleted from the list."<<endl;
                break;            
            default:
                break;
            }                    
            cout<<endl<<endl;
        }
        else if(choice ==3)
        {
            cout<<endl<<endl<<endl;
            int sum=0,total=0;
            cout<<"-------------------------RECEIPT------------------------------"<<endl;
            cout<<"| CODE  |  NAME               |  PRICE  |  QUANTITY  |  SUM  |"<<endl;
            for(int j=1;j<i;j++)
            {
                sum=ob[j].display_item();
                total+=sum;
            }
            cout<<"--------------------------------------------------------------"<<endl;
            cout<<"                                      TOTAL="<<total<<endl;
        }
        else if(choice==4)
        {
            cout<<"Thank You"<<endl;
            return 0; 
        }
        else
        {
            cout<<"Wrong Choice, Please re-enter : "<<endl<<endl;;       
        }
    } while (true);
    return 0;   
}