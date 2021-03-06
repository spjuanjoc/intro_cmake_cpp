#include <functional>
#include <iostream>
#include <map>

int main()
{
    [out = std::ref(std::cout << "Hello ")]() { out.get() << "World\n"; }();

    std::map<std::uint32_t, std::string_view> m{{1, "one"}, {2, "two"}, {3, "three"}};

    //Structured binding
    for (const auto& [key, value] : m)
    {
        std::cout << "Key: " << key << " Value: " << value << "\n";
    }
}
