#include "WhiteGoods.h"

#include <utility>

WhiteGoods::WhiteGoods() = default;

WhiteGoods::WhiteGoods(std::string vendor, std::string model, std::string color, int price)
        : vendor(std::move(vendor)), model(std::move(model)), color(std::move(color)), price(price) {}

const std::string &WhiteGoods::getVendor() const {
    return vendor;
}

void WhiteGoods::setVendor(const std::string &vendor) {
    WhiteGoods::vendor = validVendor(vendor);
}

const std::string &WhiteGoods::getModel() const {
    return model;
}

void WhiteGoods::setModel(const std::string &model) {
    WhiteGoods::model = validModel(model);
}

const std::string &WhiteGoods::getColor() const {
    return color;
}

void WhiteGoods::setColor(const std::string &color) {
    WhiteGoods::color = validColor(color);
}

int WhiteGoods::getPrice() const {
    return price;
}

void WhiteGoods::setPrice(int price) {
    WhiteGoods::price = validPrice(price);
}

void WhiteGoods::print(std::ostream& os) const {
    os << "vendor: " << WhiteGoods::vendor << " model: " << WhiteGoods::model << " color: " << WhiteGoods::color << " price: " << WhiteGoods::price;
}

std::ostream& operator<<(std::ostream& os, const WhiteGoods& goods) {
    os << "vendor: " << goods.vendor << " model: " << goods.model << " color: " << goods.color << " price: " << goods.price;
    return os;
}
