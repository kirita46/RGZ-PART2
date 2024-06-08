#ifndef PROG_RGZ_CPP_WHITEGOODS_H
#define PROG_RGZ_CPP_WHITEGOODS_H

#include <ostream>
#include "SetterUtil.h"

class WhiteGoods {
private:
    std::string vendor, model, color;
    int price;
public:
    WhiteGoods();

    WhiteGoods(std::string vendor = DEFAULT_VALUE_STRING, std::string model = DEFAULT_VALUE_STRING, std::string color = DEFAULT_VALUE_STRING, int price = 0);

    const std::string &getVendor() const;

    void setVendor(const std::string &vendor);

    const std::string &getModel() const;

    void setModel(const std::string &model);

    const std::string &getColor() const;

    void setColor(const std::string &color);

    int getPrice() const;

    void setPrice(int price);

    virtual void print(std::ostream& os) const;

    friend std::ostream &operator<<(std::ostream &os, const WhiteGoods &goods);

};

#endif //PROG_RGZ_CPP_WHITEGOODS_H
