#pragma once

#include <string>

template <typename T>
class Vector {
public:
	Vector();
	~Vector();
	T get(int index);
	size_t m_size();
	void push_back(T item);
	void pop_back();
	void reSize(int new_size);
	int m_capacity();
	T & operator[](int index);
	const Vector<T> & operator =(Vector<T> &right);
private:
	int capacity;
	size_t _size;
	T* object;
	T* new_data;
};

template <typename T>
Vector<T>::Vector()
{
	capacity = 8;
	_size = 0;
	object = new T[capacity];
}

template <typename T>
Vector<T>::~Vector()
{
	delete[] object;
}

template <typename T>
T Vector<T>::get(int index)
{
	return  object[index];
}

template <typename T>
size_t Vector<T>::m_size()
{
	return _size;
}

template <typename T>
int Vector<T>::m_capacity()
{
	return capacity;
}


template <typename T>
void Vector<T>::push_back(T item)
{
	if (_size == capacity)
	{
		reSize(capacity * 2);
	}
	object[_size] = item;
	++_size;
}

template <typename T>
void Vector<T>::pop_back()
{
	_size--;
}

template <typename T>
void Vector<T>::reSize(int new_size){
	new_data = new T[new_size];

	for (int i = 0; i <= capacity; i++)
	{
		new_data[i] = object[i];
	}
	capacity = new_size;
	delete[] object;
	object = new T[capacity];
	object = new_data;
}

template <typename T>
T & Vector<T>::operator[](int index)
{
	return object[index];
}
//
//template <typename T>
//const Vector<T> & Vector<T>::operator =(Vector<T> &right)
//{
//	if (this != &right)
//	{
//		_size = right.m_size();
//		capacity = right.m_capacity();
//		 Vector = new T[capacity];
//		for (int k = 0; k < m_size(); k++)
//			Vector[k] = right.data[k];
//	}
//	return *this;
//}
