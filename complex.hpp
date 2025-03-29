#pragma once

#include <iostream>
#include <cmath>

/* Classe template per i numeri complessi */
template <typename T>
class complex_number {
public:
    T p_reale, p_imag;


    complex_number() : p_reale(0), p_imag(0) {}


    explicit complex_number(T r) : p_reale(r), p_imag(0) {}


    complex_number(T r, T i) : p_reale(r), p_imag(i) {}


    T real() const {
        return p_reale;
    }


    T imag() const {
        return p_imag;
    }


    complex_number<T> conjugate() const {
        return complex_number<T>(p_reale, -p_imag);
    }


    complex_number& operator+=(const complex_number& other) {
        p_reale += other.p_reale;
        p_imag += other.p_imag;
        return *this;
    }


    complex_number operator+(const complex_number& other) const {
        complex_number result = *this;
        result += other;
        return result;
    }


    complex_number& operator+=(const T& scalar) {
        p_reale += scalar;
        return *this;
    }


    complex_number operator+(const T& scalar) const {
        complex_number result = *this;
        result += scalar;
        return result;
    }


    complex_number& operator*=(const complex_number& other) {
        T new_reale = p_reale * other.p_reale - p_imag * other.p_imag;
        T new_imag = p_reale * other.p_imag + p_imag * other.p_reale;
        p_reale = new_reale;
        p_imag = new_imag;
        return *this;
    }


    complex_number operator*(const complex_number& other) const {
        complex_number result = *this;
        result *= other;
        return result;
    }


    complex_number& operator*=(const T& scalar) {
        p_reale *= scalar;
        p_imag *= scalar;
        return *this;
    }

  
    complex_number operator*(const T& scalar) const {
        complex_number result = *this;
        result *= scalar;
        return result;
    }


    complex_number operator-() const {
        return complex_number<T>(-p_reale, -p_imag);
    }


    bool operator<(const complex_number& other) const {
        return (p_reale < other.p_reale) || (p_reale == other.p_reale && p_imag < other.p_imag);
    }


    std::ostream& print(std::ostream& os) const {
           if (p_imag >= T(0))
               os << p_reale << "+" << p_imag << "i";
           else
               os << p_reale << p_imag << "i";
           return os;
    }
};


template<typename T>
complex_number<T> operator+(const T& scalar, const complex_number<T>& other) {
    return complex_number<T>(scalar + other.real(), other.imag());
}


template<typename T>
complex_number<T> operator*(const T& scalar, const complex_number<T>& other) {
    return complex_number<T>(scalar * other.real(), scalar * other.imag());
}


template<typename T>
T abs(const complex_number<T>& other) {
    return std::sqrt(other.real() * other.real() + other.imag() * other.imag());
}


template<typename T>
complex_number<T> conjugate(const complex_number<T>& other) {
    return other.conjugate();
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const complex_number<T>& other) {
    return other.print(os);
}
