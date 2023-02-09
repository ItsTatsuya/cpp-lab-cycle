#include <iostream>

class Static{
    static int count;
public:
    Static();
    static void showcount();

};
Static::Static(){
    count++;
}
int Static::count = 0;

void Static::showcount(){
    std::cout<<"Number of Objects Created: "
}