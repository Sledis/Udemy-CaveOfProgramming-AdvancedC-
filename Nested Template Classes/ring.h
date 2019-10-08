#pragma once
#include<iostream>
using namespace std;


template<class T>
class ring
{public:
	class iterator;


	ring(int size) :m_pos(0),m_size(size) {
		m_values = new T[size];
	}
	~ring() {
		delete[] m_values;
	}

	int size() {
		return m_size;
	}

	iterator begin() {
		return iterator(0,*this);
	}

	iterator end() {
		return iterator(m_size,*this);
	}

	void add(T value) {
		m_values[m_pos] = value;
		m_pos++;

		if (m_pos == m_size) {
			m_pos = 0;
		}
	}

	T& get(int pos) {
		return m_values[pos];
	}

private:
	T* m_values;
	int m_size;
	int m_pos;
};


template<class T>
class ring<T>::iterator {
public:
	iterator(int pos, ring& aRing):m_pos(pos), m_ring(aRing){

	}

	iterator& operator++(int a) {
		m_pos++;
		return *this;
	}

	iterator& operator++() {
		m_pos++;
		return *this;
	}

	T& operator*() {
		return m_ring.get(m_pos);
	}

	bool operator!=(const iterator& other) const {
		return m_pos != other.m_pos;
	}

	bool operator<(const iterator& other) const {
		return m_pos < other.m_pos;
	}

private:
	int m_pos;
	ring &m_ring;
};

