//#include <iostream>
//#include <stack>
//#include <string>
//#define T 10
//using namespace std;
//
//int priority_str(char c) {
//	switch (c)
//	{
//	case '(':
//		return 4;
//	case '+':
//		return 1;
//	case '*':
//		return 2;
//	case ')':
//		return 3;
//	}
//}
//
//int priority_st(char c) {
//	switch (c)
//	{
//	case '(':
//		return 0;
//	case '+':
//		return 1;
//	case '*':
//		return 2;
//	case ')':
//		return 3;
//	}
//}
//
//int main(int argc, char** argv)
//{
//	int test_case, g;
//
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		stack<char> s;
//		stack<int> calc;
//		string post, str;
//		cin >> g >> str;
//
//		for (int i = 0; i < g; i++) {
//			if ('0' <= str[i] && str[i] <= '9')
//				post += str[i];
//			else
//			{
//				if (s.empty())
//				{
//					s.push(str[i]);
//					continue;
//				}
//				if (priority_st(s.top()) >= priority_str(str[i]))
//				{
//					post += s.top();
//					s.pop();
//					s.push(str[i]);
//				}
//				else
//				{
//					s.push(str[i]);
//				}
//				if (s.top() == ')')
//				{
//					s.pop();
//					while (s.top() != '(')
//					{
//						post += s.top();
//						s.pop();
//					}
//					s.pop();
//				}
//			}
//		}
//		while (!s.empty())
//		{
//			post += s.top();
//			s.pop();
//		}
//
//		int len = post.size(), a, b;
//		for (int i = 0; i < len; i++) {
//			if ('0' <= post[i] && post[i] <= '9')
//			{
//				calc.push((int)(post[i] - '0'));
//			}
//			else
//			{
//				a = calc.top();
//				calc.pop();
//				b = calc.top();
//				calc.pop();
//				if (post[i] == '+')
//					calc.push(a + b);
//				if (post[i] == '*')
//					calc.push(a * b);
//			}
//		}
//
//		cout << '#' << test_case << ' ' << calc.top() << '\n';
//	}
//
//	return 0;
//}