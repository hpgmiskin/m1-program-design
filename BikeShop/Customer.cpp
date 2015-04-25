#include "Customer.hpp"

Customer::Customer(const string name): name(name){
    balance = 0;
}

const string Customer::getName() const {
    return name;
}

void Customer::deposit(float amount){
    balance += amount;
}

bool Customer::pay(float amount){
    if (balance >= amount){
        balance -= amount;
        return true;
    }
    return false;
}