
#include <iostream>
using namespace std;
void task1();
void task2();
int main(){
    task1();
    task2();
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
void task2(){

{
    // Task 2: Arithmetic Operations
    cout << "Exercise 2: Arithmetic Operations" << endl;

    // Error 1: Incorrect digit sum
    int digitSum = 16;

    int secondNumber = 4;

    // Error 2: Addition used instead of multiplication
    int product = digitSum + secondNumber;

    
    cout << digitSum << " * " << secondNumber
         << " = " << product << endl;


}

