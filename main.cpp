#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

int main() {
    int numberOfEmployees;

    cout << "====================================\n";
    cout << "       PAYROLL BONUS CALCULATOR\n";
    cout << "====================================\n";

    cout << "Enter number of employees: ";
    while (!(cin >> numberOfEmployees) || numberOfEmployees <= 0) {
        cout << "Invalid input. Enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    for (int employee = 1; employee <= numberOfEmployees; employee++) {
        string name;
        double basicSalary, performanceBonus = 0.0, loyaltyBonus = 0.0;
        int rating, yearsOfService;

        cout << "\n--- Employee " << employee << " ---\n";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter employee name: ";
        getline(cin, name);

        cout << "Enter basic salary (R): ";
        while (!(cin >> basicSalary) || basicSalary < 0) {
            cout << "Invalid salary. Enter zero or a positive amount: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Enter performance rating (1-5): ";
        int attempts = 0;
        while (!(cin >> rating) || rating < 1 || rating > 5) {
            attempts++;
            cout << "Invalid rating. Enter a number from 1 to 5: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (attempts >= 3) {
                cout << "Three invalid attempts. Rating set to 1.\n";
                rating = 1;
                break;
            }
        }

        cout << "Enter years of service: ";
        while (!(cin >> yearsOfService) || yearsOfService < 0) {
            cout << "Invalid years. Enter zero or a positive number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Performance bonus using if / else-if / else.
        if (rating == 5) {
            performanceBonus = basicSalary * 0.20;
        } else if (rating == 4) {
            performanceBonus = basicSalary * 0.12;
        } else if (rating == 3) {
            performanceBonus = basicSalary * 0.06;
        } else {
            performanceBonus = 0.0;
        }

        // Loyalty bonus using switch and conditional ranges.
        switch (yearsOfService) {
            case 0:
            case 1:
                loyaltyBonus = 0.0;
                break;
            default:
                if (yearsOfService >= 10) {
                    loyaltyBonus = 1500.0;
                } else if (yearsOfService >= 5) {
                    loyaltyBonus = 800.0;
                } else {
                    loyaltyBonus = 300.0; // 2 to 4 years
                }
                break;
        }

        double totalBonus = performanceBonus + loyaltyBonus;
        double totalPay = basicSalary + totalBonus;

        cout << fixed << setprecision(2);
        cout << "\n========== EMPLOYEE PAYSLIP ==========\n";
        cout << "Employee name:       " << name << '\n';
        cout << "Basic salary:        R" << basicSalary << '\n';
        cout << "Performance bonus:   R" << performanceBonus << '\n';
        cout << "Loyalty bonus:       R" << loyaltyBonus << '\n';
        cout << "Total bonus:         R" << totalBonus << '\n';
        cout << "Total pay:           R" << totalPay << '\n';
        cout << "======================================\n";
    }

    cout << "\nPayroll calculation completed.\n";
    return 0;
}
