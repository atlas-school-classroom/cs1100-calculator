# Assignment: Calculator

## Introduction

In this activity, you will create a simple calculator program using the C programming language. The calculator will perform basic arithmetic operations such as addition, subtraction, multiplication, division, and modulo. 

## Starter Files

The starter files for this exercise are located in the `src` directory. Implement your code inside the following file:

1. `calculator.c`

## Instructions
* Inside `calculator.c` implement the functions declared in the `calculator.h` header file. Be sure to include:
  *  **int add(int a, int b)**
  * **int subtract(int a, int b)**
  * **int multiply(int a, int b)**
  * **int divide(int a, int b)**
  * **int modulo(int a, int b)**
    * The modulo operation (%) returns the remainder of division, for example:
      * 10 % 2 = 0
      * 7 % 2 = 1
      * 8 % 3 = 2
      * 11 % 4 = 3

## Rubric 
| Test Name | Possible Score |
| ----------- | ----------- |
| Test 1 - Addition  | 10 |
| Test 2 - Subtraction | 10 |
| Test 3 - Multiplication | 10 |
| Test 4 - Division | 10 |
| Test 5 - Modulo | 10 |
| **Total** | **50** |

## Review Format
This assignment is **auto reveiwed** meaning that your grade will reflect your code passing the test items above. Each test calls the functions in your starter code, in order for each test to run it is important that you do not alter the name of the functions provided to you in the **src** folder. 

Tests are run from the **.github** folder, in order to perserve the integretiy of the autograder and to uphold academic integrety, it is important that you do NOT alter any of the code in the **.github** folder. Altering code inside the **.github** folder will trigger a flag on your Github account and your instructor(s) will be notified of the violation to academic integrity. 

## Run Checks
To check your work, run the following command:

```bash
$ make checker
```

This will run the tests and output the results.

