# Payroll Bonus Calculator

## Project overview
A C++ console application that calculates an employee's performance bonus, loyalty bonus, total bonus and total pay.

## Bonus rules

### Performance bonus
| Performance rating | Bonus |
|---|---:|
| 5 | 20% of basic salary |
| 4 | 12% of basic salary |
| 3 | 6% of basic salary |
| 1 or 2 | 0% |

### Loyalty bonus
| Years of service | Bonus |
|---|---:|
| 10 or more | R1,500 |
| 5–9 | R800 |
| 2–4 | R300 |
| 0–1 | R0 |

## Features
- Processes multiple employees using a `for` loop.
- Uses `if`, `else if` and `else` for performance bonuses.
- Uses a `switch` statement for loyalty-bonus selection.
- Validates employee count, salary, rating and years of service.
- Displays an itemised payslip for each employee.

## Compile and run
Using g++:

```bash
g++ -std=c++11 -Wall -Wextra -o payroll main.cpp
./payroll
```

On Windows, run `payroll.exe` after compiling.

## Example calculation
For a basic salary of R25,000, rating 5 and 10 years of service:
- Performance bonus: R5,000
- Loyalty bonus: R1,500
- Total bonus: R6,500
- Total pay: R31,500

See [Documentation_Report.md](Documentation_Report.md) for the project report and test cases.

## Author
Student project repository.
