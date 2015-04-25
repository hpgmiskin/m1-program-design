#include <string>
using namespace std;

class Shop;

class Bike{
private:
    const string frame;
    const string model;
    const float price;
    friend class Shop;
public:
    Bike(const string, const string, const float);
};