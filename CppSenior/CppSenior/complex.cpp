#include "±êÍ·.h"

complex::complex()
{

}

complex::~complex()
{

}

//1.ÖØÔØ+=·ûºÅ
inline complex& complex::operator + (const complex&rs)
{
	return complex(this->im + rs.im,this->re + rs.re);
}

inline complex& complex::operator - (const complex&rs)
{
    
	return complex(this->im - rs.im, this->re - rs.re);
}

inline complex& complex::operator += (const complex&rs)
{
	this->im += rs.im;
	this->re += rs.re;

	return *this;
}

inline complex& complex::operator -= (const complex&rs)
{
	this->im -= rs.im;
	this->re -= rs.re;

	return *this;
}

inline bool complex::operator == (const complex&rs)
{
	return(this->im == rs.im && this->re == rs.re);
}

inline complex& complex::operator -- (int)
{
	this->im--;
	this->re--;

	return *this;
}

inline complex& complex::operator ++ (int)
{
	this->im--;
	this->re--;

	return *this;
}

std::ostream & operator<<(std::ostream & os, complex & obj)
{
	return os << obj.re << obj.im <<endl;
}

int main(void)
{  
	complex c1(1, 2);
	complex c2(2, 3);

	complex c3;
	c3 = c1 + c2;

	c3.printC();

	cout << c1 << c2;
   
	return 0;
}
