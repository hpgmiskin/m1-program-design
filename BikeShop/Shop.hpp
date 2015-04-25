#include <string>
using namespace std;

#include "Bike.hpp"
#include "Customer.hpp"
#include "Table.cpp"

class Shop{
private:
    Table<string,int> table;

public:
    Shop();
    void sell(Customer&, Bike&);
    void service(Customer&, Bike&);
};
