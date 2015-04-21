#include "University.hpp"

University::University(char* name): name(name){}

char* University::getName() const {
    return name;
}

bool University::operator != (const University& other) const {
    return (name != other.name);
}