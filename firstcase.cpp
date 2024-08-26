#include <iostream>

// 函数声明
int addNumbers(int a, int b);
int next_index(int i);

// 计算数组的大小
const int MAX_QUEUE_SIZE = 3;  // 定义一个常量，表示数组的最大大小

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

    // 示例：使用 next_index 函数
    int index = 2;  // 一个示例索引
    int next = next_index(index);  // 计算下一个索引
    std::cout << "Next index of " << index << " is " << next << std::endl;  // 显示结果

    return 0;
}

// 函数定义
int addNumbers(int a, int b) {
    return a + b;
}

// next_index 函数定义
int next_index(int i) {
    // 错误1: 当 i 为 MAX_QUEUE_SIZE - 1 时, next_index() 返回值为 MAX_QUEUE_SIZE, 超出有效范围
    return (i + 1); // 错误: 可能导致超出数组范围
}

