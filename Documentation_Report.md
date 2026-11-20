# Payroll Bonus Calculator — Project Report

**Student name:** [Enter your full name]  
**Student number:** [Enter your student number]  
**Course/module:** [Enter course or module]  
**Submission date:** [Enter date]

## 1. Introduction
The Payroll Bonus Calculator is a C++ console program designed to calculate employee bonuses and total pay using an employee's basic salary, performance rating and years of service.

## 2. Objectives
- Calculate a performance bonus from an employee's rating.
- Calculate a loyalty bonus from years of service.
- Calculate total bonus and total pay.
- Practise selection statements, loops and input validation in C++.

## 3. Bonus calculation rules

**Performance bonus**
- Rating 5: 20% of basic salary.
- Rating 4: 12% of basic salary.
- Rating 3: 6% of basic salary.
- Rating 1 or 2: no performance bonus.

**Loyalty bonus**
- 10 or more years: R1,500.
- 5 to 9 years: R800.
- 2 to 4 years: R300.
- 0 to 1 year: no loyalty bonus.

## 4. Program design
The program asks for the number of employees and processes each employee in a `for` loop. It validates the entered values. An `if / else if / else` structure selects the performance bonus, and a `switch` statement is used in the loyalty-bonus selection section. The program then displays an itemised payslip.

## 5. Test cases

| Test | Basic salary | Rating | Years of service | Performance bonus | Loyalty bonus | Expected total pay |
|---|---:|---:|---:|---:|---:|---:|
| 1 | R25,000 | 5 | 10 | R5,000 | R1,500 | R31,500 |
| 2 | R20,000 | 4 | 6 | R2,400 | R800 | R23,200 |
| 3 | R15,000 | 3 | 3 | R900 | R300 | R16,200 |
| 4 | R12,000 | 2 | 1 | R0 | R0 | R12,000 |

**Evidence/screenshots:** Run the program yourself and insert genuine screenshots of the input and output for the test cases above.

## 6. Conclusion
The project demonstrates how C++ selection statements, loops and validation can process payroll information and calculate employee bonuses.

## 7. References and academic integrity
List any textbooks, lecture notes or other sources used. Follow your institution's rules for acknowledging assistance, including AI assistance where required. Review, understand and test the code before submitting it.
