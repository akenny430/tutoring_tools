#pragma once 

class Rational
{
    // using number_type = int; /* maybe want to make numbers as long int or something else  */
private: 
    int m_num {}; 
    int m_den {}; 
public: 
    /* default constructor */
    Rational(int num = 1, int den = 1);

    void simplify(Rational x);

    void junk_print(); 
}; 