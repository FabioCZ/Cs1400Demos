#include <iostream>
//
//void canyon(int n){
//    for (auto i = 1; i <= n; ++i)
//    {
//        for (auto j = 0; j < i; ++j)
//        {
//            std::cout << "*";
//        }
//        for (auto j = 0; j < (2 * n + 1) - (2 * i); ++j)
//        {
//            std::cout << " ";
//        }
//        for (auto j = 0; j < i; ++j)
//        {
//            std::cout << "*";
//        }
//        std::cout << std::endl;
//    }
//
//    for (auto i = 0; i < 2*n + 1; ++i)
//    {
//        std::cout << "*";
//    }
//    std::cout << std::endl;
//}
//
////make no changes below this line
//
//int main(){
//    canyon(6);
//    std::cout << "===\n";
//    canyon(4);
//    std::cin.get();
//    return 0;
//}


////TODO: write your code below this line
//int dejaVu(int x){
//    static int name = 42;
//    int notStatic = name;
//    name = x;
//    return notStatic;
//}
//
////make no changes below this line
//
//int main(){
//    std::cout << dejaVu(17) << std::endl;
//    std::cout << dejaVu(21) << std::endl;
//    std::cout << dejaVu(5) << std::endl;
//
//    return 0;
//}

//int sum(int n){
//    int s = 0;
//    for (auto i = 1; i <= n; ++i)
//    {
//        s += i;
//    }
//    return s;
//}

int sum(int n)
{
    if (n == 0) return 0;
    return n + sum(n - 1);
}

//make no changes below this line

int main(){
    int i;
    for (int i = 0; i<5; ++i)std::cout << sum(i) << " ";
    std::cout << std::endl;

    return 0;
}