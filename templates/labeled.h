/**
 * @file labeled.h
 * @author your name (you@domain.com)
 * @brief A class template to store a labeled value
 * @version 0.1
 * @date 2025-04-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef LABELED_H
#define LABELED_H
#include <string>
#include <iostream>

template <typename T>
class Labeled
{
public:
    /**
     * @brief Construct a new Labeled object
     * 
     * @param label 
     */
    Labeled(const std::string &label) 
    {
        this->label = label;
    }

    /**
     * @brief Construct a new Labeled object
     * 
     * @param label 
     * @param value 
     */
    Labeled(const std::string &label, const T &value) : Labeled(label)
    {
        this->value = value;
    }

    /**
     * @brief Assign a value as though this were a variable of type T
     * 
     * @param value 
     * @return Labeled& 
     */
    Labeled &operator=(const T&value) 
    {
        this->value = value;
        return *this;
    }

    /**
     * @brief Overloaded typecast operator
     * 
     * @return T 
     */
    operator T&() 
    {
        return this->value;
    }

    /**
     * @brief Get the label
     * 
     */
    std::string getLabel() const
    {
        return label;
    }

    /**
     * @brief Get the value
     * 
     */
    T getValue() const
    {
        return value;
    }
private:
    std::string label;
    T value;
};

template<typename T>
std::ostream& operator<<(std::ostream &os, const Labeled<T> &labeled)
{
    os << labeled.getLabel() << ": " << labeled.getValue();
    return os;
}
#endif