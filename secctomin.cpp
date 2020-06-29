#include <iostream>

std::string minsecformat(int seconds)
{
    int min, sec, hour;
    min = seconds / 60;

    hour = min / 60;
    min = min % 60;
    sec = seconds % 60;
    std::string shour, smin, ssec;
    if (hour < 10)
    {
        shour = "0" + std::to_string(hour);
    }
    else
    {
        shour = std::to_string(hour);
    }
    if (min < 10)
    {
        smin = "0" + std::to_string(min);
    }
    else
    {
        smin = std::to_string(min);
    }
    if (sec < 10)
    {
        ssec = "0" + std::to_string(sec);
    }
    else
    {
        ssec = std::to_string(sec);
    }
    
    return shour + ":" + smin + ":" + ssec;

}

int main ()
{
    int seconds = 1;
    try
    {

        if (seconds > 0)
        std::cout << "Please enter time in seconds and I will change its format to min:sec (Enter a negative number  or zero to quit ";
        std::cin >> seconds;
        std::cout << minsecformat(seconds) << std::endl;
    }
    catch(...)
    {
        std::cout << "Something went wrong, please try again!\n";
    }
    return 0;
}