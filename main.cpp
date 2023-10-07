// Ayan Agayeva Assignment 2 CS303
#include "SingleLinkedList.cpp"
#include <iostream>
#include <string>
using namespace std;
int main() {
  // vars for storing user input
  string profName;
  int profEmployeeID;
  double profMonthlySalary;
  int profVacationDays;
  // ask the user for all of the data
  cout << "Enter Professional Employee Name ";
  getline(cin, profName); // read line
  cout << "Enter Professional Employee ID ";
  cin >> profEmployeeID;
  cout << "Enter Professional Employee Monthly Salary ";
  cin >> profMonthlySalary;
  cout << "Enter Professional Employee Vacation Days ";
  cin >> profVacationDays;
  cin.ignore();
  Professional prof(profName, profEmployeeID, profMonthlySalary,
                    profVacationDays); // create an instance using the data we have colected fomr the suer
      // same process for the non professional employee
  string nonprofName;
  int nonprofEmployeeID;
  double nonprofHourlyRate;
  int nonprofHoursWorked;
  cout << "Enter Nonprofessional Employee Name: ";
  getline(cin, nonprofName);
  cout << "Enter Nonprofessional Employee ID: ";
  cin >> nonprofEmployeeID;
  cout << "Enter Nonprofessional Employee Hourly Rate: ";
  cin >> nonprofHourlyRate;
  cout << "Enter Nonprofessional Employee Hours Worked: ";
  cin >> nonprofHoursWorked;
  cin.ignore();
  // instance of the nonprof employee
  Nonprofessional nonprof(nonprofName, nonprofEmployeeID, nonprofHourlyRate,
                          nonprofHoursWorked);
  // display user input
  cout << "Professional Weekly Salary: $" << prof.calculateWeeklySalary()
       << endl;
  cout << "Professional Health Care Contributions: $"
       << prof.calculateHealthCareContributions() << endl;
  cout << "Professional Vacation Days: " << prof.calculateVacationDays()
       << endl;
  cout << "Nonprofessional Weekly Salary: $" << nonprof.calculateWeeklySalary()
       << endl;
  cout << "Nonprofessional Health Care Contributions: $"
       << nonprof.calculateHealthCareContributions() << endl;
  cout << "Nonprofessional Vacation Days: " << nonprof.calculateVacationDays()
       << endl;
  return 0;
}
