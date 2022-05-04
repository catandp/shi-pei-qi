//stack��ջ��������������ȳ�
/*#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
	vector<int>m = { 1,2,3 };
	stack<int, vector<int>>s(m);
	s.push(4);//����4
	s.emplace(5);//����5
	s.pop();
	while (!s.empty())//ջ�ڲ�Ϊ�տ���һֱѭ��
	{
		cout << s.top() << endl;
		s.pop();//��Ԫ��һ�ε�����ֱ��Ϊ�յ�ʱ�򣬲�Ȼ��һֱ���
	}
	return 0;
}******************************************/
//queue���У��Ƚ��ȳ�
/*#include<iostream>
#include<list>
#include<queue>
using namespace std;
int main()
{
	list<int>l = { 1,2,3 };
	queue<int, list<int>>s(l);
	s.push(4);
	s.emplace(5);
	s.pop();//���Ƚ���Ԫ�ر�������
	cout << s.front() << endl;
	cout << s.back() << endl;
	while (!s.empty())
	{
		cout << s.front() << endl;//�������2��3��4��5
		s.pop();//ÿ���һ�����ͽ�����������
	}
	return 0;
}*/
#include<iostream>
#include<queue>
using namespace std;
class Comp
{
public:
	bool operator ()(int x, int y) { return x > y; }
};
template<class T>
void print(T& q)
{
	while (!q.empty())
	{
		cout << q.top() << endl;
		q.pop();
	}
}
int main()
{
	priority_queue<int>q;
	for (int n : {1, 2, 6, 3, 8, 5, 9, 7})
	
		q.push(n);
		print(q);
	
	priority_queue<int, vector<int>, greater<int>>q1;
	for (int n : {1, 5, 3, 2, 5, 7, 9, 5, 8, 0})
	
		q1.push(n);
		print(q1);
	
	priority_queue<int, vector<int>, Comp>q2;
	for (int n : {1, 4, 5, 9, 2, 7, 6, 3, 9, 0})
	
		q2.push(n);
		print(q2);
	
	return 0;
}