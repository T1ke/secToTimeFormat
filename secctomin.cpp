#include <iostream>
#include <cctype>

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
    std::string second;
    bool go = true;
        while (go)
        {
            try
            {
            std::cout << "Please enter time in seconds and I will change its format to min:sec (Enter a 0 (zero) to quit): ";
            std::cin >> second;

            int seconds = std::stoi(second); // need to convert from string to int, doesnt work with straight int
            if (seconds > 0)
            {
                std::cout << minsecformat(seconds) << std::endl;
            } 
            else if (seconds < 0)
            {
                std::cout << "Impossible to convert time from negative numbers! Try again with a positive number.\n";
            }
            else if (seconds == 0)
            {
                go = false;
            }            
            else
            {
                std::cout << "Try again with different parameters!" << std::endl;  
            }

            }
            catch(const std::exception& e)
            {
                std::cerr << "\n" << e.what() << '\n';
                std::cout << "There was a problem, please try again!\n";    
            }
        }
    return 0;
}

