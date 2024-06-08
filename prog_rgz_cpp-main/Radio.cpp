#include "Radio.h"

Radio::Radio(const std::string &vendor, const std::string &model, const std::string &color, int price, int frequencyRange)
    : WhiteGoods(vendor, model, color, price), frequencyRange(frequencyRange) {}

int Radio::getFrequencyRange() const {
    return frequencyRange;
}

void Radio::print(std::ostream &os) const {
    WhiteGoods::print(os);
    os << " frequency range: " << frequencyRange;
}
