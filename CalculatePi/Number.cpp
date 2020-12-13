//
//  Number.cpp
//  CalculatePi
//
//  Created by 郭典約 on 2020/12/13.
//  Copyright © 2020 郭典約. All rights reserved.
//

#include "Number.hpp"

void Number::set(const Number::Num n, const Digit::digit v){
    Number::Num index = Number::digitIndex - n;
    const size_t size = Number::number.size();
    
    if(index > size - 1)//index超出vector的範圍
        Number::number.insert(Number::number.end(), index + 1 - size, Digit::zero);//重設vector大小 從後面增加
    else if(index < 0){//index是負值
        Number::number.insert(Number::number.begin(), -index, Digit::zero);//重設vector大小 從前面增加
        index = 0;//將index設到最前面
    }
    
    Number::number.at(index) = v;
}

Digit::digit Number::get(const Number::Num n) const{
    if(n > Number::number.size() - 1 || n < 0)
        return Digit::zero;//index超出vector的範圍
    else
        return Number::number.at(n);
}

Number::Num Number::findNextNumber(const Number::Num index) const{
    Number::Num i = index;
    if(i < 0) i = 0;
    
    for(;i < Number::number.size(); i++){
        if(i != index && Number::number.at(i) != Digit::zero)
            return i;//如果找了就跳出
    }
    
    return index;//找不到，回傳原位置
}

Number::Num Number::getDigitIndex() const{
    return Number::digitIndex;
}
