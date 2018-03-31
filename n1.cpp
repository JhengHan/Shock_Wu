// n1.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
int n_factorial(int n) {
	int temp = 1, x = 1;
	for (x = 1; x <= n; x++) {
		temp *= x;
	}
	return temp;
}
int n_match(int m, int n){
	int tmp = 0;
	tmp = (n_factorial(m) / (n_factorial(m - n)*n_factorial(n)));
	return tmp;
}
int main()
{
	double n1,t1, m, n2,t2;
	printf("n!=n*(n-1)!   請輸入n的值\n");
	scanf("%lf", &n1);
	t1 = n_factorial(n1);
	printf("%.0lf\n",t1);

	printf("組合數之整數函數 : 參數為整數m,n\n");
	printf("函數回傳值為 m!/((m-n)!n!)    請輸入m,n的值");
	scanf("%lf  %lf",&m ,&n2);
	t2 = n_match(m,n2);
	printf("%.0lf\n", t2);
	system("pause");
    return 0;
}

