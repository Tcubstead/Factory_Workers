//Thomas Cubsyead
//4/21/25
//Factory_Workers
//Master

#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    string employeeNum;
    string hireDate;

public:
    //constructor
    Employee(string n = "", string eNum = "", string hireTime = "")
        : name(n), employeeNum(eNum), hireDate(hireTime) {}

    //accessors
    string getName() const { return name; }
    string getEmployeeNum() const { return employeeNum; }
    string getHireDate() const { hireDate; }

    //mutators
    void setName(string n) { name = n; }
    void setEmployeeNum(string num) { employeeNum = num; } 
    void setHireDate(string date) { hireDate = date; }

    //function prints employee information
    void printEmployee() const {
        cout << "Name: " << name << endl;
        cout << "Employee Number: " << employeeNum << endl;
        cout << "Hire Date: " << hireDate << endl;
    }
};

class ProductionWorker : public Employee {
protected:
    int shift;
    double hourlyPayRate;

public:
    //constructor
    ProductionWorker(string n = "", string num = "", string date = "", int s = 1, double pay = 0.0)
        : Employee(n, num, date), shift(s), hourlyPayRate(pay) {}

    //accessors
    int getShift() const { return shift; }
    double getHourlyPayRate() const { return hourlyPayRate; }

    //Mutators
    void setShift(int s) { shift = s; }
    void setHourlyPayRate(double pay) { hourlyPayRate = pay; }

    //function to print the worker information
    void printProductionWorker() const {
        printEmployee();
        cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
        cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;
    }
};

class Shiftupervisor : public Employee {
protected:
    double annualSalary;
    double annualBonus;

public:
    //constructor
    ShiftSupervisor(string n = "", string num = "", string date = "", double salary = 0.0, double bonus = 0.0)
        : Employee(n, num, date), annualSalary(salary), annualBonus(bonus) {}

    //accessors
    double getAnnualSalary() const { return annualSalary; }
    double getAnnualBonus() const { return annualBonus; }

    //mutators
    void setAnnualSalary(double salary) { annualSalary = salary; }
    void setAnnualBonus(double bonus) { annualBonus = bonus; }

    //funtion that prints the information of the shift supervisor
    void printSupervisor() const {
        printEmployee();
        cout << "Annual Salary: $" << annualSalary << endl;
        cout << "Annual Bonus: $" << annualBonus << endl;
    }
};

class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;
    int requiredTrainingHours;
    int attendedTrainingHours;

public:
    //constructor
    TeamLeader(string n = "", string num = "", string date = "", int s = 1, double pay = 0.0, double bonus = 0.0, int rHours = 0, int aHours = 0)
        : ProductionWorker(n, num, date, s, pay), monthlyBonus(bonus), requiredTrainingHours(rHours), attendedTrainingHours(aHours) {}

    //accessors
    double getMonthlyBonus() const { return monthlyBonus; }
    int  getRequiredTrainingHours() const { return requiredTrainingHours; }
    int getAttendedTrainingHours() const { return attendedTrainingHours; }

    //mutators
    void setMonthlyBonus(double bonus) { monthlyBonus = bonus; }
    void setRequiredTrainingHours(int hours) { requiredTrainingHours = hours; }
    void setAttendedTrainingHours(int hours) { attendedTrainingHours = hours; }

    //function that prints the information of the shift supervisor
    void printTeamLeader() const {
        printProductionWorker();
        cout << "Monthly Bonus: $" << monthlyBonus << endl;
        cout << "Required Training Hours: " << requiredTrainingHours << endl;
        cout << "Attended Training Hours: " << attendedTrainingHours << endl;
    }
};


int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
