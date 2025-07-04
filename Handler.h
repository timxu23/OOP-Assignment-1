#include <iostream>
#include <Complex.h>
using namespace std;
class Handler{
    public:
        static int print_and_get_choices(){
            cout << "Please choose one of the following options:" << endl;
            cout << "(1) Add" << endl;
            cout << "(2) Subtract" << endl;
            cout << "(3) Multiply" << endl;
            cout << "(4) Divide" << endl;
            cout << "(5) Find Conjugate" << endl;
            cout << "(6) Quit" << endl;
            cout << "=============================================" << endl;
            cout << "What is your choice (Please enter a number from 1 to 6): ";
            int choice;
            cin >> choice;
            return choice;
        }
        static void add_two_complex_numbers(){
            Complex n1, n2, n3;
            cout << "Add two complex numbers:" << endl;
            cout<<"============================================"<<endl;
            cout << "Enter the first number without spaces (for example: 2+i3)" << endl;
            cin >> n1;
            cout << "Enter the second number without spaces (for example: 2+i3)" << endl;
            cin >> n2;
            n3 = n1 + n2;
            cout << "Result is: " << n3 << endl;
        }
        static void subtract_two_complex_numbers(){
            Complex n1, n2, n3;
            cout << "Subtract two complex numbers:" << endl;
            cout<<"============================================"<<endl;
            cout << "Enter the first number without spaces (for example: 2+i3)" << endl;
            cin >> n1;
            cout << "Enter the second number without spaces (for example: 2+i3)" << endl;
            cin >> n2;
            n3 = n1 - n2;
            cout << "Result is: " << n3 << endl;
        }
        static void multiply_two_complex_numbers(){
            Complex n1, n2, n3;
            cout << "Multiply two complex numbers:" << endl;
            cout << "============================================" << endl;
            cout << "Enter the first number without spaces (for example: 2+i3)" << endl;
            cin >> n1;
            cout << "Enter the second number without spaces (for example: 2+i3)" << endl;
            cin >> n2;
            n3 = n1 * n2;
            cout << "Result is: " << n3 << endl;
        }
        static void divide_two_complex_numbers(){
            Complex n1, n2, n3;
            cout << "Divide two complex numbers:" << endl;
            cout << "============================================" << endl;
            cout << "Enter the first number without spaces (for example: 2+i3)" << endl;
            cin >> n1;
            cout << "Enter the second number without spaces (for example: 2+i3)" << endl;
            cin >> n2;
            n3 = n1 / n2;
            cout << "Result is: " << n3 << endl;
        }
        static void find_conjugate_of_a_complex_number(){
            Complex n1, n2;
            cout << "Find the conjugate of a complex number:" << endl;
            cout << "============================================" << endl;
            cout << "Enter the number without spaces (for example: 2+i3)" << endl;
            cin >> n1;
            n2 = n1.conjugate();
            cout << "Conjugate is: " << n2 << endl;
        }
};
