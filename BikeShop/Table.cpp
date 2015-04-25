#include <iostream>
using namespace std;

template<class T1, class T2>
class Table{

private:
    T1 keys[10];
    T2 values[10];
    int count;

public:
    Table(): count(0){}

    void set(const T1 &key, T2 value){
        keys[count] = key;
        values[count] = value;
        count++;
    }

    T2* get(const T1 &key){
        for (int i=0; i<count; i++){
            if (keys[i] == key) return &values[i];
        }
        return 0;
    }
};
