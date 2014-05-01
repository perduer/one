//configuration file for class MEList.

#ifndef MELIST_H
#define MELIST_H
#include <iostream>
using namespace std;

class MEList
{
	public:
		MEList();
		virtual ~MEList();
		int size() const;
		void append(int value);
		void setAt(int index, int value);
		void remove(int value);
		void removeAt(int index);
		int get(int index) const;
		int findMajorityElement();
		int operator[](int index) const;
		int* m_list;
		int m_count;
	private:
		int m_size;
		bool boundsCheck(int index) const;
};

ostream & operator<<(ostream & os, const MEList & l);

#endif
