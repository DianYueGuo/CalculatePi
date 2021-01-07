//
//  Comparsion.hpp
//  CalculatePi
//
//  Created by 郭典約 on 2021/1/2.
//  Copyright © 2021 郭典約. All rights reserved.
//

#ifndef Comparsion_hpp
#define Comparsion_hpp

#include "Number.hpp"

class Comparsion{
    public:
        static bool isGreaterThan(const Number, const Number);
        static bool isLessThan(const Number, const Number);
        static bool isEqualTo(const Number, const Number);
    private:
        Comparsion();
};

#endif /* Comparsion_hpp */
