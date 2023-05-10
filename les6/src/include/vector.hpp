///@file
#pragma once
#include <iostream>

/// \brief 
/// 2D integer vector ADT
/// \details
/// This is a 2D vector ADT that stores its two components as signed integers.
/// More text...
class Vector {

public:
    int x;
    int y;

    /// \brief 
    /// default constructor
    /// \details
    /// More details
    
    Vector();
    Vector(int x, int y);

    Vector operator-() const;
    Vector operator-(const Vector& rhs) const; // w - v past w niet aan (ook v niet)
    Vector operator+(const Vector& rhs) const;

    Vector& operator-=(const Vector& rhs); // w+=v past w wel aan, daarom returnt ie een reference, niet een nieuw object

    friend std::ostream& operator<<(std::ostream& os, Vector& vector);
};