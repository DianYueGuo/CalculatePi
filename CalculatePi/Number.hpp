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
#include <string>
#include "Digit.hpp"



class Number{
    public:
        typedef int Num;
    
        enum sign {positive, negative};
        
        Number();
        Number(const std::string);
    
        void set(const Number::Num, const Digit::digit);//設定第n位數爲v
        Digit get(const Number::Num) const;//取得第n位數值
    
        Number::Num getDigitIndex() const;//取得個位數位置
    
        void setSign(const Number::sign);//設定正負號
        Number::sign getSign() const;//取得正負號
    
        Number::Num findNextNumber(const Number::Num) const;//輸入一個位置回傳下一個不為零數字的位置，若找不到則回傳原位置
    
        std::string getString() const;//取得數字字串
    private:
        Number::Num digitIndex;//個位數位置
        Number::sign numberSign;//正負號
        std::vector<Digit> number;//儲存數值 第n位數值為 number.at(index - n) 個位n=0
};

#endif /* Number_hpp */
