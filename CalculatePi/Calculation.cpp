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

void Calculation::numberAddition(Number& a, const Digit b, const Number::Num& n){
    const Digit::digit A = a.get(n).get();
    const Digit::digit B = b.get();
    
    if(A == Digit::zero){//a==0 a=b
        a.set(n, B);
    }else if(A == Digit::one){//a==1 a=1+b
        if(B == Digit::zero){}
        else if(B == Digit::one) a.set(n, Digit::two);
        else if(B == Digit::two) a.set(n, Digit::three);
        else if(B == Digit::three) a.set(n, Digit::four);
        else if(B == Digit::four) a.set(n, Digit::five);
        else if(B == Digit::five) a.set(n, Digit::six);
        else if(B == Digit::six) a.set(n, Digit::seven);
        else if(B == Digit::seven) a.set(n, Digit::eight);
        else if(B == Digit::eight) a.set(n, Digit::nine);
        else if(B == Digit::nine){//a+b>9 進位
            a.set(n, Digit::zero);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }
    }else if(A == Digit::two){//a==2 a=2+b
        if(B == Digit::zero) a.set(n, Digit::two);
        else if(B == Digit::one) a.set(n, Digit::three);
        else if(B == Digit::two) a.set(n, Digit::four);
        else if(B == Digit::three) a.set(n, Digit::five);
        else if(B == Digit::four) a.set(n, Digit::six);
        else if(B == Digit::five) a.set(n, Digit::seven);
        else if(B == Digit::six) a.set(n, Digit::eight);
        else if(B == Digit::seven) a.set(n, Digit::nine);
        else if(B == Digit::eight){//a+b==10>9 進位
            a.set(n, Digit::zero);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::nine){//a+b==11>9 進位
            a.set(n, Digit::one);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }
    }else if(A == Digit::three){//a==3 a=3+b
        if(B == Digit::zero) a.set(n, Digit::three);
        else if(B == Digit::one) a.set(n, Digit::four);
        else if(B == Digit::two) a.set(n, Digit::five);
        else if(B == Digit::three) a.set(n, Digit::six);
        else if(B == Digit::four) a.set(n, Digit::seven);
        else if(B == Digit::five) a.set(n, Digit::eight);
        else if(B == Digit::six) a.set(n, Digit::nine);
        else if(B == Digit::seven){//a+b==10>9 進位
            a.set(n, Digit::zero);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::eight){//a+b==11>9 進位
            a.set(n, Digit::one);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::nine){//a+b==12>9 進位
            a.set(n, Digit::two);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }
    }else if(A == Digit::four){//a==4 a=4+b
        if(B == Digit::zero) a.set(n, Digit::four);
        else if(B == Digit::one) a.set(n, Digit::five);
        else if(B == Digit::two) a.set(n, Digit::six);
        else if(B == Digit::three) a.set(n, Digit::seven);
        else if(B == Digit::four) a.set(n, Digit::eight);
        else if(B == Digit::five) a.set(n, Digit::nine);
        else if(B == Digit::six){//a+b==10>9 進位
            a.set(n, Digit::zero);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::seven){//a+b==11>9 進位
            a.set(n, Digit::one);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::eight){//a+b==12>9 進位
            a.set(n, Digit::two);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::nine){//a+b==13>9 進位
            a.set(n, Digit::three);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }
    }else if(A == Digit::five){//a==5 a=5+b
        if(B == Digit::zero) a.set(n, Digit::five);
        else if(B == Digit::one) a.set(n, Digit::six);
        else if(B == Digit::two) a.set(n, Digit::seven);
        else if(B == Digit::three) a.set(n, Digit::eight);
        else if(B == Digit::four) a.set(n, Digit::nine);
        else if(B == Digit::five){//a+b==10>9 進位
            a.set(n, Digit::zero);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::six){//a+b==11>9 進位
            a.set(n, Digit::one);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::seven){//a+b==12>9 進位
            a.set(n, Digit::two);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::eight){//a+b==13>9 進位
            a.set(n, Digit::three);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::nine){//a+b==14>9 進位
            a.set(n, Digit::four);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }
    }else if(A == Digit::six){//a==6 a=6+b
        if(B == Digit::zero) a.set(n, Digit::six);
        else if(B == Digit::one) a.set(n, Digit::seven);
        else if(B == Digit::two) a.set(n, Digit::eight);
        else if(B == Digit::three) a.set(n, Digit::nine);
        else if(B == Digit::four){//a+b==10>9 進位
            a.set(n, Digit::zero);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::five){//a+b==11>9 進位
            a.set(n, Digit::one);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::six){//a+b==12>9 進位
            a.set(n, Digit::two);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::seven){//a+b==13>9 進位
            a.set(n, Digit::three);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::eight){//a+b==14>9 進位
            a.set(n, Digit::four);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::nine){//a+b==15>9 進位
            a.set(n, Digit::five);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }
    }else if(A == Digit::seven){//a==7 a=7+b
        if(B == Digit::zero) a.set(n, Digit::seven);
        else if(B == Digit::one) a.set(n, Digit::eight);
        else if(B == Digit::two) a.set(n, Digit::nine);
        else if(B == Digit::three){//a+b==10>9 進位
            a.set(n, Digit::zero);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::four){//a+b==11>9 進位
            a.set(n, Digit::one);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::five){//a+b==12>9 進位
            a.set(n, Digit::two);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::six){//a+b==13>9 進位
            a.set(n, Digit::three);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::seven){//a+b==14>9 進位
            a.set(n, Digit::four);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::eight){//a+b==15>9 進位
            a.set(n, Digit::five);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::nine){//a+b==16>9 進位
            a.set(n, Digit::six);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }
    }else if(A == Digit::eight){//a==8 a=8+b
        if(B == Digit::zero) a.set(n, Digit::eight);
        else if(B == Digit::one) a.set(n, Digit::nine);
        else if(B == Digit::two){//a+b==10>9 進位
            a.set(n, Digit::zero);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::three){//a+b==11>9 進位
            a.set(n, Digit::one);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::four){//a+b==12>9 進位
            a.set(n, Digit::two);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::five){//a+b==13>9 進位
            a.set(n, Digit::three);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::six){//a+b==14>9 進位
            a.set(n, Digit::four);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::seven){//a+b==15>9 進位
            a.set(n, Digit::five);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::eight){//a+b==16>9 進位
            a.set(n, Digit::six);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::nine){//a+b==17>9 進位
            a.set(n, Digit::seven);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }
    }else if(A == Digit::nine){//a==9 a=9+b
        if(B == Digit::zero) a.set(n, Digit::nine);
        else if(B == Digit::one){//a+b==10>9 進位
            a.set(n, Digit::zero);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::two){//a+b==11>9 進位
            a.set(n, Digit::one);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::three){//a+b==12>9 進位
            a.set(n, Digit::two);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::four){//a+b==13>9 進位
            a.set(n, Digit::three);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::five){//a+b==14>9 進位
            a.set(n, Digit::four);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::six){//a+b==15>9 進位
            a.set(n, Digit::five);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::seven){//a+b==16>9 進位
            a.set(n, Digit::six);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::eight){//a+b==17>9 進位
            a.set(n, Digit::seven);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }else if(B == Digit::nine){//a+b==18>9 進位
            a.set(n, Digit::eight);
            Calculation::numberAddition(a, Digit::one, n + 1);
        }
    }
}

void Calculation::numberAddition(Number& a, const Number b, const Number::Num& n){
    Number::Num i = -1;//在b中的index
    while(b.findNextNumber(i) != i){//如果還有下一個
        i = b.findNextNumber(i);
        Calculation::numberAddition(a, b.get(b.getDigitIndex() - i), n + b.getDigitIndex() - i);//把數字加上去
    }
}
