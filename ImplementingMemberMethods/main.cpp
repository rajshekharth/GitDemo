/*Account class
Methods: set_balance, get_balance, set_name, get_name, deposit, withdraw*/


#include<iostream>
#include<string>

using namespace std;

class Account {
private:
    //attributes
    string name;
    double balance;
    
public:
    //methods 
    //Declared implemented inline
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance;}
    
    //Methods will be implemented outside class declaration
    
    void set_name (string n);
    string get_name ();
    
    bool deposit(double amount);
    bool withdraw(double amount);
    
};

void Account::set_name(string n) {
    name = n;
}

string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    //Verify account
    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if(balance-amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

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
