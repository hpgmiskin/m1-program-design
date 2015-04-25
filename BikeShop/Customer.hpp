#include <string>
using namespace std;

class Customer{
private:
    const string name;
    float balance;
public:
    Customer(const string);
    const string getName() const;
    void deposit(float);
    bool pay(float);
};