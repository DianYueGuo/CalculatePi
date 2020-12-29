//
//  Digit.cpp
//  CalculatePi
//
//  Created by 郭典約 on 2020/12/13.
//  Copyright © 2020 郭典約. All rights reserved.
//

#include "Digit.hpp"
#include <string>

Digit::Digit(const Digit::digit v){
    Digit::value = v;
}

Digit::Digit(const char v){
    if(v == '0') Digit::value = Digit::zero;
    else if(v == '1') Digit::value = Digit::one;
    else if(v == '2') Digit::value = Digit::two;
    else if(v == '3') Digit::value = Digit::three;
    else if(v == '4') Digit::value = Digit::four;
    else if(v == '5') Digit::value = Digit::five;
    else if(v == '6') Digit::value = Digit::six;
    else if(v == '7') Digit::value = Digit::seven;
    else if(v == '8') Digit::value = Digit::eight;
    else if(v == '9') Digit::value = Digit::nine;
    else Digit::value = Digit::zero;
}

void Digit::set(const Digit::digit v){
    Digit::value = v;
}

Digit::digit Digit::get() const{
    return value;
}
std::string Digit::getString() const{
    if(Digit::value == Digit::zero) return "0";
    if(Digit::value == Digit::one) return "1";
    if(Digit::value == Digit::two) return "2";
    if(Digit::value == Digit::three) return "3";
    if(Digit::value == Digit::four) return "4";
    if(Digit::value == Digit::five) return "5";
    if(Digit::value == Digit::six) return "6";
    if(Digit::value == Digit::seven) return "7";
    if(Digit::value == Digit::eight) return "8";
    if(Digit::value == Digit::nine) return "9";
    return "0";
}
