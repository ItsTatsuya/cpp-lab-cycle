#include <iostream>

class Static
{
    static int count;

public:
    Static();
    void static showcount();
};

int Static::count;

Static::Static()
{
    count++;
}

void Static::showcount()
{
    std::cout << "\nNumber of Objects Created: "<<count;
}

int main(){
    int x;
    std::cout<<"Enter the number of objects to create: ";
    std::cin>>x;
    Static st[x];
    st[x-1].showcount();
    return 0;
}