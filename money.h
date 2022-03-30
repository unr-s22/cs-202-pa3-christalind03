#include <iostream>

class Money
{
    private:
        int totalCents = 0;

    public:
        Money();
        Money(int dollars, int cents);
        virtual ~Money();

        // Relational Operators
        bool operator == (const Money &rhs);
        bool operator != (const Money &rhs);
        bool operator <= (const Money &rhs);
        bool operator >= (const Money &rhs);
        bool operator < (const Money &rhs);
        bool operator > (const Money &rhs);

        // Math Operators
        Money operator + (const Money &rhs);
        Money operator - (const Money &rhs);

        // Friend Operator
        friend std::ostream& operator << (std::ostream& out, const Money& money);
};