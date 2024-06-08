#include "Menu.h"

void Menu::PrintMenu() {
    std::cout << "———— Menu ————" << std::endl;
    std::cout << "1) Create TV" << std::endl;
    std::cout << "2) Create Basic class (WhiteGoods)" << std::endl;
    std::cout << "3) Print List" << std::endl;
    std::cout << "0) Exit program" << std::endl;
}

TV *CreateTV() {
    std::string vendor, model, color;
    int screenSize, price;
    std::cout << "Vendor name: ";
    std::cin >> vendor;
    std::cout << "Model: ";
    std::cin >> model;
    std::cout << "Color: ";
    std::cin >> color;
    std::cout << "Screen size: ";
    std::cin >> screenSize;
    std::cout << "Price: ";
    std::cin >> price;
    return new TV(vendor, model, color, price, screenSize);
}

WhiteGoods *CreateWhiteGoods() {
    std::string vendor, model, color;
    int price;
    std::cout << "Vendor name: ";
    std::cin >> vendor;
    std::cout << "Model: ";
    std::cin >> model;
    std::cout << "Color: ";
    std::cin >> color;
    std::cout << "Price: ";
    std::cin >> price;
    return new WhiteGoods(vendor, model, color, price);
}

void Menu::Exit() {
    std::cout << "Exit..." << std::endl;
    state.clear();
}

void Menu::AddToList(WhiteGoods *whiteGoods) {
    state.push_back(whiteGoods);
    std::cout << "Object " << whiteGoods->getVendor() << " " << whiteGoods->getModel() << " added" << std::endl;
}

void Menu::RemoveFromList(WhiteGoods *whiteGoods) {
    state.remove(whiteGoods);
    std::cout << "Object " << whiteGoods->getVendor() << " " << whiteGoods->getModel() << " removed" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Menu& menu) {
    os << "List:" << std::endl;
    for (const auto& item : menu.state) {
        item->print(os);
    }
    return os;
}

void Menu::PrintList() {
    std::cout << "List:" << std::endl;
    for (const auto& item : state) {
        std::cout << *item << std::endl;
    }
}

void Menu::PerformAction(int pickedPosition) {
    switch (pickedPosition) {
        case 0: {
            Exit();
            break;
        }
        case 1: {
            Menu::AddToList(CreateTV());
            break;
        }
        case 2: {
            Menu::AddToList(CreateWhiteGoods());
            break;
        }
        case 3: {
            PrintList();
            break;
        }
        default:
            break;
    }
}

int Menu::AwaitPick() {
    int pickedPosition;
    std::cout << std::endl;
    std::cout << "Select action which you want: ";
    std::cin >> pickedPosition;
    if (pickedPosition > AVAILABLE_POSITIONS || pickedPosition < 0) {
        PrintMenu();
        AwaitPick();
        return -1;
    }
    return pickedPosition;
}

void Menu::Run() {
    PrintMenu();
    int pickedPosition;
    do {
        pickedPosition = AwaitPick();
        PerformAction(pickedPosition);
    } while (pickedPosition != 0);
}
