#include <iostream>
class bank
{
    int static count ;
    std::string cust_name;
    int acc_no;
    char acc_type;
    float balance, withdraw_amount;

public:
    void new_account()
    {
        int count;
        count++;
        acc_no = count;
        std::cout << "\nEnter your name:";
        std::cin >> cust_name;
        std::cout << "Enter the type of Account your prefer\nS for Savings Account\nC for Current Account\nChoose your Option:";
        std::cin >> acc_type;
        std::cout << "\nEnter the Amount you want to deposit (Minimum Balance is Rs.500):";
        std::cin >> balance;
        std::cout << "Account Creation Successfull!"<< "\n";
        std::cout << "Your Account Number is " << acc_no;
    }

    void withdraw()
    {
        std::cout << "Enter the amount to withdraw\n";
        std::cin >> withdraw_amount;
        if ((balance - withdraw_amount) > 500)
        {
            balance = balance - withdraw_amount;
            std::cout << "₹" << withdraw_amount << " withdrawn\n";
        }
        else
        {
            std::cout << "Required Minimum Balance not available!!";
        }
    }
    void deposit()
    {
        std::cout << "Enter the amount you have to deposit\n";
        std::cin >> withdraw_amount;
        balance = withdraw_amount + balance;
        std::cout << "Rs." << withdraw_amount << " is deposited\n";
    }

    void balance_enquiry()
    {
        std::cout << "Current Balance is Rs." << balance << "\n";
    }

    void acc_statement()
    {
        std::cout << "------------------------------------\n";
        std::cout << "Your Account Statement is \n";
        std::cout << "Account Holder  : " << cust_name << "\n";
        std::cout << "Account No      : " << acc_no << "\n";
        std::cout << "Account Type    : " << acc_type << "\n";
        std::cout << "Account Balance : Rs." << balance << "\n";
        std::cout << "------------------------------------\n";
    }
};
int main()
{
    int customer_number, choice;
    std::cout << "Enter No of Customers";
    std::cin >> customer_number;
    bank *customer = new bank[customer_number];

    for (int i = 0; i < customer_number; ++i)
    {
        std::cout << "Main Menu\n1.Press 1 for New Account\n2.Press 2 to Withdraw\n3.Press 3 to Deposit\n4.Press 4 to check balance\n5.Press 5 for Account Statement";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            customer[i].new_account();
            break;
        case 2:
            customer[i].withdraw();
            break;
        case 3:
            customer[i].deposit();
            break;
        case 4:
            customer[i].balance_enquiry();
            break;
        case 5:
            customer[i].acc_statement();
            break;
        default:
            std::cout << "Error! , Try Again";
            break;
        }
    }
    return 0;
}