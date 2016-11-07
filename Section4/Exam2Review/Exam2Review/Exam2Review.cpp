#include <iostream>
//
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
//    for (auto i = 0; i < 2 * n + 1; ++i)
//    {
//        std::cout << "*";
//    }
//    std::cout << std::endl;
//
//}
//
////make no changes below this line
//
//int main(){
//    canyon(6);
//    std::cout << "===" << std::endl;
//    canyon(4);
//
//    return 0;
//}

int dejaVu(int x){
    static int memorizeThis = 42;
    int temp = memorizeThis;
    memorizeThis = x;
    return temp;
}

//make no changes below this line

int main(){
    std::cout << dejaVu(17) << std::endl;
    std::cout << dejaVu(21) << std::endl;
    std::cout << dejaVu(5) << std::endl;

    return 0;
}