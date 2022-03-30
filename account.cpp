#include "account.h"

// Constructor and Destructor
Account::Account(const Money &m)
{
    currentBalance = m;
}

Account::~Account()
{
    //...
}



// Methods
void Account::makeDeposit(const Money &m)
{
    updateBalance = true;
    deposits.push_back(m);
}

void Account::makeWithdrawals(const Money &m)
{
    updateBalance = true;
    withdrawals.push_back(m);
}

std::ostream& operator << (std::ostream& out, const Account &account)
{
    Money newBalance = account.currentBalance;

    if (account.updateBalance == true)
    {
        for (int i = 0; i < account.deposits.size(); i++)
        {
            newBalance = newBalance + account.deposits[i];
        }

        for (int i = 0; i < account.withdrawals.size(); i++)
        {
            newBalance = newBalance - account.withdrawals[i];
        }
    }

    out << "Account Details" << std::endl;
    out << "--------------------------" << std::endl;
    out << "Current Balance: " << newBalance << std::endl;
    out << "--------------------------" << std::endl;
    out << "Number of Deposits: " << account.deposits.size() << std::endl;
    out << "--------------------------" << std::endl;

    for (int i = 0; i < account.deposits.size(); i++)
    {
        out << "(" << i + 1 << ") " << account.deposits[i] << std::endl;
    }

    out << "Number of Withdrawals: " << account.withdrawals.size() << std::endl;
    out << "--------------------------" << std::endl;

    for (int i = 0; i < account.withdrawals.size(); i++)
    {
        out << "(" << i + 1 << ") " << account.withdrawals[i] << std::endl;
    }

    return out;
}