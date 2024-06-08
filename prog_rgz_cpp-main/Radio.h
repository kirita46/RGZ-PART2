#ifndef PROG_RGZ_CPP_RADIO_H
#define PROG_RGZ_CPP_RADIO_H

#include "WhiteGoods.h"

class Radio : public WhiteGoods {
private:
    int frequencyRange;
public:
    int getFrequencyRange() const;

    void print(std::ostream &os) const override;

    Radio(const std::string &vendor = DEFAULT_VALUE_STRING, const std::string &model = DEFAULT_VALUE_STRING, const std::string &color = DEFAULT_VALUE_STRING, int price = DEFAULT_VALUE_INT, int frequencyRange = DEFAULT_VALUE_INT);
};

#endif //PROG_RGZ_CPP_RADIO_H
