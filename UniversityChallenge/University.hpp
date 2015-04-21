
class University{

private:
    char* name;

public:
    University(char*);
    char* getName() const;
    bool operator != (const University&) const;

};