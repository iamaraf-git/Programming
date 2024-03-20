#include <iostream>
using namespace std;

class BankAccount {
public:
    static int totalBalance;
    int balance = 0;

    BankAccount(int amount) {
        totalBalance += amount;
        balance += amount;
    }
    void display()
    {
        cout << balance <<  endl;
    }

};

int BankAccount::totalBalance = 0;

int main() {
    int amount;
    cin >> amount;
    BankAccount account1(amount);
    cin >> amount;
    BankAccount account2(amount);


    cout << BankAccount::totalBalance << endl;
    cout<< account1.totalBalance<<endl;// ---> output: same
    account1.display();


    return 0;
}
