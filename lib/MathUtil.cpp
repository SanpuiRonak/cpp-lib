#include "../public/MathUtil.hpp"

std::vector<long> getPrimesInRange(long range_start, long range_end) {

    std::vector<bool> isPrime(range_end + 1, true);

    for (long i = 2; i * i <= range_end; i++) {
        if (isPrime[i]) {
            for (long j = i * i; j <= range_end; j *= i) isPrime[j] = false;
        }
    }

    std::vector<long> prime_arr;

    for (long i = range_start; i <= range_end; i++) {
        if (isPrime[i]) prime_arr.push_back(i);
    }

    return prime_arr;
}
