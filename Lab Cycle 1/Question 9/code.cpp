#include <iostream>

class Static{
    static int count;
public:
    Static();
    static void showcount();

};

int Static::count = 0;

Static::Static(){
    count++;
}

void Static::showcount(){
    std::cout<<"Number of Objects Created: "
}