#include "file1.h"
#include "fileA.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	cout << fooZ("Test");
	system("pause");
	return;
}

string fooZ(string addQMark)
{
	size_t pos = 0;
	string bar = addQMark;
	for (int i = 0; i < bar.size(); i=i+2)
	{
		bar.insert(i + 1, "?");
		cout << bar << "\n";
	}
	return bar;
}
