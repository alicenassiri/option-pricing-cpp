#pragma once

class Option {
private:
    double _expiry;

public:
    Option(double expiry);
    virtual ~Option() {}

    double getExpiry() const;
    virtual double payoff(double) = 0;
};
