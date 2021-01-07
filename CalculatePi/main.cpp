//
//  main.cpp
//  CalculatePi
//
//  Created by 郭典約 on 2020/12/13.
//  Copyright © 2020 郭典約. All rights reserved.
//

#include <iostream>
#include "Digit.hpp"
#include "Number.hpp"
#include "Calculation.hpp"

//int main(int argc, const char * argv[]) {
//    //輸入
//    printf("求到小數點後第幾位π:");
//    int n; // 小數點後第幾位
//    scanf("%d", &n);
//
//
//    //計算出π值
//
//
//    //print出答案
//
//
//    return 0;
//}

int main(){ // test class
    Number number1("123.5678");
    Number number2("-00000.00001");
    
    Calculation::numberAddition(number1, number2, 0);
    
    std::cout << number1.getString() << std::endl;
    
    
    return 0;
}
