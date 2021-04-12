// string.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

inline string::string(const char * data)
{
	if (data)
	{
		m_data = new char[strlen(data) + 1];
		strcpy_s(m_data, (std::strlen(data) + 1),data); //strcpy_s 比 strcpy 更安全
	}
	else
	{
		m_data = new char[1];
		*m_data = '\0';
	}
}

inline string::string(const string&obj)
{
	if (obj.m_data)
	{
		m_data = new char[strlen(obj.m_data) + 1];
		strcpy_s(m_data, (std::strlen(obj.m_data) + 1), obj.m_data); //strcpy_s 比 strcpy 更安全
	}
	else
	{
		m_data = new char[1];
		*m_data = '\0';
	}
}

inline string & string::operator = (const string&obj)
{
	if (this == &obj)
	{
		return *this;
	}

	delete m_data;
	m_data = new char[strlen(obj.m_data) + 1];
    strcpy_s(m_data, (std::strlen(obj.m_data) + 1), obj.m_data);
	return *this;
}

inline string::~string()
{
	if (m_data)
	{
		delete[] m_data;
	}
}

int main()
{
    std::cout << "Hello World!\n"; 

	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
