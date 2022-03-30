#include <iostream>
#include <vector>
#include "money.h"

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
    private:
        Money currentBalance;

        bool updateBalance = false;
        std::vector<Money> deposits;
        std::vector<Money> withdrawals;

    public:
        Account(const Money &m);
        virtual ~Account();

        void makeDeposit(const Money &m);
        void makeWithdrawals(const Money &m);

        friend std::ostream& operator << (std::ostream& out, const Account &account);
};

#endif //ACCOUNT_H