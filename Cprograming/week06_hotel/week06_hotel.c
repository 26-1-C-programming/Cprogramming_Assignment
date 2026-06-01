#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>

void reservation(int vip_arr[][2], int normal_arr[][2], char normal_name[][20], char vip_name[][20])
{
	char name_buffer[1000];
	int reservation_number;
	int room_type;

	printf("====== Room Reservation ======\n");
	printf("Reservation Name : ");
	scanf("%s", name_buffer);
	printf("Number of Reservations : ");
	scanf("%d", &reservation_number);
	printf("Room Type <1>VIP <2>Normal : ");
	scanf("%d", &room_type);

	if (room_type == 1) {
		int empty_room = 0;
		int arr[3] = { 0 };
		for (int i = 0; i < 3; i++) {
			if (vip_arr[i][0] == 0) {
				empty_room++;
			}
		}
		if (reservation_number <= empty_room * 4) {
			int n = 0;
			printf("Room Number :");
			for (int i = 0; i < 3; i++) {
				if (vip_arr[i][0] == 0) {
					if (n == (reservation_number / 4) + 1)
						break;
					if (n < (reservation_number / 4)) {
						strcpy(vip_name[i], name_buffer);
						vip_arr[i][0] = 4;
						n++;
						printf("{ %d }", 301 + i);
					}
					else {
						strcpy(vip_name[i], name_buffer);
						vip_arr[i][0] = reservation_number - n * 4;
						n++;
						printf(" {%d} ", 301 + i);
					}
				}
			}
			printf("\nReservation Complete\n");
		}
		else
			printf("Reservation Failed\nDon't have enough rooms\n");
	}
	else if (room_type == 2) {
		int empty_room = 0;
		int arr[5] = { 0 };
		for (int i = 0; i < 5; i++) {
			if (normal_arr[i][0] == 0) {
				empty_room++;
			}
		}
		if (reservation_number <= empty_room * 2) {
			int n = 0;
			printf("Room Number :");
			for (int i = 0; i < 5; i++) {
				if (normal_arr[i][0] == 0) {
					if (n == (reservation_number / 2) + 1)
						break;
					if (n < (reservation_number / 2)) {
						strcpy(normal_name[i], name_buffer);
						normal_arr[i][0] = 2;
						printf(" {%d} ", 201 + i);
						n++;
					}
					else {
						strcpy(normal_name[i], name_buffer);
						normal_arr[i][0] = reservation_number - n * 2;
						printf(" {%d} ", 201 + i);
						n++;
					}
				}
			}
			printf("\nReservation Complete\n");
		}
		else
			printf("Reservation Failed\nDon't have enough room\n");
	}
	printf("==========================\n");
}

void inquiry(int vip_arr[][2], int normal_arr[][2], char vip_name[][20], char normal_name[][20])
{
	char check_name[1000];
	int reservation_number = 0;
	int check1 = 0, check2 = 0;
	printf("====== Reservation Inquiry ======\n");
	printf("Reservation Name : ");
	scanf("%s", check_name);
	for (int i = 0; i < 3; i++) {
		if (!(strcmp(vip_name[i], check_name))) {
			check1++;
		}
	}
	for (int i = 0; i < 5; i++) {
		if (!(strcmp(normal_name[i], check_name))) {
			check2++;
		}
	}

	if (check1 > 0 || check2 > 0) {
		printf("\nReservation Info\n");
		printf("Room : ");
		if (check1 > 0) {
			printf("VIP");
			for (int i = 0; i < 3; i++) {
				if (!(strcmp(vip_name[i], check_name))) {
					printf(" {%d}", 301 + i);
					reservation_number += vip_arr[i][0];
				}
			}
		}
		if (check2 > 0) {
			printf("Normal");
			for (int i = 0; i < 5; i++) {
				if (!(strcmp(normal_name[i], check_name))) {
					printf(" {%d}", 201 + i);
					reservation_number += normal_arr[i][0];
				}
			}
		}
		printf("\nNumber : %d  Name : %s\n", reservation_number, check_name);
		printf("==========================\n");
	}
	else {
		printf("No reservation\n");
		printf("==========================\n");
	}
}

void cancel(int vip_arr[][2], int normal_arr[][2], char vip_name[][20], char normal_name[][20]) {
	printf("====== Reservation Cancel ======\n");
	char cancel_name[1000];
	int check1 = 0, check2 = 0, cancel_number;
	printf("Reservation Name : ");
	scanf("%s", cancel_name);
	printf("Reservation Info\n");
	for (int i = 0; i < 3; i++) {
		if (!(strcmp(vip_name[i], cancel_name))) {
			check1++;
		}
	}
	for (int i = 0; i < 5; i++) {
		if (!(strcmp(normal_name[i], cancel_name))) {
			check2++;
		}
	}
	printf("Room ");
	if (check1 > 0 || check2 > 0) {
		if (check1 > 0)
			printf("VIP");
		for (int i = 0; i < 3; i++) {
			if (!(strcmp(vip_name[i], cancel_name))) {
				printf(" {%d}", 301 + i);
			}
		}
		if (check2 > 0)
			printf("Normal");
		for (int i = 0; i < 5; i++) {
			if (!(strcmp(normal_name[i], cancel_name))) {
				printf(" {%d}", 201 + i);
			}
		}
		printf(" : ");
		scanf("%d", &cancel_number);
		if (cancel_number > 300) {
			vip_arr[cancel_number - 301][0] = 0;
			strcpy(vip_name[cancel_number - 301], "0");
		}
		else if (cancel_number > 200) {
			normal_arr[cancel_number - 201][0] = 0;
			strcpy(normal_name[cancel_number - 201], "0");
		}
		printf("Cancellation Complete\n");
		printf("==========================\n");
	}
}

int main(void) {

	int choice;
	int vip_arr[3][2] = { 0 };
	char vip_name[3][20] = { 0 };
	int normal_arr[5][2] = { 0 };
	char normal_name[5][20] = { 0 };

	int loof = 1;
	while (loof)
	{
		printf("Hotel Reservation Service\n");
		printf("<1>Reservation <2>Inquiry <3>Cancel <4>Exit : ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			reservation(vip_arr, normal_arr, normal_name, vip_name);
			break;
		case 2:
			inquiry(vip_arr, normal_arr, vip_name, normal_name);
			break;
		case 3:
			cancel(vip_arr, normal_arr, vip_name, normal_name);
			break;
		case 4:
			loof = 0;
			break;
		default:
			printf("Invaild Number");
		}
	}
	printf("Service Exit");
	return 0;
}