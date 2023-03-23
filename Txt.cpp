#include"Txt.h"

#include<algorithm>
#include<iostream>
#include<iterator>

namespace l1
{

Txt::~Txt()
{
    delete[] text;
}

Txt::Txt(const std::string& file_name)
{
    std::ifstream file_stream(file_name);

    if (!file_stream.is_open())
    {
        std::cerr << "Error opening " << file_name << " file";
    }

    sz = std::count(std::istreambuf_iterator<char>(file_stream), std::istreambuf_iterator<char>(), '\n');

    file_stream.seekg(0);

    if (sz == 0)
    {
        text = nullptr;
        return;
    }

    text = new std::string[sz];

    for (size_t i = 0; i < sz; ++i)
    {
        std::getline(file_stream, text[i]);
    }

    file_stream.close();
}

Txt::Txt(const Txt& other)
{
    this->sz = other.sz;
    if (other.text == nullptr)
    {
        this->text = nullptr;
        return;
    }

    this->text = new std::string[sz];
    std::copy(other.text, other.text + sz, this->text);
}

Txt& Txt::operator=(const Txt& other)
{
    if (this == &other)
        return *this;

    delete[] this->text;

    this->sz = other.sz;
    if (other.text == nullptr)
    {
        this->text = nullptr;
        return *this;
    }

    this->text = new std::string[sz];
    std::copy(other.text, other.text + sz, this->text);

    return *this;
}

Txt::Txt(Txt&& other) : text(other.text), sz(other.sz)
{
    other.text = nullptr;
}

Txt& Txt::operator=(Txt&& other)
{
    delete[] this->text;

    this->sz = other.sz;

    this->text = other.text;
    other.text = nullptr;

    return *this;
}

size_t Txt::size() const
{
    return sz;
}

}