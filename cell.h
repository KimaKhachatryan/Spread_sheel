#ifndef CELL_H
#define CELL_H
#include <string>
#include <iostream>

class Cell {
public:
//ctor
    Cell () {}
    Cell (const Cell& other);
    Cell (Cell&& other);
    Cell (std::string other); 
    Cell (int other);
    Cell (double other); 

//operator oveloading 
    const Cell& operator=(const Cell& other);
    const Cell& operator=(Cell&& other);
    const Cell& operator=(std::string other);
    const Cell& operator=(int other);
    const Cell& operator=(double other); 

    operator std::string() const;
    operator int() const;
    operator double() const;

    bool operator == (const Cell& other) const;
    bool operator!= (const Cell& other) const;

private:
    std::string info;
};

std::ostream& operator<<(std::ostream& stream, const Cell& cell)
{
    stream << (std::string)cell;
    return stream;
}

#include "Cell.hpp"

#endif