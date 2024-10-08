#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    // 输入 n
    scanf("%d", &n);

    // 计算前 n 项和
    for (i = 1; i <= n; i++) {
        double term = 1.0 / (3 * i - 2); // 计算第 i 项
        if (i % 2 == 1) {
            sum += term; // 奇数项加
        } else {
            sum -= term; // 偶数项减
        }
    }

    // 输出结果，保留五位小数
    printf("%.5f\n", sum);
    
    return 0;
}

