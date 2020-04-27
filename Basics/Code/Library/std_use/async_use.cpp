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

// 把main_*() 改为main()再运行
int main_async() {

    std::cout << std::endl;

    // 带函数的future
    auto futureFunction = std::async(helloFunction, "function");

    // 带函数对象的future
    HelloFunctionObject helloFunctionObject;
    auto futureFunctionObject = std::async(helloFunctionObject, "function object");

    // 带匿名函数的future
    auto futureLambda = std::async([](const std::string& s) {return "Hello C++11 from " + s + "."; }, "lambda function");

    std::cout << futureFunction.get() << "\n"
        << futureFunctionObject.get() << "\n"
        << futureLambda.get() << std::endl;

    std::cout << std::endl;
    return 0;

}