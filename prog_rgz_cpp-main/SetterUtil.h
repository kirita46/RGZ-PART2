#ifndef PROG_RGЗ_CPP_SETTERUTIL_H
#define PROG_RGЗ_CPP_SETTERUTIL_H

#define VENDOR_NAME_SIZE_MIN 2
#define VENDOR_NAME_SIZE_MAX 30
#define MODEL_NAME_SIZE_MIN 2
#define MODEL_NAME_SIZE_MAX 30
#define COLOR_NAME_SIZE_MIN 2
#define COLOR_NAME_SIZE_MAX 15
#define PRICE_VALUE_MIN 0

#define DEFAULT_VALUE_STRING "none"
#define DEFAULT_VALUE_INT 0

#include "iostream"

std::string validVendor(std::string vendor);

std::string validModel(std::string model);

std::string validColor(std::string color);

int validPrice(int price);

#endif //PROG_RGЗ_CPP_SETTERUTIL_H
