//
//  Calculation.hpp
//  CalculatePi
//
//  Created by 郭典約 on 2020/12/13.
//  Copyright © 2020 郭典約. All rights reserved.
//

#ifndef Calculation_hpp
#define Calculation_hpp

#include <stdio.h>
#include "Digit.hpp"
#include "Number.hpp"

class Calculation{
    public:
        static void numberAddition(Number&, const Digit, const Number::Num&);//個位數加法 將b加到a的第n位上
        static void numberAddition(Number&, const Number, const Number::Num&);//將b加到a的第n位上 ex: numberAddition(123, 25, 3)=123+25*10^3
};

#endif /* Calculation_hpp */
