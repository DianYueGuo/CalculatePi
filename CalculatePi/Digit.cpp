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
    switch (v) {
        case '0':
            Digit::value = Digit::zero;
            break;
        case '1':
            Digit::value = Digit::one;
            break;
        case '2':
            Digit::value = Digit::two;
            break;
        case '3':
            Digit::value = Digit::three;
            break;
        case '4':
            Digit::value = Digit::four;
            break;
        case '5':
            Digit::value = Digit::five;
            break;
        case '6':
            Digit::value = Digit::six;
            break;
        case '7':
            Digit::value = Digit::seven;
            break;
        case '8':
            Digit::value = Digit::eight;
            break;
        case '9':
            Digit::value = Digit::nine;
            break;
        default:
            Digit::value = Digit::zero;
            break;
    }
}

void Digit::set(const Digit::digit v){
    Digit::value = v;
}

Digit::digit Digit::get() const{
    return value;
}
std::string Digit::getString() const{
    switch (Digit::value) {
        case Digit::zero:
            return "0";
        case Digit::one:
            return "1";
        case Digit::two:
            return "2";
        case Digit::three:
            return "3";
        case Digit::four:
            return "4";
        case Digit::five:
            return "5";
        case Digit::six:
            return "6";
        case Digit::seven:
            return "7";
        case Digit::eight:
            return "8";
        case Digit::nine:
            return "9";
    }
}
