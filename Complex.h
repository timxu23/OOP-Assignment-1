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
      Complex result;
      result.real = this->real + rhs.real;
      result.imaginary = this-> imaginary + rhs.imaginary;
      return result;
    }
    Complex operator-(Complex rhs){
      Complex result;
      result.real = this->real - rhs.real;
      result.imaginary = this-> imaginary - rhs.imaginary;
      return result;
    }
    Complex operator*(const Complex& other) const {
      // To DO
      Complex result;
      
    }
    Complex operator/(const Complex& other) const {
      Complex result;
      result.real = (this->real * other.real + this->imaginary * other.imaginary) / (other.real * other.real + other.imaginary * other.imaginary);
      result.imaginary = (this->imaginary * other.real - this->real * other.imaginary) / (other.real * other.real + other.imaginary * other.imaginary);
      return result;
    }
    Complex conjugate() {
      // To DO
    }
    friend ostream& operator<<(ostream& os, Complex& c);
    friend istream& operator>>(istream& is, Complex& c);
};

ostream& operator<<(ostream& os, Complex& c) {
    os << c.real;
    if (c.imaginary >= 0) {
        os << "+";
    }
    os << c.imaginary << "i";
    return os;
}

istream& operator>>(istream& is, Complex& c) {
    string input;
    is >> input;
    c = Complex(input);
    return is;
}
