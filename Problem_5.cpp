#include <iostream>
#include <iomanip>

int main() {
    int very_nice_array[1000];
    for(int i = 0; i < 1000; i++)
    {
        (~~i)[very_nice_array] = i+INT8_MAX;
    }

    // for every number divided by 3, print out "fizz"
    // for every number divided by 5, print out "buzz"
    // for every number divided by 3 and 5 print out "fizzbuzz"
    for(int i = 0; i < 1000; i++)
    {
        std::cout << i[very_nice_array] << std::endl; // for you!
    }



}

// [1, 2, 3,4,5,6]
// 2, 