#include <iostream>
#include <string>
using namespace std;

// =============================================================================
// Template Function
// =============================================================================

template<class K, class V>
class Table{
private:
    K keys[10];
    V* values[10];
    int count;
public:
    Table(): count(0){}

    void insert(K key, V *value){
        keys[count] = key;
        values[count] = value;
        count++;
    }

    V* lookup(K key){
        for (int i=0; i<count; i++){
            if (key == keys[i]) return values[i];
        }
        return 0;
    }
};

// =============================================================================
// Header Files
// =============================================================================

class Attraction;

class Report{
private:
    int time;
    int length;
    friend class Attraction;
public:
    Report(int,int);
};

class Scout{
private:
    string name;
    int location;
    Report* report;
public:
    Scout(string,int);
    string getName() const;
    int getLocation() const;
};

class Attraction{
private:
    int location;
    int uniqueScouts;
    Scout* lastScout;
    Table<string,Report> table;
public:
    Attraction(int);
    Scout* getLastScout() const;
    Report* getLastReport(Scout* scout = 0);
    int getUniqueScouts() const;
    void submitReport(Scout*, Report*);
};

// =============================================================================
// Main Function
// =============================================================================

int main(){
    
    Attraction waterslides = Attraction(2);
    Scout charles = Scout("Charles",1);
    Report rep1 = Report(1,50);
    waterslides.submitReport(&charles,&rep1);

    Attraction crazyCoaster = Attraction(4);
    Scout susan = Scout("Susan",3);
    Report rep2 = Report(2,12);
    crazyCoaster.submitReport(&susan,&rep2);

    Scout* lastScout = crazyCoaster.getLastScout();
    Report* lastReport = crazyCoaster.getLastReport();

    cout << lastScout->getName() << endl;
    cout << waterslides.getUniqueScouts() << endl;

    return 0;
}

// =============================================================================
// Implementation Files
// =============================================================================

Report::Report(int time, int length): time(time), length(length){}

Scout::Scout(string name, int location): name(name), location(location){}

string Scout::getName() const {
    return name;
}

int Scout::getLocation() const {
    return location;
}


Attraction::Attraction(int location):
    location(location), uniqueScouts(0), lastScout(0){}

Scout* Attraction::getLastScout() const {
    return lastScout;
}

Report* Attraction::getLastReport(Scout* scout){
    // If scout provided is NULL then use last
    if (scout == 0) scout = lastScout;
    if (scout == 0) return 0;

    Report* report = table.lookup(scout->getName());

    int currentTime = 0;
    if ((currentTime - report->time) > 1800) return 0;

    return report;
}

int Attraction::getUniqueScouts() const {
    return uniqueScouts;
}

void Attraction::submitReport(Scout* scout, Report* report){
    // Check if unique scouts should be incremented
    if (!table.lookup(scout->getName())) uniqueScouts++;
    // Check if location too far away
    if ((abs(scout->getLocation()-location)) > 50) return;
    // Set last scout and insert table entry
    lastScout = scout;
    table.insert(scout->getName(),report);
}
