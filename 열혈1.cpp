// HelloWorld.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
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
//	std::cout << "ù��° ���� �Է� : ";
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "�ι�° ���� �Է� : ";
//	std::cin >> val2;
//
//	int result = val1 + val2;
//	std::cout << "������� : " << result << std::endl;
//	return 0;
//}
//BetweenAdder
//int main(void)
//{
//	int val1, val2;
//	int result = 0;
//	std::cout << "2���� �����Է�: ";
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
//	std::cout << "�� �� ������ ���� ��: " << result << std::endl;
//	return 0;
//}

//StringIo
//int main(void)
//{
//	char name[100];
//	char lang[200];
//
//	std::cout << "�̸��� �����Դϱ�?";
//	std::cin >> name;
//
//	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���?";
//	std::cin >> lang;
//
//	std::cout << "���̸��� " << name << "�Դϴ�. \n";
//	std::cout << "���� �����ϴ� ���� " << lang << "�Դϴ�." << std::endl;
//	return 0;
//
//}

//p.22
//����1
//int main(void)
//{	
//	int input;
//	int num = 0;
//
//	for(int i = 0; i < 5; i++)
//	{
//		std::cout << i+1 << "��° ���� �Է�: ";
//		std::cin >> input;
//		num += input;
//	}
//
//	std::cout << "�հ�:" << num << std::endl;
//	return 0;
//}


//����2
//int main(void)
//{
//	char name[100];
//	char num[100];
//
//	std::cout << "��ȭ��ȣ�� �Է����ּ��� : ";
//	std::cin >> name;
//
//	std::cout << "�̸��� �Է����ּ��� : ";
//	std::cin >> num;
//
//	std::cout << "���� : " << num"\n" << name; 
//
//	return 0 
//}

//����3 
//int main(void)
//{	
//	int num;
//	std::cout << "���ڸ� �ϳ� �Է����ּ��� : ";
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
//���� 4

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
//	while (1) //�׻� �� 
//	{
//		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 ������ ��) : ";
//		std::cin >> sales;
//		if (sales == -1)
//			break;
//
//		std::cout << "�̹� �� �޿�: ";
//		std::cout << Salary(sales) << "����" << std::endl;
//	}
//	std::cout << "���α׷��� �����մϴ�" << std::endl;
//
//	return 0; //Ż���ڵ�, �������� ������. 
//}


//P.25 �����ε� 
//
//void MyFunc(void) //void �� Ÿ�� ����
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

//P.26 //�������� ������ ���� 
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


//P.34  �ζ��� �Լ� 
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
//P.38 //XXȣ ��� ö����!





// ���α׷� ����: <Ctrl+F5> �Ǵ� [�����] > [��������� �ʰ� ����] �޴�
// ���α׷� �����: <F5> Ű �Ǵ� [�����] > [����� ����] �޴�

// ������ ���� ��: 
//   1. [�ַ�� Ž����] â�� ����Ͽ� ������ �߰�/�����մϴ�.
//   2. [�� Ž����] â�� ����Ͽ� �ҽ� ��� �����մϴ�.
//   3. [���] â�� ����Ͽ� ���� ��� �� ��Ÿ �޽����� Ȯ���մϴ�.
//   4. [���� ���] â�� ����Ͽ� ������ ���ϴ�.
//   5. [������Ʈ] > [�� �׸� �߰�]�� �̵��Ͽ� �� �ڵ� ������ ����ų�, [������Ʈ] > [���� �׸� �߰�]�� �̵��Ͽ� ���� �ڵ� ������ ������Ʈ�� �߰��մϴ�.
//   6. ���߿� �� ������Ʈ�� �ٽ� ������ [����] > [����] > [������Ʈ]�� �̵��ϰ� .sln ������ �����մϴ�.

//#include <iostream>	
//
//namespace BestComImpl
//{
//	void SimpleFunc(void)
//	{
//		std::cout << "BestCom�� ������ �Լ�" << std::endl;
//	}
//}
//
//namespace ProgComImpl
//{
//	void SimpleFunc(void)
//	{
//		std::cout <<"ProgComImpl�� ������" << std::endl;"
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