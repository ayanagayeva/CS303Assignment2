// function definitions
#include <iostream>
using namespace std;
// base class representing employee
class Employee {
protected: // accessible to derived classes
  string name;
  int employeeID;

public:
  Employee(const string &name, int employeeID)
      : name(name), employeeID(employeeID) {}
  // abstract methods implemented by the derived classes
  virtual double calculateWeeklySalary() const = 0;
  virtual double calculateHealthCareContributions() const = 0;
  virtual int calculateVacationDays() const = 0;
  virtual ~Employee() {}
};
// derived class for professional employees
class Professional : public Employee {
private:
  double monthlySalary; // var to store monthly salary
  int vacationDays;     // bar to store vacation days
public:
  Professional(const string &name, int employeeID, double monthlySalary,
               int vacationDays)
      : Employee(name, employeeID), monthlySalary(monthlySalary),
        vacationDays(vacationDays) {
  } // constructor declaration w/ using the employee class
  // 3 functions
  double calculateWeeklySalary() const override {
    // calculate weekly salary for professionals
    return monthlySalary / 4;
  }
  double calculateHealthCareContributions() const override {
    // calculate health care contributions for professionals
    return 0.10 * monthlySalary;
  }
  int calculateVacationDays() const override {
    // calculate vacation days for professionals
    return vacationDays;
  }
};
// noonderived class for professional employees
class Nonprofessional : public Employee {
private:
  double hourlyRate;
  int hoursWorked;

public:
  Nonprofessional(const string &name, int employeeID, double hourlyRate,
                  int hoursWorked)
      : Employee(name, employeeID), hourlyRate(hourlyRate),
        hoursWorked(hoursWorked) {}
  double calculateWeeklySalary() const override {
    // calculate weekly salary for nonprofessionals
    return hoursWorked * hourlyRate;
  }
  double calculateHealthCareContributions() const override {
    // calculate health care contributions for nonprofessionals
    return 0.05 * calculateWeeklySalary();
  }
  int calculateVacationDays() const override {
    // alculate vacation days for nonprofessionals
    return hoursWorked / 40;
  }
};