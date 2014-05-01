#include "MEList.h"
#include <string>
#include <iostream>

using namespace std;

MEList::MEList() : m_size(1), m_count(0), m_list(NULL)
{
	m_list = new int[m_size];
}
MEList::~MEList()
{
	cout << "freeing memory" << endl;
	delete [] m_list;
}
void MEList::setAt(int index, int value)
{
	if (boundsCheck(index) == false)
	{
		throw string("index out of bounds");
	}
	int s = size();
	int contents[s];
	int mValue = findMajorityElement();
	int valueAtIndex = get(index);
	
	if(value != mValue && valueAtIndex != mValue)
	{
		if((m_count - s/2) == 1)
		{
			throw string("Setting this value will eliminate the existance of a majority element.");
		}
		else
		{
			m_list[index] = value;
		}
	}
	if(value == valueAtIndex)
	{
		cout << "The value currently in index location " << index << " already equals " << value << endl;	
	}
	else
	{
		m_list[index] = value;
	}
}
void MEList::append(int value)
{
	int s = size();
	int contents[s];
	int mValue = findMajorityElement();
	
	if(s == 1 && value != mValue)
	{
		throw string("Must append the same value as contained in index zero to maintain existance of a majority element.");
	}
	if(value != mValue)
	{
		if((m_count - s/2) == 1)
		{
			throw string("Appending this value will eliminate the existance of a majority element.");
		}
		else
		{
			for(int i = 0; i < s; i++)
			{
				contents[i] = m_list[i];
			}
			delete [] m_list;
			m_list = new int[s + 1];
			m_size++;
			for(int i = 0; i < m_size; i++)
			{
				m_list[i] = contents[i];
			}
			m_list[s] = value;
		}
	}
	else
	{
			for(int i = 0; i < s; i++)
			{
				contents[i] = m_list[i];
			}
			delete [] m_list;
			m_list = new int[s + 1];
			m_size++;
			for(int i = 0; i < m_size; i++)
			{
				m_list[i] = contents[i];
			}
			m_list[s] = value;
	}
}
int MEList::get(int index) const
{
	if(boundsCheck(index) == false)
	{
		throw string("index out of bounds");
	}

	return m_list[index];
}
void MEList::remove(int value)
{
	int index(0);
	int s = size();
	int contents[s];
	int mValue = findMajorityElement();
	
	if(value == mValue)
	{
		if((m_count - s/2) <= 1)
		{
			throw string("Removing this value will eliminate the existance of a majority element.");
		}
		else
		{
			for(int i = 0; i < s; i++)//loops through & gets the index of value.
			{
				if(m_list[i] == value)
				{
					index = i;
				}
			}
			for(int i = 0; i < index; i++)//transfers contents up to location of value. 
			{
				contents[i] = m_list[i];
			}
			for(int i = index + 1; i < s; i++)//starts after location of value and transfers remaining contents.
			{
				contents[i - 1] = m_list[i];//transfered contents moved back one spot.
			}
			delete [] m_list;//deletes old list.
			m_list = new int[s - 1];//creates new list of new size.
			for(int i = 0; i < s - 1; i++)//transfers contents into new list.
			{
				m_list[i] = contents[i];
			}
			m_size--;
		}
	}
	else
	{
		for(int i = 0; i < s; i++)//loops through & gets the index of value.
			{
				if(m_list[i] == value)
				{
					index = i;
				}
			}
			for(int i = 0; i < index; i++)//transfers contents up to location of value. 
			{
				contents[i] = m_list[i];
			}
			for(int i = index + 1; i < s; i++)//starts after location of value and transfers remaining contents.
			{
				contents[i - 1] = m_list[i];//transfered contents moved back one spot.
			}
			delete [] m_list;//deletes old list.
			m_list = new int[s - 1];//creates new list of new size.
			for(int i = 0; i < s - 1; i++)//transfers contents into new list.
			{
				m_list[i] = contents[i];
			}
			m_size--;
	}
}
void MEList::removeAt(int index)
{
	int s = size();
	int contents[s];
	int mValue = findMajorityElement();
	int value = get(index);
	
	if(value == mValue)
	{
		if((m_count - s/2) <= 1)
		{
			throw string("Removing the value at this location will eliminate the existance of a majority element.");
		}
		else
		{
			for(int i = 0; i < index; i++)//transfers contents up to location of value. 
			{
				contents[i] = m_list[i];
			}
			for(int i = index + 1; i < s; i++)//starts after location of value and transfers remaining contents.
			{
				contents[i - 1] = m_list[i];//transfered contents moved back one spot.
			}
			delete [] m_list;//deletes old list.
			m_list = new int[s - 1];//creates new list of new size.
			for(int i = 0; i < s - 1; i++)//transfers contents into new list.
			{
				m_list[i] = contents[i];
			}
			m_size--;
		}
	}
	else
	{
			for(int i = 0; i < index; i++)//transfers contents up to location of value. 
			{
				contents[i] = m_list[i];
			}
			for(int i = index + 1; i < s; i++)//starts after location of value and transfers remaining contents.
			{
				contents[i - 1] = m_list[i];//transfered contents moved back one spot.
			}
			delete [] m_list;//deletes old list.
			m_list = new int[s - 1];//creates new list of new size.
			for(int i = 0; i < s - 1; i++)//transfers contents into new list.
			{
				m_list[i] = contents[i];
			}
			m_size--;
	}
}
int MEList::size() const
{
	return m_size;
}
int MEList::findMajorityElement()//count is passed by the calling function and is needed to determine how much
{                                               //of a majority the majority element has.
	int s = size();
	int temp(0);
	
	if(s > 1)
	{
		for(int i = 0; i < s; i++)
		{
			m_count = 0;
			for(int j = 0; j < s; j++)
			{
				if(m_list[i] == m_list[j])
				{
					m_count++;
					if(s == 2 && m_count == 2)
					{
						m_count = 0;
						temp = m_list[0];
						return temp;
					}
					if(s > 2 && s % 2 == 0 && m_count >= (s/2 + 1))
					{
						m_count = 0;
						temp = m_list[i];
						return temp;
					}
					if(s % 2 >= 1 && m_count >= (((s - (s % 2))/2) + 1))
					{
							m_count = 0;
							temp = m_list[i];
							return temp;
					}
				}
			}
		}
	}
	else
	{
		return m_list[0];
	}
}
bool MEList::boundsCheck(int index) const
{
	if (index < 0 || index >= m_size)
		return false;
	else
		return true;
}
int MEList::operator[](int index) const
{
	if(boundsCheck(index) == false)
	{
		throw string("index out of bounds");
	}
	return m_list[index];
}
ostream & operator<<(ostream & os, const MEList & l) 
{
	int s = l.size();
	
	for(int i = 0; i < s; i++)
   	    os << l.m_list[i] << endl;
   	    
     return os; 
}
