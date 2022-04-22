#include <iostream>
#include <type_traits>

template<typename T, std::enable_if_t<std::is_integral<T>::value, T> a, std::enable_if_t<std::is_integral<T>::value, T> b>
struct HCF{
public:
    static const T value=HCF<T, (a>b? b: a), (a>b? a%b: b%a)>::value;
};
template<typename T, std::enable_if_t<std::is_integral<T>::value, T> a>
struct HCF<T, a, 0>{
public:
    static const T value=a;
};
int main(){
    std::wcout<<HCF<int, 12, 64>::value<<std::endl;//12 64 Output: 4
    std::wcout<<HCF<long long , 64, 12>::value<<std::endl;
}
