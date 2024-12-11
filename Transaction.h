// To prevent reprocessing:
#ifndef TRANSACTION_H
#define TRANSACTION_H
// For handling textual data like date:
#include <string>
// To avoid using it the whole time
using namespace std;


class Transaction {
// To be accesed by derived classes (but not external code)
protected:
    string date;
    float amount;
    string description;

public:
    // Constructor for Transaction
    // const for unnecessary copying of strings
    Transaction(const string& date, float amount, const string& description = ""); //If not any
    //Pure virtual funtion and deerived classes will implement it
    virtual void applyCategoryRule() = 0;
    //Virtual function and const means this function cannot modify the objects state
    virtual void display() const;
    //Virtual destructor so the derived class’s destructor is called first, to avoid memory leaks.
    virtual ~Transaction();

    //Getter funtion to get the amount and const to not alter the object
    float getAmount() const;

};

#endif
