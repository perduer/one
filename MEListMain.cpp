#include"MEList.h"
#include<iostream>

using namespace std;

int main()
{
	MEList list1;
	
	try
	{
		list1.setAt(0, 21);
		cout << "The size of list 1 is: " << list1.size() << endl;
		cout << "The contents of list 1 are: " << list1;
		cout << "The majority element is: " << list1.findMajorityElement() << endl;
	}
	catch(string s1)
	{
		cout << s1 << endl;
	}
	try
	{
		list1.append(21);
		cout << "The size of list 1 is: " << list1.size() << endl;
		cout << "The contents of list 1 at index 0: " << list1.get(0) << endl;
		cout << "The contents of list 1 at index 1: " << list1.get(1) << endl;
		cout << "The contents of list 1 are: " << list1;
		cout << "The majority element is: " << list1.findMajorityElement() << endl;
	}
	catch(string s2)
	{
		cout << s2 << endl;
	}
	try
	{
		list1.append(21);
		cout << "The size of list 1 is: " << list1.size() << endl;
		cout << "The contents of list 1 at index 0: " << list1.get(0) << endl;
		cout << "The contents of list 1 at index 1: " << list1.get(1) << endl;
		cout << "The contents of list 1 at index 2: " << list1.get(2) << endl;
		cout << "The contents of list 1 are: " << list1;
		cout << "The majority element is: " << list1.findMajorityElement() << endl;
	}
	catch(string s3)
	{
		cout << s3 << endl;
	}
	try
	{
		list1.append(5);
		cout << "The size of list 1 is: " << list1.size() << endl;
		cout << "The contents of list 1 at index 0: " << list1.get(0) << endl;
		cout << "The contents of list 1 at index 1: " << list1.get(1) << endl;
		cout << "The contents of list 1 at index 2: " << list1.get(2) << endl;
		cout << "The contents of list 1 at index 3: " << list1.get(3) << endl;
		cout << "The contents of list 1 are: " << list1;
		cout << "The majority element is: " << list1.findMajorityElement() << endl;
	}
	catch(string s4)
	{
		cout << s4 << endl;
	}
	try
	{
		list1.append(7);
		cout << "The size of list 1 is: " << list1.size() << endl;
		cout << "The contents of list 1 at index 0: " << list1.get(0) << endl;
		cout << "The contents of list 1 at index 1: " << list1.get(1) << endl;
		cout << "The contents of list 1 at index 2: " << list1.get(2) << endl;
		cout << "The contents of list 1 at index 3: " << list1.get(3) << endl;
		cout << "The contents of list 1 at index 4: " << list1.get(4) << endl;
		cout << "The contents of list 1 are: " << list1;
		cout << "The majority element is: " << list1.findMajorityElement() << endl;
	}
	catch(string s5)
	{
		cout << s5 << endl;
	}
	try
	{
		list1.remove(7);
		cout << "The size of list 1 is: " << list1.size() << endl;
		cout << "The contents of list 1 at index 0: " << list1.get(0) << endl;
		cout << "The contents of list 1 at index 1: " << list1.get(1) << endl;
		cout << "The contents of list 1 at index 2: " << list1.get(2) << endl;
		cout << "The contents of list 1 at index 3: " << list1.get(3) << endl;
		cout << "The contents of list 1 are: " << list1;
		cout << "The majority element is: " << list1.findMajorityElement() << endl;
	}
	catch(string s6)
	{
		cout << s6 << endl;
	}
	try
	{
		list1.removeAt(3);
		cout << "The size of list 1 is: " << list1.size() << endl;
		cout << "The contents of list 1 at index 0: " << list1.get(0) << endl;
		cout << "The contents of list 1 at index 1: " << list1.get(1) << endl;
		cout << "The contents of list 1 at index 2: " << list1.get(2) << endl;
		cout << "The contents of list 1 are: " << list1;
		cout << "The majority element is: " << list1.findMajorityElement() << endl;
	}
	catch(string s7)
	{
		cout << s7 << endl;
	}
}
