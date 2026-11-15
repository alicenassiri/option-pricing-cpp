#pragma once
#include "Option.h"

class BlackScholesPricer;

class EuropeanVanillaOption : public Option {
private:
    double _strike;

protected:
    double getStrike() const;

public:
    enum class optionType { call, put };

    EuropeanVanillaOption(double expiry, double strike);
    virtual optionType GetOptionType() = 0;

    friend class BlackScholesPricer;
};
