#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 시간초과뜸 ㅅㅂ
//int Fivo(int n)
//{
//    if (n == 0)
//    {
//        return 0;
//    }
//    else if (n == 1)
//    {
//        return 1;
//    }
//    else 
//    {
//        return (Fivo(n - 1) + Fivo(n - 2)) % 1234567;
//    }
//}
//
//int solution(int n) {
//    int answer = 0;
//
//    answer = Fivo(n);
//
//    return answer;
//}

// 재귀함수 안되서 반복문사용
int solution(int n) {
    int answer = 0;

    int Fivo[100000];

    Fivo[0] = 0;
    Fivo[1] = 1;

    // 순차적으로 배열에 숫자를 하나씩 집어넣음
    for (int i = 2; i <= n; i++)
    {
        Fivo[i] = (Fivo[i - 1] + Fivo[i - 2]) % 1234567;
    }

    answer = Fivo[n];

    return answer;
}


int main()
{
    std::cout << "Hello World!\n";
}