#include <stdio.h>

void main(int argc, char* argv[]) {

	int num=0, account=0, i = 0;
	char name[10];

	do {
		//메뉴출력
		printf("========================================\n");
		printf("\t  계좌관리프로그램 \n");
		printf("========================================\n");
		printf(" 1. 계좌 개설 2. 계좌 조회\n 3. 계좌 삭제 4. 프로그램 종료\n");
		printf("========================================\n");
		printf("번호를 입력해주십시오( )\b\b"); scanf_s("%d", &num);
	

	switch (num) {

	case 1: {				
		//1.계좌 개설 
		printf("========================================\n");
		printf("\t  계좌 개설창구\n");
		printf("========================================\n");
		printf("신규 계좌 번호 : "); scanf_s("%d", &account);
		printf("이름 : "); scanf_s("%s", name, sizeof(name));
		printf("\n     << 계좌가 개설되었습니다 >>\n");
		
	}

	case 2: {
		printf("========================================\n");
		printf("\t  계좌 조회창구\n");
		printf("========================================\n");
		printf("계좌 번호 : %04d\n", account);
		printf("고객 성함 : %s\n", name);
		
		break;
	}

	case 3: {
		printf("\t  계좌 해지창구\n");
		break;
	}

	case 4: {
		printf("\n프로그램을 종료합니다.\n");
		break;
	}
	default :
		printf("\n     쓸데없는거 누르지마 이 새끼야\n");
	}
	} while (num != 4);

}
