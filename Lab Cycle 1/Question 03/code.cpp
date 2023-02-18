#include <iostream>
#include <string>

class bank
{
private:
    static int count;
    std::string customer_name;
    std::string account_type;
    int account_no;
    float balance;

public:
    void new_account(void);
    void deposit(float);
    void withdraw(float);
    void balance_enquiry(void);
    void account_summary(void);
};

int bank::count = 0;

void bank::new_account()
{
    count++;
    std::cout << "\nEnter the name of customer " << count << ": ";
    std::cin >> customer_name;
    std::cout << "Enter your account type (S for Savings, F for fixed deposit account): ";
    std::cin >> account_type;
    std::cout << "Your account number is: " << count << "\n";
    account_no = count;
    std::cout << "Enter the amount of money you want to deposit (Min is ₹500) : ";
    std::cin >> balance;
    std::cout << "Your account has been created successfully.\n";
}

void bank::deposit(float amount)
{
    balance += amount;
}

void bank::withdraw(float amount)
{
    if ((balance - amount) < 500)
    {
        std::cout << "You can't withdraw this amount. You need to keep at least ₹500 in your account.\n";
    }
    else
    {
        balance -= amount;
        std::cout << "₹" << amount << " Withdrawn\n";
    }
}

void bank::balance_enquiry()
{
    std::cout << "Your balance is ₹" << balance << "\n";
}

void bank::account_summary()
{
    std::cout << "\n-----------------------\n";
    std::cout << "Account Statement\n";
    std::cout << "Customer Name: " << customer_name << "\n";
    std::cout << "Account Type: " << account_type << "\n";
    std::cout << "Account Number: " << account_no << "\n";
    std::cout << "Balance Amount: ₹" << balance << "\n";
    std::cout << "-----------------------\n";
}

int main()
{
    int n;
    std::cout << "\nEnter the number of customers: ";
    std::cin >> n;
    bank b[n];
    for (int i = 0; i < n; i++)
    {
        b[i].new_account();
    }
    bool Loop = true;
    while (Loop)
    {
        int choice;
        std::cout << "\n-----Main Menu----\n";
        std::cout << "1. Deposit\n";
        std::cout << "2. Withdraw\n";
        std::cout << "3. Balance Enquiry\n";
        std::cout << "4. Account Statement\n";
        std::cout << "5. Exit\n";
        std::cout << "------------------------\n";
        std::cout << "\nEnter your choice: ";
        std::cin >> choice;
        int acc_no;
        float amount;
        switch (choice)
        {
        case 1:
            std::cout << "Enter your account number: ";
            std::cin >> acc_no;
            std::cout << "Enter the amount you want to deposit: ";
            std::cin >> amount;
            b[acc_no - 1].deposit(amount);
            break;
        case 2:
            std::cout << "Enter your account number: ";
            std::cin >> acc_no;
            std::cout << "Enter the amount you want to withdraw: ";
            std::cin >> amount;
            b[acc_no - 1].withdraw(amount);
            break;
        case 3:
            std::cout << "Enter your account number: ";
            std::cin >> acc_no;
            b[acc_no - 1].balance_enquiry();
            break;
        case 4:
            std::cout << "Enter your account number: ";
            std::cin >> acc_no;
            b[acc_no - 1].account_summary();
            break;
        case 5:
            std::cout << "/nCome back later!!.\n";
            Loop = false;
            break;
        default:
            std::cout << "Please provide a valid choice!.\n";
            break;
        }
    }
    return 0;
}