### Terminal Output
If all checks pass, you will see the following output:
```bash
1/5 Test 1 - Addition              OK              0.01s
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
add(4, 3)
../.github/checker/tests/test_1.c:12:test_1:PASS
add(2, 8)
../.github/checker/tests/test_1.c:18:test_2:PASS
add(8, 1)
../.github/checker/tests/test_1.c:25:test_3:PASS
add(-4, 3)
../.github/checker/tests/test_1.c:31:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

2/5 Test 2 - Subtraction           OK              0.01s
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
subtract(8, 4)
../.github/checker/tests/test_2.c:12:test_1:PASS
subtract(11, 3)
../.github/checker/tests/test_2.c:18:test_2:PASS
subtract(4, 8)
../.github/checker/tests/test_2.c:24:test_3:PASS
subtract(-2, -3)
../.github/checker/tests/test_2.c:30:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

3/5 Test 3 - Multiplication        OK              0.00s
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
multiply(3, 2)
../.github/checker/tests/test_3.c:12:test_1:PASS
multiply(4, 0)
../.github/checker/tests/test_3.c:18:test_2:PASS
multiply(-7, -3)
../.github/checker/tests/test_3.c:24:test_3:PASS
multiply(8, -2)
../.github/checker/tests/test_3.c:30:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

4/5 Test 4 - Division              OK              0.00s
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
divide(15, 3)
../.github/checker/tests/test_4.c:12:test_1:PASS
divide(15, -3)
../.github/checker/tests/test_4.c:18:test_2:PASS
divide(20, 2)
../.github/checker/tests/test_4.c:24:test_3:PASS
divide(0, 1)
../.github/checker/tests/test_4.c:30:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

5/5 Test 5 - Modulo                OK              0.00s
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
modulo(15, 3)
../.github/checker/tests/test_5.c:12:test_1:PASS
modulo(7, 2)
../.github/checker/tests/test_5.c:18:test_2:PASS
modulo(14, 3)
../.github/checker/tests/test_5.c:24:test_3:PASS
modulo(34, 5)
../.github/checker/tests/test_5.c:30:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
```
```bash
Ok:                 5   
Expected Fail:      0   
Fail:               0   
Unexpected Pass:    0   
Skipped:            0   
Timeout:            0   
```
If there are failing checks you will see summary of the failing tests:
```bash
1/5 Test 1 - Addition              FAIL            0.01s   exit status 4
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
add(4, 3)
../.github/checker/tests/test_1.c:15:test_1:FAIL: Expected 7 Was 1
add(2, 8)
../.github/checker/tests/test_1.c:21:test_2:FAIL: Expected 10 Was -6
add(8, 1)
../.github/checker/tests/test_1.c:28:test_3:FAIL: Expected 9 Was 7
add(-4, 3)
../.github/checker/tests/test_1.c:34:test_4:FAIL: Expected -1 Was -7

-----------------------
4 Tests 4 Failures 0 Ignored 
FAIL
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

2/5 Test 2 - Subtraction           FAIL            0.01s   exit status 4
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
subtract(8, 4)
../.github/checker/tests/test_2.c:15:test_1:FAIL: Expected 4 Was 12
subtract(11, 3)
../.github/checker/tests/test_2.c:21:test_2:FAIL: Expected 8 Was 14
subtract(4, 8)
../.github/checker/tests/test_2.c:27:test_3:FAIL: Expected -4 Was 12
subtract(-2, -3)
../.github/checker/tests/test_2.c:33:test_4:FAIL: Expected 1 Was -5

-----------------------
4 Tests 4 Failures 0 Ignored 
FAIL
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

3/5 Test 3 - Multiplication        FAIL            0.00s   exit status 3
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
multiply(3, 2)
../.github/checker/tests/test_3.c:15:test_1:FAIL: Expected 6 Was 1
multiply(4, 0)
../.github/checker/tests/test_3.c:18:test_2:PASS
multiply(-7, -3)
../.github/checker/tests/test_3.c:27:test_3:FAIL: Expected 21 Was 2
multiply(8, -2)
../.github/checker/tests/test_3.c:33:test_4:FAIL: Expected -16 Was -4

-----------------------
4 Tests 3 Failures 0 Ignored 
FAIL
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

4/5 Test 4 - Division              FAIL            0.00s   exit status 3
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
divide(15, 3)
../.github/checker/tests/test_4.c:15:test_1:FAIL: Expected 5 Was 45
divide(15, -3)
../.github/checker/tests/test_4.c:21:test_2:FAIL: Expected -5 Was -45
divide(20, 2)
../.github/checker/tests/test_4.c:27:test_3:FAIL: Expected 10 Was 40
divide(0, 1)
../.github/checker/tests/test_4.c:30:test_4:PASS

-----------------------
4 Tests 3 Failures 0 Ignored 
FAIL
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

5/5 Test 5 - Modulo                FAIL            0.00s   exit status 4
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
modulo(15, 3)
../.github/checker/tests/test_5.c:15:test_1:FAIL: Expected 0 Was 5
modulo(7, 2)
../.github/checker/tests/test_5.c:21:test_2:FAIL: Expected 1 Was 3
modulo(14, 3)
../.github/checker/tests/test_5.c:27:test_3:FAIL: Expected 2 Was 4
modulo(34, 5)
../.github/checker/tests/test_5.c:33:test_4:FAIL: Expected 4 Was 6

-----------------------
4 Tests 4 Failures 0 Ignored 
FAIL
```
```bash
Summary of Failures:

1/5 Test 1 - Addition       FAIL            0.01s   exit status 4
2/5 Test 2 - Subtraction    FAIL            0.01s   exit status 4
3/5 Test 3 - Multiplication FAIL            0.00s   exit status 3
4/5 Test 4 - Division       FAIL            0.00s   exit status 3
5/5 Test 5 - Modulo         FAIL            0.00s   exit status 4

Ok:                 0   
Expected Fail:      0   
Fail:               5   
Unexpected Pass:    0   
Skipped:            0   
Timeout:            0   
```
### Github Output

If all checks pass, you will see the following output:

