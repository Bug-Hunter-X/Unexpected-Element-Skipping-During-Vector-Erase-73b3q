# Unexpected Element Skipping During Vector Erase in C++

This repository demonstrates a common, yet subtle, bug in C++ when removing elements from a `std::vector` during iteration using the `erase` method. The bug arises from the index shifting that occurs after each element removal which results in skipped elements and incorrect results. The solution shows how to correctly remove elements without causing index issues.