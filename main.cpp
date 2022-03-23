#include "money.h"

int main ()
{
    // Testing "Money"
    Money m(100, 10);
    std::cout << m << std::endl;

    return 0;
}

std::ostream& operator << (std::ostream& out, const Money& money)
{
    int dollars = money.totalCents / 100;
    int cents = money.totalCents % 100;

    out << "$" << dollars << "." << cents << std::endl;
    return out;
}