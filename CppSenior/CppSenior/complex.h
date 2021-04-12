#pragma once
//1.��ֹͷ�ļ����ظ�����
#ifndef _Complex_
#define _Complex_

#include <ostream>
#include <stdio.h>
#include <iostream>

using namespace std;

class complex
{
public:
	complex(double re, double im):re(re),im(im)
	{
	}
	complex();
	~complex();

	double real() const { return re; }
	double image() const { return im; }

	//1.����+=����
	complex& operator + (const complex&rs);
	complex& operator - (const complex&rs);
	complex& operator += (const complex&rs);
	complex& operator -= (const complex&rs);
	bool operator == (const complex&rs);

	complex& operator -- (int);
	complex& operator ++ (int);

	void printC() 
	{
		cout << "re: " << re << "im: " << im;
	};
	
private:
	//���帴�����鲿��ʵ��
	double re, im;

	friend std::ostream & operator<<(std::ostream & os, complex & obj);

};

#endif // !_Comple_


