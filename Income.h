//to prevent reprocessing:
#ifndef INCOME_H
#define INCOME_H
//To include the header file from the base class
#include "Transaction.h"

//Income as a derived class from transaction
class Income : public Transaction {
public:
    //Initialize Income inheriting parameters from the base class
    Income(const string& date, float amount, const string& description = "");
    
    //Pure virtual function from the base class
    void applyCategoryRule() override; //override to ensure the function correctly overrides the base class
};

#endif
