#include "TV.h"

TV::TV(const std::string &vendor, const std::string &model, const std::string &color, int price, int screenSize)
    : WhiteGoods(vendor, model, color, price), screenSize(screenSize) {}

int TV::getScreenSize() const {
    return screenSize;
}

void TV::print(std::ostream &os) const {
    WhiteGoods::print(os);
    os << " screen size: " << screenSize;
}
