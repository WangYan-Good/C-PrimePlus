/*
3．编写并测试可变参数模板函数sum_value()，它接受任意长度的参数列表(其中包含数值，但可以是任何类型儿并以 long double的方式返回这些数值的租。
*/
#include "3.h"

template<typename T>
T sum_value( std::initializer_list<T> It)
{
    T sum = 0;
    for( auto x : It )
    {
        sum += x;
    }
    return sum;
}

int main()
{
    int sum_i = sum_value( { 1,2,3,4,5 } );
    double sum_d = sum_value( { 1.1, 1.2, 1.3, 1.4 } );
    float sum_f = sum_value( { 1.2, 1.3, 1.4, 1.5 } );

    std::cout << "sum_i: " << sum_i << std::endl;
    std::cout << "sum_f: " << sum_f << std::endl;
    std::cout << "sum_d: " << sum_d << std::endl;
    return 0;
}