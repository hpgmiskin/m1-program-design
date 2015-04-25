#include <iostream>
using namespace std;

#include "Table.cpp"


class Test{
    int i;
public:
    Test(){}
    Test(int i): i(i){}
    int get(){ return i; }
    friend ostream& operator << (ostream& o, const Test t){
        return o << t.i;
    }
};

int main(){

    Table<int,Test> table;

    const int key1 = 1;
    Test value1 = Test(1);
    table.set(key1,value1);
    cout << *table.get(key1) << endl;

    const int key2 = 2;
    Test value2 = Test(2);
    table.set(key2,value2);
    cout << *table.get(key2) << endl;

    const int key200 = 200;
    Test value200 = Test(200);
    table.set(key200,value200);
    cout << *table.get(key200) << endl;

    cout << *table.get(key200) << endl;
    cout << *table.get(key2) << endl;
    cout << *table.get(key1) << endl;

    return 0;
}