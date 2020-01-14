/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skybt <skybt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 22:14:32 by skybt             #+#    #+#             */
/*   Updated: 2020/01/05 23:06:24 by skybt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <string>

template <typename T>
class Array
{
    private:
        T *_array;
        unsigned int _len;

    public:
        Array();
        ~Array();
        Array(unsigned int n);
        Array(const Array<T> &c);
        const Array<T> &operator=(const Array<T> &c);

        class OutOfBoundException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };

        T &operator[](unsigned int i);
        T const &operator[](unsigned int i) const;
        unsigned int size() const;
};

template <typename T>
Array<T>::Array():
    _array(NULL), _len(0)
{
}

template <typename T>
Array<T>::~Array()
{
    delete[] _array;
}

template <typename T>
Array<T>::Array(unsigned int n):
    _array(new T[n]()), _len(n)
{
}

template <typename T>
Array<T>::Array(const Array &c):
    _array(new T[c._len]), _len(c._len)
{
    if (c._len)
        for (unsigned int i = 0; i < c._len; i++)
            _array[i] = c._array[i];
}

template <typename T>
const Array<T> &Array<T>::operator=(const Array<T> &c)
{
    _array = new T[c._len];
    if (c._len)
        for (unsigned int i = 0; i < c._len; i++)
            _array[i] = c._array[i];
    _len = c._len;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= _len)
        throw OutOfBoundException();
    return _array[i];
}

template <typename T>
T const &Array<T>::operator[](unsigned int i) const
{
    if (i >= _len)
        throw OutOfBoundException();
    return _array[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _len;
}

#endif
