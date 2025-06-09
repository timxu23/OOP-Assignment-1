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
            // temp: just for testing entering two complex numbers
            string n1, n2;
            cout << "Enter first complex number" << endl;
            cin >> n1;
            Complex c1(n1);
            cout << c1.getImaginary() << endl;
            cout << c1.getReal() << endl;
        }
        static void subtract_two_complex_numbers(){
            // To DO
        }
        static void multiply_two_complex_numbers(){
            // To DOndl;
        }
        static void divide_two_complex_numbers(){
            // To DO
        }
        static void find_conjugate_of_a_complex_number(){
            // To DO
        }
};
