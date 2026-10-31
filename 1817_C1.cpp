#include <iostream>
using namespace std;
void task1(); 
void task2();
void task3();
void task4();
int main()
{
    task1(); //Exercise 1 is performed in task1
    task2(); //Exercise 2 is performed in task1
    task3(); //Exercise 3 is performed in task1
    task4(); //Exercise 4 is performed in task1
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