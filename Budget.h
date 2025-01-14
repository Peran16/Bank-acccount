//To prevent reprocessing
#ifndef BUDGET_H
#define BUDGET_H
//Include Category header cause this class will interact with Category class
#include "Category.h"

//Defines the class that will handle collection of categories and manage calculations 
class Budget {

private:
    vector<Category> categories; //A vector that contains different categories
    float incomeTotal;
    float expenseTotal;
    float savingGoal;

public:
    //Initializes a Budget object with a saving goal, if no saving goal (default) is 0
    Budget(float savingGoal = 0); 
    //Adds a new category to the Budget with a specific name
    void addCategory(const string& name);
    //Adds a Transaction to a specific Category
    void addTransaction(const string& categoryName, shared_ptr<Transaction> transaction); //shared_ptr to ensure is prop managed
    //To generate a report
    void generateReport() const; // Full report
    void generateReport(bool detailed) const; // Detailed or resumed

};

#endif
