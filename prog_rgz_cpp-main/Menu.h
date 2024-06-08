#ifndef PROG_RGZ_CPP_MENU_H
#define PROG_RGЗ_CPP_MENU_H

#include <ostream>
#include "TV.h"
#include "Radio.h"
#include "list"
#include "WhiteGoods.h"

#define AVAILABLE_POSITIONS 4

class Menu {
private:
    std::list<WhiteGoods *> state;
public:
    friend std::ostream &operator<<(std::ostream &os, const Menu &menu);

public:
    static void PrintMenu();

    void Run();

    int AwaitPick();

    void PerformAction(int pickedPosition);

    void AddToList(WhiteGoods *whiteGoods);

    void RemoveFromList(WhiteGoods *whiteGoods);

    void PrintList();

    void Exit();
};

#endif //PROG_RGЗ_CPP_MENU_H
