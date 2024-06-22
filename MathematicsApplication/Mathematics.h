//
// Created by brad_ on 2024-06-22.
//

#ifndef INC_2DGAME_MATHEMATICS_H
#define INC_2DGAME_MATHEMATICS_H

#include <iostream>
#include <cmath>

class Mathematics
{
public:
    static float Addition(float x, float y)
            {
                float z = x + y;
                return z;
            };
    static float Subtraction(float x, float y)
            {
                float z = x - y;
                return z;
            };
    static float Multiplication(float x, float y)
            {
                float z = x * y;
                return z;
            };
    static float Division(float x, float y)
            {
                if (y != 0) {
                    float z = x / y;
                    return z;
                } else {
                    std::cerr << "Error: Division by zero!" << std::endl;
                    return NAN;
                }
            }
};


#endif //INC_2DGAME_MATHEMATICS_H
