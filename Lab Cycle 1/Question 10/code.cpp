#include <iostream>
using namespace std;

class store
{
    int code, quantity;
    string name;
    float price;

public:
    void add_item();
    int display_item();
    int return_code()
    {
        return code;
    }
    store()
    {
    }
    store(const store &x)
    {
        code = x.code;
        name = x.name;
        price = x.price;
        quantity = x.quantity;
    }
};

void store::add_item()
{
    cout << "\nEnter the Product Name : ";
    cin >> name;
    cout << "Enter the Product Code : ";
    cin >> code;
    cout << "Enter the price of the Product : ";
    cin >> price;
    cout << "Enter the Quantity : ";
    cin >> quantity;
}

int store::display_item()
{
    int sum = price * quantity;
    cout << code << "\t" << name << "\t" << price << "\t" << quantity << "\t\t" << sum << endl;
    return sum;
}

int main()
{
    int choice, code1, total = 0,n=1;
    store obj[100];
    bool Loop = true;
    while (Loop)
    {
        cout << "\n--------------------MENU--------------------";
        cout << "\n1. Add item to Bill\n2. Display Bill\n3. Delete Item from Bill\n4. Exit\nEnter your choice : ";
        cin >> choice;
        if (choice == 1)
        {
            obj[n].add_item();
            n++;
        }
        else if (choice == 2)
        {
            cout << "\n--------------------RECEIPT--------------------\n";
            cout << "Code\tName\tPrice\tQuantity\tTotal\n";
            for (int i = 1; i < n; i++)
            {
                total += obj[i].display_item();
            }
            cout << "------------------------------------------------\n";
            cout << "                                      Total=" << total;
        }
        else if (choice == 3)
        {
        cout << "Enter the code of the item to be deleted : ";
            cin >> code1;
            bool item_found = false;
            for (int i = 1; i < n; i++)
            {
                int cod = obj[i].return_code();
                if (cod == code1)
                {
                    for (int j = i; j < n-1; j++) {
                        obj[j] = obj[j+1];
                    }
                    item_found = true;
                    n--;
                    break;
                }
            }
            if (item_found) {
                cout << "Item deleted successfully\n";
            } else {
                cout << "Item not found\n";
            }
        }
        else if (choice == 4)
        {
            Loop = false;
            cout << "Thank you for shopping with us\n";
        }
        else
        {
            cout << "Invalid choice\n";
            break;
        }
    }
    return 0;
}
