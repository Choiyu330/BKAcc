#include <stdio.h>

void main(int argc, char* argv[]) {

	int num=0, account=0, i = 0;
	char name[10];

	do {
		//�޴����
		printf("========================================\n");
		printf("\t  ���°������α׷� \n");
		printf("========================================\n");
		printf(" 1. ���� ���� 2. ���� ��ȸ\n 3. ���� ���� 4. ���α׷� ����\n");
		printf("========================================\n");
		printf("��ȣ�� �Է����ֽʽÿ�( )\b\b"); scanf_s("%d", &num);
	

	switch (num) {

	case 1: {				
		//1.���� ���� 
		printf("========================================\n");
		printf("\t  ���� ����â��\n");
		printf("========================================\n");
		printf("�ű� ���� ��ȣ : "); scanf_s("%d", &account);
		printf("�̸� : "); scanf_s("%s", name, sizeof(name));
		printf("\n     << ���°� �����Ǿ����ϴ� >>\n");
		
	}

	case 2: {
		printf("========================================\n");
		printf("\t  ���� ��ȸâ��\n");
		printf("========================================\n");
		printf("���� ��ȣ : %04d\n", account);
		printf("�� ���� : %s\n", name);
		
		break;
	}

	case 3: {
		printf("\t  ���� ����â��\n");
		break;
	}

	case 4: {
		printf("\n���α׷��� �����մϴ�.\n");
		break;
	}
	default :
		printf("\n     �������°� �������� �� ������\n");
	}
	} while (num != 4);

}
