#include <iostream>
#include <map>

using namespace std;

class Interval {
public:
    enum class size {
        unison = 0,
        minor_second = 1,
        major_second = 2,
        minor_third = 3,
        major_third = 4,
        perfect_fourth = 5,
        augmented_fourth = 6,
        perfect_fifth = 7,
        minor_sixth = 8,
        major_sixth = 9,
        minor_seventh = 10,
        major_seventh = 11,
        octave = 12,
        minor_ninth = 13,
        major_ninth = 14,
        minor_tenth = 15,
        major_tenth = 16
    };
};

class Create {
private:


public:

    void run() {}
};

int main()
{
    Create c;
    c.run();
    return 0;
}
