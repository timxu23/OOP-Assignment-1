/*
The IDE used for this project is VS Code.
*/
#include <iostream>
#include <string>
#include "Complex.h"
#include "Handler.h"

int main() {
    int user_choice=0;
    while(user_choice!=6){
        user_choice= Handler::print_and_get_choices();
        switch (user_choice){
        case 1:
            system("cls"); // replace with "clear" on Mac/Linux
            Handler::add_two_complex_numbers();
            break;
        case 2:
            system("cls"); // replace with "clear" on Mac/Linux
            Handler::subtract_two_complex_numbers();
            break;
        case 3:
            system("cls"); // replace with "clear" on Mac/Linux
            Handler::multiply_two_complex_numbers();
            break;
        case 4:
            system("cls"); // replace with "clear" on Mac/Linux
            Handler::divide_two_complex_numbers();
            break;
        case 5:
            system("cls"); // replace with "clear" on Mac/Linux
            Handler::find_conjugate_of_a_complex_number();
            break;
        }
        cout<<"============================================"<<endl;
        cout<<"press enter key to continue.."<<endl;
        getchar();
        getchar();
        system("cls"); // replace with "clear" on Mac/Linux
    }
}