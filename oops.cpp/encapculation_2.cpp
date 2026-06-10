#include<iostream>
using namespace std;

/*
===============================================================================
PROGRAM: Bank Account using Encapsulation
===============================================================================

Concepts Used:
--------------
1. Class and Object
2. Constructor
3. Private Data Members
4. Getter Function
5. Deposit Method
6. Withdraw Method
7. Encapsulation

Encapsulation:
--------------
Data is hidden using private access specifier and can only be
accessed through public member functions.
===============================================================================
*/

class BankAccount
{
private:

    // Private data members
    // Cannot be accessed directly from main()
    string AccountNumber;
    double Balance;

public:

    /*
    ===========================================================================
    PARAMETERIZED CONSTRUCTOR
    ===========================================================================

    Called automatically when object is created.

    Purpose:
    Initialize account number and balance.

    Example:
        BankAccount myAccount("122222122",65664);

    ===========================================================================
    */
    BankAccount(string AccNo, double Baln)
    {
        AccountNumber = AccNo;
        Balance = Baln;
    }


    /*
    ===========================================================================
    GETTER FUNCTION
    ===========================================================================

    Purpose:
    Return current account balance.

    Why Getter?

    Balance is private.

    So instead of:
        myAccount.Balance;   ❌

    we use:
        myAccount.getBalance(); ✔

    ===========================================================================
    */
    double getBalance()
    {
        return Balance;
    }


    /*
    ===========================================================================
    DEPOSIT METHOD
    ===========================================================================

    Purpose:
    Add money to account.

    Validation:
    Amount must be greater than 0.

    Example:
        Balance = 65664
        Deposit(1000)

        New Balance = 66664
    ===========================================================================
    */
    void Deposit(double amnt)
    {
        if(amnt > 0)
        {
            Balance += amnt;

            cout << "Deposited Amount: "
                 << amnt
                 << endl;
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }


    /*
    ===========================================================================
    WITHDRAW METHOD
    ===========================================================================

    Purpose:
    Remove money from account.

    Conditions:
    1. Amount must be positive
    2. Amount must not exceed current balance

    Example:
        Balance = 66664
        Withdraw(100)

        New Balance = 66564
    ===========================================================================
    */
    void withdraw(double money)
    {
        if(money > 0 && money <= Balance)
        {
            Balance -= money;

            cout << "Withdrawn Amount: "
                 << money
                 << endl;
        }
        else
        {
            cout << "Not enough balance available" << endl;
        }
    }
};



int main()
{
    /*
    ---------------------------------------------------------------------------
    Object Creation

    Constructor automatically executes.
    ---------------------------------------------------------------------------
    */
    BankAccount myAccount("122222122", 65664);



    /*
    ---------------------------------------------------------------------------
    Display Initial Balance

    IMPORTANT:
    getBalance() returns value.

    We must print it using cout.
    ---------------------------------------------------------------------------
    */
    cout << "Initial Balance: "
         << myAccount.getBalance()
         << endl;



    /*
    ---------------------------------------------------------------------------
    Deposit 1000

    Balance:
    65664 + 1000 = 66664
    ---------------------------------------------------------------------------
    */
    myAccount.Deposit(1000);



    /*
    ---------------------------------------------------------------------------
    Withdraw 100

    Balance:
    66664 - 100 = 66564
    ---------------------------------------------------------------------------
    */
    myAccount.withdraw(100);



    /*
    ---------------------------------------------------------------------------
    Display Final Balance
    ---------------------------------------------------------------------------
    */
    cout << "Final Balance: "
         << myAccount.getBalance()
         << endl;

    return 0;
}


// output:
// Initial Balance: 65664
// Deposited Amount: 1000
// Withdrawn Amount: 100
// Final Balance: 66564