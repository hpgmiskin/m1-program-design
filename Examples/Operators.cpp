#include <iostream>
using namespace std;

class Expression {
public:
  virtual int value() const = 0;
  virtual void print(ostream& o) const = 0;

  friend ostream& operator << (ostream& o, const Expression& e){
    e.print(o);
    return o;
  }
};

class Number : public Expression {
private:
  int _value;

protected:
  virtual void print(ostream& o) const {
    o << "(" << value() << ")";
  }

public:
  Number(int value) : _value(value) {}

  int value() const {
    return _value; }
};

class LBinary : public Expression {
  Expression &_left, &_right;

protected:
  virtual int calculate(int v1, int v2) const = 0;

  virtual void print(ostream& o) const {
    o << "(" << left() << symbol() << right() << ") = " << value();
  }

public:
  LBinary(Expression &left, Expression &right) : _left(left), _right(right) {}

  Expression &left() const {
    return _left;
  }

  Expression &right() const {
    return _right;
  }
  
  virtual const char *symbol() const = 0;
  virtual int value() const {
    return calculate(_left.value(), _right.value());
  } };


class Addition : public LBinary {
protected:
  virtual int calculate(int v1, int v2) const {
    return v1 + v2;
  }
public:
  Addition(Expression &left, Expression &right) : LBinary(left, right) {}
  virtual const char *symbol() const {
    return "+";
  }
};

class Multiplication : public LBinary {
protected:
  virtual int calculate(int v1, int v2) const {
    return v1 * v2;
  }
public:
  Multiplication(Expression &l, Expression &r) : LBinary(l, r) {}
  virtual const char *symbol() const {
    return "*";
  }
};


int main() {
  Number n2(2), n3(3), n_1(-1);

  cout << n_1 << endl;
  // SIMPLE OUTPUT : -1 = -1
  // MINIMUM OUTPUT: -1 = -1
  Addition a1(n2, n_1);
  cout << a1 << endl;
  // SIMPLE OUTPUT : (2)+(-1) = 1 // MINIMUM OUTPUT: 2+(-1) = 1
  Addition a2(n_1, n3);
  cout << a2 << endl;
  // SIMPLE OUTPUT : (-1)+(3) = 2 // MINIMUM OUTPUT: -1+3 = 2
  Multiplication m1(n3, a1);
  cout << m1 << endl;
  // SIMPLE OUTPUT : (3)*((2)+(-1)) = 3 // MINIMUM OUTPUT: 3*(2+(-1)) = 3
  Addition a3(m1, a1);
  cout << a3 << endl;
  // SIMPLE OUTPUT : ((3)*(2+(-1)))+(2+(-1)) = 4 // MINIMUM OUTPUT: 3*(2+(-1))+(2+(-1)) = 4
  Addition a4(a1, m1);
  cout << a4 << endl;
  // SIMPLE OUTPUT : ((2)+(-1))+((3)*(2+(-1))) = 4 // MINIMUM OUTPUT: 2+(-1)+3*(2+(-1)) = 4
} 
