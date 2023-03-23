#pragma once

#include<fstream>
#include<string>

namespace l1
{

class Txt
{
private:
    std::string* text{};
    size_t sz{};

public:
    Txt() = default;
    ~Txt();

    Txt(const std::string& file_name);

    Txt(const Txt& other);

    Txt& operator=(const Txt& other);

    Txt(Txt&& other);

    Txt& operator=(Txt&& other);

    size_t size() const;
};

}


