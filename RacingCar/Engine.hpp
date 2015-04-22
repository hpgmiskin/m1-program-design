class Engine{
private:
    float mass;

protected:
    float powerFactor;
    int cylinders;

public:
    Engine(float, float, int);
    float getMass() const ;
    virtual float getTime(float, float) const = 0;
};

class TurboCharge2000: public Engine{
public:
    TurboCharge2000(float, float, int);
    virtual float getTime(float, float) const;
};

class SupermanV3: public Engine{
public:
    SupermanV3(float, float, int);
    virtual float getTime(float, float) const;
};