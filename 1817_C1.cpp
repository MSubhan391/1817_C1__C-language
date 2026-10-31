#include <iostream>
using namespace std;
void task1(); 
void task2();
void task3();
void task4();
void task5();
int main()
{
    task1(); //Exercise 1 is performed in task1
    task2(); //Exercise 2 is performed in task2
    task3(); //Exercise 3 is performed in task3
    task4(); //Exercise 4 is performed in task4
    task5(); //Exercise 5 is performed in task5
return 0;
}
void task1()
{
    // Task 1: Variables and Output
    cout << "Personalization Number: 1817" << endl;

    // Declare two integer variables
    int firstNumber = 8;
    int secondNumber = 7;

    // Intentional error: subtraction used instead of addition
    int sum = firstNumber + secondNumber;

    // Display the values
    cout << "First Number: " << firstNumber << endl;
    cout << "Second Number: " << secondNumber << endl;
    cout << "Sum: " << sum << endl;
}
void task2()
{
    // Task 2: Arithmetic Operations
    cout << "Exercise 2: Arithmetic Operations" << endl;

    // Error 1: Incorrect digit sum
    int digitSum = 17;

    int secondNumber = 4;

    // Error 2: Addition used instead of multiplication
    int product = digitSum * secondNumber;

    cout << digitSum << " * " << secondNumber << " = " << product << endl;
}

void task3(){
// Task 3: Multiplication Table
    cout << "Exercise 3: Multiplication Table" << endl;
    cout << "Personalization Number is 1817" << endl;
    int personalizationnumber = 1817;

     int N = (personalizationnumber % 10)+1 ;

    for (int i = 1; i <= N; i++)
    {
        cout << N << " x " << i << " = "
              << N * i << endl;
    }
}
void task4(){
    
    cout << "\nExercise 4: If/Else conditions" << endl;
    int number = 1817;
    if (number % 2 == 0) {
        cout << number << " is even" << endl;
    }
    else {
        cout << number << " is odd" << endl;
    }   
}
void task5(){
        
    cout << "Exercise 5: Switch Statements" << endl;

    int personalizationnumber = 1817;
    int month = personalizationnumber % 12;

    cout << "Month is " << month << endl;

    switch (month)
    {
    case 1:
        cout << "January" << endl;
        break;
    case 2:
        cout << "February" << endl;
        break;
    case 3:
        cout << "March" << endl;
        break;
    case 4:
        cout << "April" << endl;
        break;
    case 5:
        cout << "June" << endl;
        break;
    case 6:
        cout << "June" << endl;
        break;
    case 7:
        cout << "July" << endl;
        break;
    case 8:
        cout << "August" << endl;
        break;
    case 9:
        cout << "September" << endl;
        break;
    case 10:
        cout << "October" << endl;
        break;
    case 11:
        cout << "November" << endl;
        break;
    case 12:
        cout << "December" << endl;
        
    default:
        cout << "Invalid month entered" << endl;
    }

}