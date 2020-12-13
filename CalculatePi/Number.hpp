//
//  Number.hpp
//  CalculatePi
//
//  Created by 郭典約 on 2020/12/13.
//  Copyright © 2020 郭典約. All rights reserved.
//

#ifndef Number_hpp
#define Number_hpp

#include <stdio.h>
#include <vector>
#include "Digit.hpp"



class Number{
    public:
        typedef int Num;
    
        Number(Number const &number);
    
        void set(const Number::Num n, const Digit::digit v);//設定第n位數爲v
        Digit::digit get(const Number::Num n) const;//取得第n位數值
    
        Number::Num getDigitIndex() const;//取得個位數位置
    
        Number::Num findNextNumber(const Number::Num index) const;//輸入一個位置回傳下一個不為零數字的位置，若找不到則回傳原位置
    private:
        Number::Num digitIndex;//個位數位置
        std::vector<Digit::digit> number;//儲存數值 第n位數值為 number.at(index - n) 個位n=0
};

#endif /* Number_hpp */
