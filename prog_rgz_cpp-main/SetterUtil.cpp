#include "SetterUtil.h"

std::string validVendor(const std::string vendor) {
    if (vendor.length() < VENDOR_NAME_SIZE_MIN || vendor.length() > VENDOR_NAME_SIZE_MAX)
        return DEFAULT_VALUE_STRING;
    return vendor;
}

std::string validModel(std::string model) {
    if (model.length() < MODEL_NAME_SIZE_MIN || model.length() > MODEL_NAME_SIZE_MAX)
        return DEFAULT_VALUE_STRING;
    return model;
}

std::string validColor(std::string color) {
    if (color.length() < COLOR_NAME_SIZE_MIN || color.length() > MODEL_NAME_SIZE_MAX)
        return DEFAULT_VALUE_STRING;
    return color;
}

int validPrice(int price) {
    if (price < PRICE_VALUE_MIN || price > INT32_MAX)
        return DEFAULT_VALUE_INT;
    return price;
}
