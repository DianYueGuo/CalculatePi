//
//  Number.cpp
//  CalculatePi
//
//  Created by 郭典約 on 2020/12/13.
//  Copyright © 2020 郭典約. All rights reserved.
//

#include "Number.hpp"
#include "Digit.hpp"
#include <string>

Number::Number(){
    Number::numberSign = Number::positive;
    Number::number.resize(1, Digit::zero);
    Number::digitIndex = 0;
}

Number::Number(const std::string n){
    if(n.compare(0, 1, "-") == 0){
        Number::numberSign = Number::negative;
    }else{
        Number::numberSign = Number::positive;
    }
    
    if(n.size() > 0){
        Number::digitIndex = -1;
        
        Number::Num i = 0;
        for(; i < n.size() && n.compare(i, 1, ".") != 0; i++){
                Number::number.push_back(Digit(n.at(i)));
                Number::digitIndex++;
        }
        
        for(i++; i < n.size(); i++){
                Number::number.push_back(Digit(n.at(i)));
        }
    }else{
        Number::number.resize(1, Digit::zero);
        Number::digitIndex = 0;
    }
}


void Number::set(const Number::Num n, const Digit::digit v){
    Number::Num index = Number::digitIndex - n;
    const size_t size = Number::number.size();
    
    if(index > Number::Num(size) - 1){//index超出vector的範圍
        Number::number.insert(Number::number.end(), index + 1 - size, Digit(Digit::zero));//重設vector大小 從後面增加
    }else if(index < 0){//index是負值
        Number::number.insert(Number::number.begin(), -index, Digit(Digit::zero));//重設vector大小 從前面增加
        
        Number::digitIndex += -index;
        
        index = 0;//將index設到最前面
    }
    
    Number::number.at(index) = Digit(v);
}

Digit Number::get(const Number::Num n) const{
    Number::Num index = Number::digitIndex - n;
    
    if(index > Number::number.size() - 1 || index < 0)
        return Digit::zero;//index超出vector的範圍
    else
        return Number::number.at(index);
}

void Number::setSign(const Number::sign s){
    Number::numberSign = s;
}

Number::sign Number::getSign() const{
    return Number::numberSign;
}

Number::Num Number::findNextNumber(const Number::Num index) const{
    Number::Num i = index;
    if(i < 0) i = 0;
    
    for(;i < Number::number.size(); i++){
        if(i != index && Number::number.at(i).get() != Digit::zero)
            return i;//如果找了就跳出
    }
    
    return index;//找不到，回傳原位置
}

Number::Num Number::getDigitIndex() const{
    return Number::digitIndex;
}

std::string Number::getString() const{
    std::string str;
    
    if(Number::numberSign == Number::negative){
        str.append("-");
    }
    
    for(Number::Num i = 0; i < Number::number.size(); i++){
        str.append(Number::number.at(i).getString());
        if(i == Number::digitIndex){
            str.append(".");
        }
    }
    
    return str;
}
