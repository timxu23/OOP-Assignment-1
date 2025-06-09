#include <iostream>
#include <string>
using namespace std;
class Complex{
  private:
    float real;
    float imaginary;
  public:
    Complex(){
      real = 0;
      imaginary = 0;
    }
    //temp:
    float getReal() const {
      return real;
    }
    float getImaginary() const {
      return imaginary;
    }
    Complex(float r, float i){
      real = r;
      imaginary = i;
    }
    Complex(string n){
        int i_pos = n.find('i');
        int sign_pos = n.find('+', 1);
        if (sign_pos == string::npos)
            sign_pos = n.find('-', 1);

        if (i_pos != string::npos && sign_pos != string::npos) {
            // Extract real part
            string real_str = n.substr(0, sign_pos);
            // Extract imaginary part (skip the 'i' at the end)
            string imag_str = n.substr(sign_pos, i_pos - sign_pos);
            real = atof(real_str.c_str());
            imaginary = atof(imag_str.c_str());
        } else {
            real = 0;
            imaginary = 0;
        }
    }
    Complex operator+(Complex rhs){
      // To DO
    }
    Complex operator-(Complex rhs){
      // To DO
    }
    Complex operator*(const Complex& other) const {
      // To DO
    }
    Complex operator/(const Complex& other) const {
      // To DO
    }
    Complex conjugate() {
      // To DO
    }
};
