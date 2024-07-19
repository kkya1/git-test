#include <iostream>

// 函数声明
int addNumbers(int a, int b);

int main() {
    int  c,num1, num2, sum;

    // 获取用户输入
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // 调用函数计算和
    sum = addNumbers(num1, num2);
    

    // 输出结果
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;
     int a = 10, b = 0;
    std::cout << "Dividing by zero: ";
    std::cout << a / b << std::endl;  // 错误2：除以零

     int arr[3] = {1, 2, 3};
    std::cout << "Array out of bounds: " << arr[5] << std::endl;


    return 0;
}

// 函数定义
int addNumbers(int a, int b) {
    
    return a + b;
}