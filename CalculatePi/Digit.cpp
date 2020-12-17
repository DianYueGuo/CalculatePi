//
//  Digit.cpp
//  CalculatePi
//
//  Created by 郭典約 on 2020/12/13.
//  Copyright © 2020 郭典約. All rights reserved.
//

#include "Digit.hpp"

Digit::Digit(const Digit::digit v){
    Digit::value = v;
}

void Digit::set(const Digit::digit v){
    Digit::value = v;
}

Digit::digit Digit::get() const{
    return value;
}

