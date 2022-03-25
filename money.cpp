#include "money.h"

// Constructor and Destructor
Money::Money()
{
    //...
}

Money::Money(int dollars, int cents)
{
    totalCents += (dollars * 100) + cents;
}

Money::~Money()
{
    //...
}



// Relational Operators
bool Money::operator == (const Money &rhs)
{
    return totalCents == rhs.totalCents;
}

bool Money::operator != (const Money &rhs)
{
    return totalCents != rhs.totalCents;
}

bool Money::operator <= (const Money &rhs)
{
    return totalCents <= rhs.totalCents;
}
bool Money::operator >= (const Money &rhs)
{
    return totalCents >= rhs.totalCents;
}

bool Money::operator < (const Money &rhs)
{
    return totalCents < rhs.totalCents;
}

bool Money::operator > (const Money &rhs)
{
    return totalCents > rhs.totalCents;
}



// Math Operators
bool Money::operator + (const Money &rhs)
{
    return totalCents + rhs.totalCents;
}

bool Money::operator - (const Money &rhs)
{
    return totalCents - rhs.totalCents;
}



// Stream Operator
std::ostream& operator << (std::ostream& out, const Money& money)
{
    out << "$" << money.totalCents * 0.01 << std::endl;
    return out;
}