//
//  Calculation.hpp
//  CalculatePi
//
//  Created by 郭典約 on 2020/12/13.
//  Copyright © 2020 郭典約. All rights reserved.
//

#ifndef Calculation_hpp
#define Calculation_hpp

#include "Digit.hpp"
#include "Number.hpp"

class Calculation{
    public:
        static void numberAddition(Number&, const Digit, const Number::num&) ;//個位數加法 將b加到a的第n位上
        static void numberAddition(Number&, const Number, const Number::num&) ;//將b加到a的第n位上 ex: numberAddition(123, 25, 3)=123+25*10^3
        static void numberSubtraction(Number&, const Digit, const Number::num&) ;//個位數減法
        static void numberMultiplication(Number&, const Number) ;//數字乘法
    private:
        Calculation();
};

#endif /* Calculation_hpp */
