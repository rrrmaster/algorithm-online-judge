#include <iostream>
void f(int c,int n)
{

	for (int i = 0; i < c; i++) std::cout << "____";
	std::cout << "\"재귀함수가 뭔가요?\"" << std::endl;
	if (c < n)
	{
		for (int i = 0; i < c; i++) std::cout << "____";
		std::cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어." << std::endl;
		for (int i = 0; i < c; i++) std::cout << "____";
		std::cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << std::endl;
		for (int i = 0; i < c; i++) std::cout << "____";
		std::cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" << std::endl;
		f(c + 1, n);
	}
	else
	{
		for (int i = 0; i < c; i++) std::cout << "____";
		std::cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << std::endl;
	}
	for (int i = 0; i < c; i++) std::cout << "____";
	std::cout << "라고 답변하였지." << std::endl;
}
void solved(int n)
{
	std::cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << std::endl;
	f(0, n);
}

int main()
{
	int n;
	std::cin >> n;
	solved(n);
}