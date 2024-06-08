#ifndef PROG_RGZ_CPP_TV_H
#define PROG_RGZ_CPP_TV_H

#include "WhiteGoods.h"

class TV : public WhiteGoods {
private:
    int screenSize;
public:
    int getScreenSize() const;

    void print(std::ostream &os) const override;

    TV(const std::string &vendor = DEFAULT_VALUE_STRING, const std::string &model = DEFAULT_VALUE_STRING, const std::string &color = DEFAULT_VALUE_STRING, int price = DEFAULT_VALUE_INT, int screenSize = DEFAULT_VALUE_INT);
};

#endif //PROG_RGZ_CPP_TV_H
