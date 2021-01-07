//
//  Calculation.cpp
//  CalculatePi
//
//  Created by 郭典約 on 2020/12/13.
//  Copyright © 2020 郭典約. All rights reserved.
//

#include "Calculation.hpp"
#include "Digit.hpp"
#include "Number.hpp"

void Calculation::numberAddition(Number& a, const Digit b, const Number::num& n){
    const Digit::digit B = b.get();
    
    switch (a.get(n).get()) {
        case Digit::zero:
            a.set(n, B);
            break;
        case Digit::one:
            switch (B) {
                case Digit::zero:
                    break;
                case Digit::one:
                    a.set(n, Digit::two);
                    break;
                case Digit::two:
                    a.set(n, Digit::three);
                    break;
                case Digit::three:
                    a.set(n, Digit::four);
                    break;
                case Digit::four:
                    a.set(n, Digit::five);
                    break;
                case Digit::five:
                    a.set(n, Digit::six);
                    break;
                case Digit::six:
                    a.set(n, Digit::seven);
                    break;
                case Digit::seven:
                    a.set(n, Digit::eight);
                    break;
                case Digit::eight:
                    a.set(n, Digit::nine);
                    break;
                case Digit::nine:
                    a.set(n, Digit::zero);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
            }
            break;
        case Digit::two:
            switch (B) {
                case Digit::zero:
                    a.set(n, Digit::two);
                    break;
                case Digit::one:
                    a.set(n, Digit::three);
                    break;
                case Digit::two:
                    a.set(n, Digit::four);
                    break;
                case Digit::three:
                    a.set(n, Digit::five);
                    break;
                case Digit::four:
                    a.set(n, Digit::six);
                    break;
                case Digit::five:
                    a.set(n, Digit::seven);
                    break;
                case Digit::six:
                    a.set(n, Digit::eight);
                    break;
                case Digit::seven:
                    a.set(n, Digit::nine);
                    break;
                case Digit::eight:
                    a.set(n, Digit::zero);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::nine:
                    a.set(n, Digit::one);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
            }
            break;
        case Digit::three:
            switch (B) {
                case Digit::zero:
                    a.set(n, Digit::three);
                    break;
                case Digit::one:
                    a.set(n, Digit::four);
                    break;
                case Digit::two:
                    a.set(n, Digit::five);
                    break;
                case Digit::three:
                    a.set(n, Digit::six);
                    break;
                case Digit::four:
                    a.set(n, Digit::seven);
                    break;
                case Digit::five:
                    a.set(n, Digit::eight);
                    break;
                case Digit::six:
                    a.set(n, Digit::nine);
                    break;
                case Digit::seven:
                    a.set(n, Digit::zero);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::eight:
                    a.set(n, Digit::one);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::nine:
                    a.set(n, Digit::two);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
            }
            break;
        case Digit::four:
            switch (B) {
                case Digit::zero:
                    a.set(n, Digit::four);
                    break;
                case Digit::one:
                    a.set(n, Digit::five);
                    break;
                case Digit::two:
                    a.set(n, Digit::six);
                    break;
                case Digit::three:
                    a.set(n, Digit::seven);
                    break;
                case Digit::four:
                    a.set(n, Digit::eight);
                    break;
                case Digit::five:
                    a.set(n, Digit::nine);
                    break;
                case Digit::six:
                    a.set(n, Digit::zero);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::seven:
                    a.set(n, Digit::one);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::eight:
                    a.set(n, Digit::two);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::nine:
                    a.set(n, Digit::three);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
            }
            break;
        case Digit::five:
            switch (B) {
                case Digit::zero:
                    a.set(n, Digit::five);
                    break;
                case Digit::one:
                    a.set(n, Digit::six);
                    break;
                case Digit::two:
                    a.set(n, Digit::seven);
                    break;
                case Digit::three:
                    a.set(n, Digit::eight);
                    break;
                case Digit::four:
                    a.set(n, Digit::nine);
                    break;
                case Digit::five:
                    a.set(n, Digit::zero);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::six:
                    a.set(n, Digit::one);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::seven:
                    a.set(n, Digit::two);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::eight:
                    a.set(n, Digit::three);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::nine:
                    a.set(n, Digit::four);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
            }
            break;
        case Digit::six:
            switch (B) {
                case Digit::zero:
                    a.set(n, Digit::six);
                    break;
                case Digit::one:
                    a.set(n, Digit::seven);
                    break;
                case Digit::two:
                    a.set(n, Digit::eight);
                    break;
                case Digit::three:
                    a.set(n, Digit::nine);
                    break;
                case Digit::four:
                    a.set(n, Digit::zero);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::five:
                    a.set(n, Digit::one);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::six:
                    a.set(n, Digit::two);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::seven:
                    a.set(n, Digit::three);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::eight:
                    a.set(n, Digit::four);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::nine:
                    a.set(n, Digit::five);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
            }
            break;
        case Digit::seven:
            switch (B) {
                case Digit::zero:
                    a.set(n, Digit::seven);
                    break;
                case Digit::one:
                    a.set(n, Digit::eight);
                    break;
                case Digit::two:
                    a.set(n, Digit::nine);
                    break;
                case Digit::three:
                    a.set(n, Digit::zero);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::four:
                    a.set(n, Digit::one);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::five:
                    a.set(n, Digit::two);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::six:
                    a.set(n, Digit::three);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::seven:
                    a.set(n, Digit::four);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::eight:
                    a.set(n, Digit::five);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::nine:
                    a.set(n, Digit::six);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
            }
            break;
        case Digit::eight:
            switch (B) {
                case Digit::zero:
                    a.set(n, Digit::eight);
                    break;
                case Digit::one:
                    a.set(n, Digit::nine);
                    break;
                case Digit::two:
                    a.set(n, Digit::zero);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::three:
                    a.set(n, Digit::one);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::four:
                    a.set(n, Digit::two);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::five:
                    a.set(n, Digit::three);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::six:
                    a.set(n, Digit::four);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::seven:
                    a.set(n, Digit::five);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::eight:
                    a.set(n, Digit::six);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::nine:
                    a.set(n, Digit::seven);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
            }
            break;
        case Digit::nine:
            switch (B) {
                case Digit::zero:
                    a.set(n, Digit::nine);
                    break;
                case Digit::one:
                    a.set(n, Digit::zero);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::two:
                    a.set(n, Digit::one);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::three:
                    a.set(n, Digit::two);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::four:
                    a.set(n, Digit::three);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::five:
                    a.set(n, Digit::four);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::six:
                    a.set(n, Digit::five);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::seven:
                    a.set(n, Digit::six);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::eight:
                    a.set(n, Digit::seven);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
                case Digit::nine:
                    a.set(n, Digit::eight);
                    Calculation::numberAddition(a, Digit::one, n + 1);
                    break;
            }
            break;
    }
}

void Calculation::numberSubtraction(Number& a, const Digit b, const Number::num& n){
    
}

void Calculation::numberAddition(Number& a, const Number b, const Number::num& n){
    if(a.getSign() == Number::positive){
        Number::num i = -1;//在b中的index
        while(b.findNextNumber(i) != i){//如果還有下一個
            i = b.findNextNumber(i);
            Calculation::numberAddition(a, b.get(b.getDigitIndex() - i), n + b.getDigitIndex() - i);//把數字加上去
        }
    }
}
