#include <iostream>

using namespace std;

class Account {
private:
    double balance;

    friend class Auditor;

public:
    Account(double initialBalance) {
        balance = initialBalance;
    }
};

class Auditor {
public:
    void inspect(const Account& account) {
        cout << "Account Balance: " << account.balance << endl;
    }
};

int main() {

    Account account(5000.0);
    Auditor auditor;

    auditor.inspect(account);

    return 0;
}
