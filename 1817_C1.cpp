#include <iostream>
using namespace std;
void task1(); // These are function definition or function prototype
void task2(); // Tells the compiler about the function
void task3(); // Void tells function will not return a value
void task4(); 
void task5();
void task6();
void task7();
void showwelcome(string name, int marks); // Helper function in task7

//All these tasks are function name
int main()
{
    task1(); //Exercise 1 is performed in this function
    task2(); //Exercise 2 is performed in this function
    task3(); //Exercise 3 is performed in this function
    task4(); //Exercise 4 is performed in this function
    task5(); //Exercise 5 is performed in this function
    task6(); //Exercise 6 is performed in this function
    task7(); //Exercise 7 is performed in this function
    // These are function call that execute when their functions are called
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
    int digitSum = 17; // Error was digitsum was 16 and corrected to 17

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

     int N = (personalizationnumber % 10)+1 ; //Error was Incorrect calculation

    for (int i = 1; i <= N; i++) // Error was loop starts at 0
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
    int month = (personalizationnumber % 12)+1; //Error was Incorrect calculation

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
        cout << "May" << endl; // Error was Wrong month entered
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
        break; // Error was Break statement missed
    default:
        cout << "Invalid month entered" << endl;
    }
}

void task6(){

    cout << "\nExercisr6: Arrays" << endl;
    int number[5] = { 12,25,7,40,55 };
    cout << "Third Number is = " << number[2] << endl; 
// I placed number '7' at third whoch satisfies both of our requirements
} 

void task7(){

        cout << "\nExercise 7: Functions and Parameters" << endl;

    string studentName = "Student";
    int studentMarks = 17;

}

void showwelcome(string name, int marks) // receives "Student" and 17
{
    cout << "Welcome, " << name << "!" << endl;
    cout << "Your marks are: " << marks << endl;
}
