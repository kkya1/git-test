#include <iostream>

// 函数声明
int addNumbers(int a, int b);

int main() {
    int num1, num2, sum;

    // 获取用户输入
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // 调用函数计算和
    sum = addNumbers(num1, num2);

    // 输出结果
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;

    // 修改后的除法操作，避免除以零错误
    int a = 10, b = 2;  // 将 b 设置为非零值
    std::cout << "Dividing 10 by 2: ";
    std::cout << a / b << std::endl;  // 正确的除法操作

    // 引入数组越界访问错误
    int arr[3] = {1, 2, 3};
    std::cout << "Array out of bounds: " << arr[5] << std::endl;  // 错误：数组越界访问

    return 0;
}

// 函数定义
int addNumbers(int a, int b) {
    return a + b;
}
