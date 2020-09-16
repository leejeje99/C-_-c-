// HelloWorld.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//#include <iostream>

//int main(void)
//{
//    int num = 20; 
//    std::cout << "Hello World!" << std::endl;
//    std::cout << "Hello " << "World!" << std::endl;
//    std::cout << num << ' ' << 'A';
//    std::cout << ' ' << 3.14 << std::endl;
//    return 0; 
//}
//simpleAdder.cpp
//int main(void)
//{
//	int val1;
//	std::cout << "첫번째 숫자 입력 : ";
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "두번째 숫자 입력 : ";
//	std::cin >> val2;
//
//	int result = val1 + val2;
//	std::cout << "덧셈결과 : " << result << std::endl;
//	return 0;
//}
//BetweenAdder
//int main(void)
//{
//	int val1, val2;
//	int result = 0;
//	std::cout << "2개의 숫자입력: ";
//	std::cin >> val1 >> val2;
//	if (val1 < val2)
//	{
//		for (int i = val1 + 1; i < val2; i++)
//			result += i;
//	}
//	else
//	{
//		for (int i = val2 + 1; i < val1; i++)
//			result += i;
//	}
//
//	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
//	return 0;
//}

//StringIo
//int main(void)
//{
//	char name[100];
//	char lang[200];
//
//	std::cout << "이름은 무엇입니까?";
//	std::cin >> name;
//
//	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요?";
//	std::cin >> lang;
//
//	std::cout << "내이름은 " << name << "입니다. \n";
//	std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;
//	return 0;
//
//}

//p.22
//문제1
//int main(void)
//{	
//	int input;
//	int num = 0;
//
//	for(int i = 0; i < 5; i++)
//	{
//		std::cout << i+1 << "번째 정수 입력: ";
//		std::cin >> input;
//		num += input;
//	}
//
//	std::cout << "합계:" << num << std::endl;
//	return 0;
//}


//문제2
//int main(void)
//{
//	char name[100];
//	char num[100];
//
//	std::cout << "전화번호를 입력해주세요 : ";
//	std::cin >> name;
//
//	std::cout << "이름을 입력해주세요 : ";
//	std::cin >> num;
//
//	std::cout << "정보 : " << num"\n" << name; 
//
//	return 0 
//}

//문제3 
//int main(void)
//{	
//	int num;
//	std::cout << "숫자를 하나 입력해주세요 : ";
//	std::cin >> num;
//
//	for (int i = 1; i < 10; i++)
//	{
//		int result = i * 5;
//		std::cout << "5 x " << i << "=" << result << std::endl;
//
//	}
//
//}
//
//문제 4

//int Salary(int sales)
//{
//	return (int)(50 + sales * 0.12);
//}
//
//
//int main(void)
//{
//	int sales;
//
//	while (1) //항상 참 
//	{
//		std::cout << "판매 금액을 만원 단위로 입력(-1 누르면 끝) : ";
//		std::cin >> sales;
//		if (sales == -1)
//			break;
//
//		std::cout << "이번 달 급여: ";
//		std::cout << Salary(sales) << "만원" << std::endl;
//	}
//	std::cout << "프로그램을 종료합니다" << std::endl;
//
//	return 0; //탈출코드, 에러없이 끝났다. 
//}


//P.25 오버로딩 
//
//void MyFunc(void) //void 는 타입 없음
//{
//	std::cout << "MyFunc(void) called" << std::endl;
//}
//
//void MyFunc(char c)
//{
//	std::cout << "MyFunc(char c) is called" << std::endl;
//}
//
//void MyFunc(int a, int b)
//{
//	std::cout << "MyFunc(int a, int b) called" << std::endl;
//}
//
//int main(void)
//{
//	MyFunc();
//	MyFunc('A');
//	MyFunc(12, 13);
//	return 0;
//}

//P.26 //역참조와 포인터 개념 
//
//void swap(int* ptr1, int* ptr2)
//{
//	int temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//void swap(char* ptr1, char* ptr2)
//{
//	char temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//void swap(double* ptr1, double* ptr2)
//{
//	double temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}


//P.27 

//int Adder(int num1 = 1, int num2 = 2)
//{
//	return num1 + num2;
//}
//
//int main(void)
//{
//	std::cout << Adder() << std::endl;
//	std::cout << Adder(5) << std::endl;
//	std::cout << Adder(3, 5) << std::endl;
//	return 0; 
//}


//P.34  인라인 함수 
//
//inline int SQUARE(int x)
//{
//	return x * x;
//}
//
//int main(void)
//{
//	std::cout << SQUARE(5) << std::endl;
//	std::cout << SQUARE(12) << std::endl;
//	return 0;
//}
//
//P.38 //XX호 사는 철수야!





// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

//#include <iostream>	
//
//namespace BestComImpl
//{
//	void SimpleFunc(void)
//	{
//		std::cout << "BestCom이 정의한 함수" << std::endl;
//	}
//}
//
//namespace ProgComImpl
//{
//	void SimpleFunc(void)
//	{
//		std::cout <<"ProgComImpl이 정의함" << std::endl;"
//	}
//}
//
//
//int main(void)
//{
//	BestComImpl::SimpleFunc();
//	ProgComImpl::SimpleFunc();
//	return 0;
//}