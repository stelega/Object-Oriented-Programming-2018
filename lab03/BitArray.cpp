#include "BitArray.h"
#include <iostream>


BitArray::BitArray(int size, bool value): m_size(size){
    int s = size/8 + 1;
    m_arr = new unsigned char[s];

    if(value){        
        for(int i=0; i<s; i++)
            m_arr[i] = 255;
    }
    else{
        for(int i=0; i<s; i++)
            m_arr[i] = 0;
    }
}


BitArray::~BitArray(){
    delete[] m_arr;
}


void BitArray::print() const{
    for(int i=m_size-1; i>=0; i--){
            std::cout << ((m_arr[i / 8] >> i % 8)%2);
            if(!(i % 8))
                std::cout << " <-" << i << " ";
    }
}


Bit BitArray::operator[](int index) const{
    int in_arr, in_cel;
    in_arr = index/8;
    in_cel = index%8;
    return Bit(m_arr + in_arr, in_cel);
}



Bit::Bit(unsigned char* arr, int index): m_arr(arr), m_index(index){}


Bit& Bit::operator=(bool value){
    if(value)
        *m_arr = *m_arr | (1 << m_index);
    else
        *m_arr = *m_arr & ~(1 << m_index);
    return *this;
}


Bit::operator bool() const
    { return (*m_arr >> m_index)%2; }
