#ifndef SPREADSHEET_H
#define SPREADSHEET_H

#include <vector>
#include "cell.h"
class SpreadSheet {
public:
    SpreadSheet();

private:
    std::vector<std::vector<Cell> > cells;
};

#endif