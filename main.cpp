#include "account.h"

int main ()
{
    Money startingAmount(300, 23);
    Account myAccount(startingAmount);

    std::cout << myAccount << std::endl;

    Money depositOne(200, 0);
    myAccount.makeDeposit(depositOne);
    Money depositTwo(300, 24);
    myAccount.makeDeposit(depositTwo);
    Money depositThree(501, 22);
    myAccount.makeDeposit(depositThree);

    std::cout << myAccount << std::endl;

    Money withdrawOne(300, 10);
    myAccount.makeWithdrawals(withdrawOne);
    Money withdrawTwo(201, 34);
    myAccount.makeWithdrawals(withdrawTwo);

    std::cout << myAccount << std::endl;

    // Testing Relational Operators (<, >, <=, >=, !=, ==)
    if (depositOne < depositTwo)
    {
        std::cout << "Testing Operator '<': True" << std::endl;
    } else
    {
        std::cout << "Testing Operator '<': False" << std::endl;
    }

    if (depositOne > depositTwo)
    {
        std::cout << "Testing Operator '>': True" << std::endl;
    } else
    {
        std::cout << "Testing Operator '>': False" << std::endl;
    }

    if (depositOne <= depositTwo)
    {
        std::cout << "Testing Operator '<=': True" << std::endl;
    } else
    {
        std::cout << "Testing Operator '<=': False" << std::endl;
    }

    if (depositOne >= depositTwo)
    {
        std::cout << "Testing Operator '>=': True" << std::endl;
    } else
    {
        std::cout << "Testing Operator '>=': False" << std::endl;
    }

    if (depositOne != depositTwo)
    {
        std::cout << "Testing Operator '!=': True" << std::endl;
    } else
    {
        std::cout << "Testing Operator '!=': False" << std::endl;
    }

    if (depositOne == depositTwo)
    {
        std::cout << "Testing Operator '==': True" << std::endl;
    } else
    {
        std::cout << "Testing Operator '==': False" << std::endl;
    }

    return 0;
}