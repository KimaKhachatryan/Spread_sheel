#ifndef CELL_HPP
#define CELL_HPP
//ctors

Cell::Cell () 
{
}

Cell::Cell (const Cell& other) 
    : info(other.info)
{
}

Cell::Cell (Cell&& other) 
    : info(std::move(other.info))
{
}

Cell::Cell (std::string other)
    : info(std::move(other))
{
}

Cell::Cell (int other)
{
    info = std::to_string(other);
}

Cell::Cell (double other)
{
    info = std::to_string(other);
}

// ----------------------------------------------------------------
//operator overload

const Cell& Cell::operator= (const Cell& other)
{
    info = other.info;
    return *this;
}

const Cell& Cell::operator= (Cell&& other)
{
    if (info != other.info) {
        info = std::move(other.info);
        return *this;
    }
}

const Cell& Cell::operator= (std::string other)
{
    info = std::move(other);
    return *this;
}

const Cell& Cell::operator= (int other)
{
    info = std::to_string(other);
    return *this;
}

const Cell& Cell::operator= (double other)
{
    info = std::to_string(other);
    return *this;
}

//----------------------------------------------------------------

Cell::operator std::string() const
{
    return info;
}

Cell::operator double() const
{
    return std::stod(info);
}

Cell::operator int() const
{
    return std::stoi(info);
}

//----------------------------------------------------------------

bool Cell::operator== (const Cell& other) const
{
    return other.info == info;
}

bool Cell::operator!= (const Cell& other) const
{
    return other.info!= info;
}

#endif