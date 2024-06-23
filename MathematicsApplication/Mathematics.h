//
// Created by brad_ on 2024-06-22.
//

#ifndef INC_2DGAME_MATHEMATICS_H
#define INC_2DGAME_MATHEMATICS_H

#include <iostream>
#include <cmath>

/**
 * @class Mathematics
 * @brief Provides basic arithmetic operations.
 */
class Mathematics
{
public:
    /**
     * @brief Adds two floating-point numbers.
     * @param x First number.
     * @param y Second number.
     * @return z, the sum of x and y.
     */
    static float Addition(float x, float y)
            {
                float z = x + y;
                return z;
            };
    /**
   * @brief Subtracts the second floating-point number from the first.
   * @param x First number.
   * @param y Second number.
   * @return z, the difference between x and y.
   */
    static float Subtraction(float x, float y)
            {
                float z = x - y;
                return z;
            };
    /**
    * @brief Multiplies two floating-point numbers.
    * @param x First number.
    * @param y Second number.
    * @return z, the product of x and y.
    */
    static float Multiplication(float x, float y)
            {
                float z = x * y;
                return z;
            };
    /**
     * @brief Divides the first floating-point number by the second.
     * @param x First number.
     * @param y Second number.
     * @return z, the quotient of x divided by y.
     * @note If x or y is zero, prints an error message and returns NAN.
     */
    static float Division(float x, float y)
            {
                if (x != 0 || y != 0) {
                    float z = x / y;
                    return z;
                } else {
                    std::cerr << "Error: Division by zero!" << std::endl;
                    return NAN;
                }
            }
    /**
* @brief Computes the remainder of the division of two floating-point numbers.
* @param x First number.
* @param y Second number.
* @return z, the remainder of x divided by y.
*/
    static float Modulus(float x, float y)
        {
            float z = std::fmod(x, y);
            return z;
        }
};


#endif //INC_2DGAME_MATHEMATICS_H
