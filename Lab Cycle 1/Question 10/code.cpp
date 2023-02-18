#include <iostream>
using namespace std;

class store
{
    int code, quantity;
    string name;
    float price;

public:
    void add_item();
    void display_item();
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

void store::display_item()
{
    int sum = price * quantity;
    cout << code << "\t" << name << "\t" << price << "\t" << quantity << "\t\t" << sum << endl;
}

int main()
{
    int n, choice, code1;
    cout << "Enter the number of items : ";
    cin >> n;
    store obj[n];
    bool Loop = true;
    while (Loop)
    {
        cout << "\n1. Add item\n2. Display item\n3. Delete Item\n4. Exit\nEnter your choice : ";
        cin >> choice;
        if (choice == 1)
        {
            for (int i = 0; i < n; i++)
            {
                obj[i].add_item();
            }
        }
        else if (choice == 2)
        {
            cout << "\n--------------------RECEIPT--------------------\n";
            cout << "Code\tName\tPrice\tQuantity\tTotal\n";
            for (int i = 0; i < n; i++)
            {
                obj[i].display_item();
            }
            cout << "---------------------------------------------------\n";
        }
        else if (choice == 3)
        {
            cout << "Enter the code of the item to be deleted : ";
            cin >> code1;
            for (int i = 0; i < n - 1; i++)
            {
                if (obj[i].return_code() == code1)
                {
                    obj[i] = obj[i + 1];
                }
            }
            n--;
            cout << "Item deleted successfully\n";
        }
        else if (choice == 4)
        {
            Loop = false;
        }
        else
        {
            cout << "Invalid choice\n";
            break;
        }
    }
    return 0;
}
