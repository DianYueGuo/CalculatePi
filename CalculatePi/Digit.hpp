//
//  Digit.hpp
//  CalculatePi
//
//  Created by 郭典約 on 2020/12/13.
//  Copyright © 2020 郭典約. All rights reserved.
//

#ifndef Digit_hpp
#define Digit_hpp

#include <stdio.h>

class Digit{
    public:
        enum digit{zero, one, two, three, four, five, six, seven, eight, nine};//定義基本數字
        Digit(const digit v);//初始設定數字
        void set(const digit v);//設定數字
        digit get() const;//取得數字
    private:
        digit value;//數值
};

#endif /* Digit_hpp */
