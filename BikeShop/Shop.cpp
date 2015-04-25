#include "Shop.hpp"

Shop::Shop(){};

void Shop::sell(Customer& customer, Bike& bike){
    if (customer.pay(bike.price)){
        table.set(bike.frame,0);
        cout << bike.model << " bike sold to "
             << customer.getName() << endl;
    }
}

void Shop::service(Customer& customer, Bike& bike){
    int* services = table.get(bike.frame);

    if (!services){
        cout << customer.getName() << " does not own a "
             << bike.model << " bike" << endl;
        return;
    }

    float price = 40;
    if (*services == 0){
        price = 0;
    } else if (*services == 1){
        price = 20;
    }

    if (customer.pay(price)){
        *services += 1;
        cout << customer.getName() << " paid " << price
             << " to service a " << bike.model << " bike" << endl;
    }
}