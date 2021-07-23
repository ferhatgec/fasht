#include "include/fasht.hpp"
#include <iostream>
#include <random>

int main() noexcept {
    std::vector<std::string> keys = {
        "hello", "world",
        "good", "fegeya",
        "algorithm", "fast",
        "hash", "lol"
    };

    std::random_device device;
    std::mt19937 rng{ device() };
    std::uniform_int_distribution<int> from_to(1,keys.size() - 1);

    std::string key = keys[0] + " " + keys[from_to(rng)];

    std::cout << key + " -> " + fasht::h(key) << ' ' << fasht::hb(key) << '\n';
}