```bash
✅ Test 1 - Addition
../.github/checker/test/test_1.c:12:test_1:PASS

✅ Test 2 - Subtraction
../.github/checker/test/test_2.c:12:test_2:PASS

✅ Test 3 - Multiplication
../.github/checker/test/test_3.c:12:test_3:PASS

✅ Test 4 - Division
../.github/checker/test/test_4.c:12:test_4:PASS

✅ Test 5 - Modulo
../.github/checker/test/test_5.c:12:test_5:PASS

Ok:                 5
Expected Fail:      0
Fail:               0
Unexpected Pass:    0
Skipped:            0
Timeout:            0
```

If there are failing checks you will see summary of the failing tests:

```
❌ Test 1 - Addition
../.github/checker/tests/test_1.c:13:test_1:FAIL: Expected 7 Was 1

❌ Test 2 - Subtraction
../.github/checker/tests/test_2.c:14:test_2:FAIL: Expected 4 Was 12

❌ Test 3 - Multiplication
../.github/checker/tests/test_3.c:14:test_3:FAIL: Expected 6 Was 1

❌ Test 4 - Division
../.github/checker/tests/test_4.c:14:test_4:FAIL: Expected 5 Was 45

❌ Test 5 - Modulo
../.github/checker/tests/test_5.c:14:test_4:FAIL: Expected 0 Was 5

Summary of Failures:

1/5 Test 1 - Addition                      FAIL            0.14s   exit status 2
2/5 Test 2 - Subtraction                   FAIL            0.25s   exit status 2
3/5 Test 3 - Multiplication                FAIL            0.35s   exit status 2
4/5 Test 4 - Division                      FAIL            0.46s   exit status 2
5/5 Test 5 - Modulo                        FAIL            0.46s   exit status 2

Ok:                 0
Expected Fail:      0
Fail:               5
Unexpected Pass:    0
Skipped:            0
Timeout:            0
```

## Optional Challenge
Make the program interactive by displaying a menu of options for the user to choose from and will continue to run until the user chooses to turn it off.
#### Starter Files
Implement your code inside the file:
1. `main.c`

### Instructions
1. Use only your knowledge of **scanf()**, **printf()**, **if...else** statements, **do...while** loops, and the **break** and **continue** statements to implement this program.

2. The program should start by printing "Calculator is ON" to indicate that the calculator is ready to use.

3. The program should display a menu of options for the user to choose from. The menu should include the following options: Addition, Subtraction, Multiplication, Division, Modulo, Turn OFF

4. The user should enter their choice by entering a number corresponding to the desired operation or the option to turn the calculator off.

5. If the user enters an invalid choice (i.e., a number other than 0, 1, 2, 3, or 4), the program should display an error message and prompt the user to try again.

6. If the user chooses an arithmetic operation (addition, subtraction, multiplication, division), or modulo, the program should prompt the user to enter two numbers.

7. The program should perform the selected operation on the two numbers and display the result with a precision of two decimal places.

8. If the user chooses division and the second number entered is zero, the program should display an error message indicating that division by zero is not allowed.

9. After displaying the result or an error message, the program should return to the menu and prompt the user for another choice.

10. The program should continue to run until the user chooses the option to turn the calculator off.

11. When the user chooses to turn the calculator off, the program should print "Calculator is OFF" and terminate.

12. The program should utilize only the concepts that you have learned so far, such as **scanf()**, **printf()**, **if...else** statements, **do...while** loops, and the **break** and **continue** statements.

13. You should define a constant using #define to represent the OFF choice (e.g., #define OFF 0).

### Compile the Program
To compile your program, run the following commands:
```bash
$ gcc -o calculator src/calculator.c src/main.c
$ ./calculator
```
### Command-Line Interface
When you run the compiled program, it should print the "Calculator is ON", provide a menu of arithmetic operations, provide a result of the operation, and print "Calculator is OFF": 
```bash
Calculator is ON
Calculator Menu:

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulo
0. Turn OFF
Enter your choice: 1
Enter two numbers: 5 3
Result: 8.00

Calculator Menu:

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulo
0. Turn OFF
Enter your choice: 4
Enter two numbers: 10 0
Error: Division by zero!

Calculator Menu:

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulo
0. Turn OFF
Enter your choice: 0
Calculator is OFF
```
