#include <iostream>
#include "json\include\nlohmann\json.hpp"



int main()
{
    nlohmann::json j;
    j["pi"] = 3.141;
    j["name"] = "John";
    j["age"] = 25;
    j["is_student"] = true;
    j["hobbies"] = { "reading", "swimming", "biking" };

    // serialize the JSON object
    std::string s = j.dump();

    // print the serialized JSON object
    std::cout << s << std::endl;

    return 0;
}
