#include <iostream>

int main()
{
    const int size{ 3 };

    int    iarr[size]{ 1, 2, 3 };
    double darr[size]{ 1.1, 2.2, 3.3 };
    char   carr[size]{ 'A', 'B', 'C' };


#define INTEGER
#include "function.h"

#define ShowArray ShowArrayInt
#define FindMin   FindMinInt
#define FindMax   FindMaxInt
#define arr       iarr

    ShowArray(arr, size);
    std::cout << "Min: " << FindMin(arr, size) << "\n";
    std::cout << "Max: " << FindMax(arr, size) << "\n\n";

#undef arr
#undef ShowArray
#undef FindMin
#undef FindMax
#undef INTEGER


#define DOUBLE
#include "function.h"

#define ShowArray ShowArrayDouble
#define FindMin   FindMinDouble
#define FindMax   FindMaxDouble
#define arr       darr

    ShowArray(arr, size);
    std::cout << "Min: " << FindMin(arr, size) << "\n";
    std::cout << "Max: " << FindMax(arr, size) << "\n\n";

#undef arr
#undef ShowArray
#undef FindMin
#undef FindMax
#undef DOUBLE


#define CHAR
#include "function.h"

#define ShowArray ShowArrayChar
#define FindMin   FindMinChar
#define FindMax   FindMaxChar
#define arr       carr

    ShowArray(arr, size);
    std::cout << "Min: " << FindMin(arr, size) << "\n";
    std::cout << "Max: " << FindMax(arr, size) << "\n";

#undef arr
#undef ShowArray
#undef FindMin
#undef FindMax
#undef CHAR

    return 0;
}