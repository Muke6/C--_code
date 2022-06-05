#include<iostream>
#include<string>
using namespace std;

class complex{
public:
    complex (double r = 0,double i = 0):re(r),im(i){}
    complex& operator+=(const complex& r){
        this->re+=r.re;
        this->im+=r.im;
        return *this;
    };
    double real () const {return re;}
    double imag () const {return im;}
private:
    double re;
    double im;
};

int main(){
    complex c1(1,2),c2(3,4);
    c1 += c2;
    cout << c1.real() << " " << c1.imag() << endl;
    return 0;
}
