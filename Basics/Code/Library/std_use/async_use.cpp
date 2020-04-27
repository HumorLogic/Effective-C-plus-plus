// async.cpp

#include <future>
#include <iostream>
#include <string>

std::string helloFunction(const std::string& s) {
    return "Hello C++11 from " + s + ".";
}

class HelloFunctionObject {
public:
    std::string operator()(const std::string& s) const {
        return "Hello C++11 from " + s + ".";
    }
};

int main() {

    std::cout << std::endl;

    // ��������future
    auto futureFunction = std::async(helloFunction, "function");

    // �����������future
    HelloFunctionObject helloFunctionObject;
    auto futureFunctionObject = std::async(helloFunctionObject, "function object");

    // ������������future
    auto futureLambda = std::async([](const std::string& s) {return "Hello C++11 from " + s + "."; }, "lambda function");

    std::cout << futureFunction.get() << "\n"
        << futureFunctionObject.get() << "\n"
        << futureLambda.get() << std::endl;

    std::cout << std::endl;

}