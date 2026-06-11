/*
-------------------------------------------------------------
| STL Component      | Purpose                              |
-------------------------------------------------------------
| vector             | Dynamic storage of employees         |
| sort()             | Sort employees by salary             |
| for_each()         | Traverse and display records         |
| copy_if()          | Filter high earners                  |
| back_inserter()    | Insert filtered elements into vector |
| accumulate()       | Calculate total salary               |
| max_element()      | Find highest paid employee           |
| lambda functions   | Custom sorting/filtering logic       |
-------------------------------------------------------------
*/


#include <bits/stdc++.h>
using namespace std;

// Structure to store employee details
struct Employee {
    int id;          // Employee ID
    string name;     // Employee Name
    double salary;   // Employee Salary
};

// Function to display employee details
void displayEmployee(const Employee& emp) {
    cout << "ID: " << emp.id
         << " , Name: " << emp.name
         << " , Salary: $" << emp.salary
         << endl;
}

int main() {

    // Vector of Employee objects
    vector<Employee> employees = {
        {101, "hitesh", 100000},
        {102, "saksham", 30000},
        {103, "shubham", 50000},
        {104, "anirudh", 60000},
        {105, "aryan", 70000},
    };

    // --------------------------------------------------
    // Sort employees in descending order of salary
    // --------------------------------------------------
    sort(
        employees.begin(),
        employees.end(),
        [](const Employee& e1, const Employee& e2) {
            return e1.salary > e2.salary;
        }
    );

    cout << "Employees sorted by salary -> Highest to Lowest\n";

    // Display all sorted employees
    for_each(
        employees.begin(),
        employees.end(),
        displayEmployee
    );

    // --------------------------------------------------
    // Store employees having salary greater than 50000
    // --------------------------------------------------
    vector<Employee> highEarners;

    copy_if(
        employees.begin(),
        employees.end(),
        back_inserter(highEarners),
        [](const Employee& e) {
            return e.salary > 50000;
        }
    );

    cout << "\nEmployees who are High Earners:\n";

    // Display high earning employees
    for_each(
        highEarners.begin(),
        highEarners.end(),
        displayEmployee
    );

    // --------------------------------------------------
    // Calculate total salary using accumulate()
    // --------------------------------------------------
    double totalSalary = accumulate(
        employees.begin(),
        employees.end(),
        0.0,
        [](double sum, const Employee& e) {
            return sum + e.salary;
        }
    );

    // Calculate average salary
    double averageSalary = totalSalary / employees.size();

    cout << "\nTotal Salary: $" << totalSalary << endl;
    cout << "Average Salary: $" << averageSalary << endl;

    // --------------------------------------------------
    // Find employee with highest salary
    // --------------------------------------------------
    auto highestPaid = max_element(
        employees.begin(),
        employees.end(),
        [](const Employee& e1, const Employee& e2) {
            return e1.salary < e2.salary;
        }
    );

    // Display highest paid employee
    if (highestPaid != employees.end()) {
        cout << "\nHighest Paid Employee:\n";
        displayEmployee(*highestPaid);
    }

    return 0;
}

/*
output :
Employees sorted by salary -> Highest to Lowest
ID: 101 , Name: hitesh , Salary: $100000
ID: 105 , Name: aryan , Salary: $70000
ID: 104 , Name: anirudh , Salary: $60000
ID: 103 , Name: shubham , Salary: $50000
ID: 102 , Name: saksham , Salary: $30000

Employees who are High Earners:
ID: 101 , Name: hitesh , Salary: $100000
ID: 105 , Name: aryan , Salary: $70000
ID: 104 , Name: anirudh , Salary: $60000

Total Salary: $310000
Average Salary: $62000

Highest Paid Employee:
ID: 101 , Name: hitesh , Salary: $100000
*/