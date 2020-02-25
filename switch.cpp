#include <iostream>
#include <string>

int main()
{
    // enum season
    // {
    //     summer,
    //     spring,
    //     winter,
    //     fall
    // };
    // season now = winter;
    // switch (now)
    // {
    //     case summer:
    //         break;
    //     case winter:
    //         std::cout << "Stay warm";
    //     case spring:
    //         break;
    //     case fall:
    //         break;
    //     default:
    //         break;
    // }

    enum class Season
    {
        summer,
        spring,
        winter,
        fall
    };
    Season now = Season::winter;
    switch (now)
    {
        case Season::summer:
            break;
        case Season::winter:
            std::cout << "Stay warm";
        case Season::spring:
            break;
        case Season::fall:
            break;
        default:
            break;
    }


}