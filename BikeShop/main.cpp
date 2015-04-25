#include <iostream>
using namespace std;

#include "Shop.hpp"

int main(){

    Shop shop = Shop();

    Customer lance = Customer("Lance");
    lance.deposit(2000);

    Bike b1 = Bike("TK15895","Trek",475);
    Bike b2 = Bike("SS82300","Specialized",1600);

    shop.sell(lance,b1);
    shop.sell(lance,b2);

    shop.service(lance,b1);
    // shop.service(lance,b1);
    // shop.service(lance,b1);
    shop.service(lance,b2);

    return 0;
}