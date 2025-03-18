//#include <stdio.h>
//int size;
//
//typedef struct addr {
//	char name[20];
//	int age;
//	char tel[20];
//	char addr[100];
//}Addr;
//
//void print_list(Addr*);
//
//int main() {
//	Addr list[] = { {"홍길동", 100, "010-000-0000", "조선"},
//					 {"손흥민", 33, "010-111-1111", "영국"},
//					 {"김민재", 30, "010-222-2222", "독일"} };
//
//	size = sizeof(list) / sizeof(list[0]);
//
//	print_list(list);
//
//	return 0;
//}
//
//void print_list(Addr* list_p) {
//	for (int i = 0; i < size; i++) {
//		printf("%s, %d, %s, %s\n", list_p[i].name, list_p[i].age, list_p[i].tel, list_p[i].addr);
//	}
//}