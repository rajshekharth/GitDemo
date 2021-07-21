#include <iostream>
#include "BankAccount.h"

using namespace std;

int main() {
    
    Account Shekhar_account;
    Shekhar_account.set_name("Rajeshekhar Hirgappanor");
    Shekhar_account.set_balance(1000.0);
    
    if(Shekhar_account.deposit(200))
        cout << "Deposit is OK" << endl;
    else
        cout << "Deposit is NOK" << endl;
        
    cout << "Current Balance is " << Shekhar_account.get_balance() << endl;
    
    if (Shekhar_account.withdraw(500))
        cout << "Withdrawn successfully" << endl;
    else
        cout << "Insufficient funds" << endl;
        
    cout << "Current Balance is " << Shekhar_account.get_balance() << endl;
    
    if (Shekhar_account.withdraw(5000))
        cout << "withdraw successfully" << endl;
    else
        cout << "Insufficient funds" << endl;
    
    cout << "Current Balance is " << Shekhar_account.get_balance() << endl;
    
    return 0;
}
