//
//  Digit.hpp
//  CalculatePi
//
//  Created by 郭典約 on 2020/12/13.
//  Copyright © 2020 郭典約. All rights reserved.
//

#ifndef Digit_hpp
#define Digit_hpp

#include <string>

class Digit{
    public:
        enum digit {zero, one, two, three, four, five, six, seven, eight, nine};//定義基本數字
    
        Digit(const digit);//初始設定數字
        Digit(const char);
    
        void set(const digit);//設定數字
        digit get() const;//取得數字
    
        std::string getString() const;//取得數字字串
    private:
        digit value;//數值
};

#endif /* Digit_hpp */
