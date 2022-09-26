#include <iostream>
#include <string>

int main()
{
    std::string s = "scott tiger";
    std::string delim = " ";

    auto start = 0;
    auto end = s.find(delim);
	std::cout <<end << std::endl;
    while (end != std::string::npos)
    {
        std::cout <<  s.substr(start, end - start) << std::endl;
        start = end + delim.length();
        end = s.find(delim, start);
    }

    std::cout << s.substr(start, end);
}