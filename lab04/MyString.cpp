#include "MyString.h"
#include <iostream>
#include <string.h>


MyString::MyString(const char* napis){
    m_arr = new char[strlen(napis) + 1];
    strcpy(m_arr, napis);
}


MyString::MyString(char c){
    m_arr = new char[2];
    m_arr[0] = c;
    m_arr[1] = '\0';
}


MyString::~MyString()
    { delete[] m_arr; }


void MyString::Print() const
    { std::cout << m_arr << std::endl; }


bool MyString::operator==(const MyString& x) const{
    for(unsigned int i=0; i<strlen(m_arr) + 1; i++){
        if(m_arr[i] != x.m_arr[i])
            return false;
    }
    return true;
}   

char& MyString::operator[](int index) const
    { return m_arr[index]; }


MyString MyString::operator+(const MyString& x) const{
    char* c = new char [strlen(m_arr) + strlen(x.m_arr) + 1];
    strcpy(c, m_arr);
    strcat(c, x.m_arr);
    MyString tmp(c);
    delete[] c;
    return tmp;
}


MyString MyString::operator*(int mnoznik) const{
    MyString tmp(m_arr);
    for(int i=1; i<mnoznik; i++)
        tmp = tmp + m_arr;
    return tmp;
}


MyString& MyString::operator=(const MyString& x){
    delete[] m_arr;
    m_arr = new char[strlen(x.m_arr) + 1];
    strcpy(m_arr, x.m_arr);
    return *this;
}



MyString operator*(int mnoznik, const MyString& x)
    { return x * mnoznik; }


std::ostream& operator<<(std::ostream& o, const MyString& x)
    { return o << x.m_arr; }
