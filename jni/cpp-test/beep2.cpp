/*******************************************************************
 * Copyright (C) Jerry Jiang
 * File Name   : MultiThreadDlg.cpp
 * Author      : Jerry Jiang
 * Create Time : 2011-10-7 14:41:02
 * Mail        : jbiaojerry@gmail.com
 * Blog        : http://blog.csdn.net/jerryjbiao
 * Description : Beep�������š��ͱ𡷡������桷�͡����տ��ָ衷
 ******************************************************************/

#include <iostream>
#include <windows.h>
using namespace std;

//�������
const int A1 = 131;
const int A2 = 147;
const int A3 = 165;
const int A4 = 175;
const int A5 = 196;
const int A6 = 220;
const int A7 = 247;

//��������
const int B1 = 262;
const int B2 = 296;
const int B3 = 330;
const int B4 = 349;
const int B5 = 392;
const int B6 = 440;
const int B7 = 494;

//�������
const int C1 = 523;
const int C2 = 587;
const int C3 = 659;
const int C4 = 698;
const int C5 = 784;
const int C6 = 880;
const int C7 = 988;

//����߶���
const int D1 = 1047;
const int D2 = 1175;
const int D3 = 1319;
const int D4 = 1397;
const int D5 = 1568;
const int D6 = 1760;
const int D7 = 1976;

//�������
const int OneBeat = 600;
const int HalfBeat = 300;

void HappyBirthday();
void Legend();
void SendOff();

int main() {
	cout << "**************************" << endl;
	cout << "*   1 - �ͱ�             *" << endl;
	cout << "*   2 - ����             *" << endl;
	cout << "*   3 - ף�����տ���     *" << endl;
	cout << "*   0 - �˳�             *" << endl;
	cout << "**************************" << endl;
	cout << "��ѡ�������" << endl;

	int num = 0;
	while (true) {
		cin >> num;
		switch (num) {
			case 1:
				cout << "��ѡ���ˣ�1 - �ͱ�" << endl;
				SendOff();
				break;
			case 2:
				cout << "��ѡ���ˣ�2 - ����" << endl;
				Legend();
				break;
			case 3:
				cout << "��ѡ���ˣ�3 - ף�����տ���" << endl;
				HappyBirthday();
				break;
			default:
				cout << "Thank you." << endl;
				return 0;
				break;
		}
	}

	return 0;
}

void HappyBirthday() {
	Beep(C5, HalfBeat);
	Beep(C5, HalfBeat);
	Beep(C6, OneBeat);
	Beep(C5, OneBeat);
	Beep(D1, OneBeat);
	Beep(C7, OneBeat * 2);

	Beep(C5, HalfBeat);
	Beep(C5, HalfBeat);
	Beep(C6, OneBeat);
	Beep(C5, OneBeat);
	Beep(D2, OneBeat);
	Beep(D1, OneBeat * 2);

	Beep(C5, HalfBeat);
	Beep(C5, HalfBeat);
	Beep(D5, OneBeat);
	Beep(D3, OneBeat);
	Beep(D1, OneBeat);
	Beep(C7, OneBeat);

	Beep(D4, HalfBeat);
	Beep(D4, HalfBeat);
	Beep(D3, OneBeat);
	Beep(D1, OneBeat);
	Beep(D2, OneBeat);
	Beep(D1, OneBeat * 2);


	Beep(C5, HalfBeat);
	Beep(C5, HalfBeat);
	Beep(D5, OneBeat);
	Beep(D3, OneBeat);
	Beep(D1, OneBeat);
	Beep(C7, HalfBeat);
	Beep(C6, OneBeat * 2);

	Beep(D4, HalfBeat);
	Beep(D4, HalfBeat);
	Beep(D3, OneBeat);
	Beep(D1, OneBeat);
	Beep(D2, OneBeat);
	Beep(D1, OneBeat * 3);

}

void Legend() {
	//ֻ����Ϊ����Ⱥ�ж࿴����һ��
	Beep(C1, HalfBeat);
	Beep(C1, OneBeat);
	Beep(C1, OneBeat);
	Beep(C3, OneBeat);
	Beep(C2, OneBeat);
	Beep(C2, HalfBeat);
	Beep(C2, HalfBeat / 2);
	Beep(C1, HalfBeat);
	Beep(C1, OneBeat);
	Beep(C1, HalfBeat);
	Beep(C2, OneBeat);
	Beep(C2, OneBeat);
	Beep(C1, HalfBeat);
	Beep(B6, HalfBeat);
	Beep(B6, HalfBeat / 2);
	Beep(B6, OneBeat * 2);

	//��Ҳû������������
	Beep(B7, HalfBeat);
	Beep(B7, HalfBeat);
	Beep(B7, OneBeat);
	Beep(C1, HalfBeat);
	Beep(C2, HalfBeat);
	Beep(C2, OneBeat);
	Beep(B7, OneBeat);
	Beep(B6, HalfBeat);
	Beep(B5, HalfBeat);
	Beep(B3, HalfBeat);
	Beep(B3, OneBeat * 2);

	//������żȻ����һ�������
	Beep(C3, HalfBeat);
	Beep(C2, HalfBeat);
	Beep(C3, OneBeat);
	Beep(C3, HalfBeat);
	Beep(C3, HalfBeat / 2);
	Beep(C2, HalfBeat);
	Beep(C2, OneBeat);
	Beep(C2, HalfBeat / 2);
	Beep(C1, HalfBeat);
	Beep(C1, OneBeat);
	Beep(C2, OneBeat);
	Beep(B6, OneBeat);
	Beep(B6, HalfBeat);
	Beep(B6, HalfBeat / 2);
	Beep(C2, HalfBeat);
	Beep(C1, HalfBeat / 2);
	Beep(C1, OneBeat * 2);

	//�Ӵ��ҿ�ʼ�µ�˼��
	Beep(B7, HalfBeat);
	Beep(B7, HalfBeat);
	Beep(B7, OneBeat);
	Beep(C1, HalfBeat);
	Beep(C2, HalfBeat / 2);
	Beep(C2, OneBeat);
	Beep(C2, OneBeat);
	Beep(B6, HalfBeat);
	Beep(B5, OneBeat);
	Beep(B3, OneBeat * 2);

	//����ʱ�������
	Beep(C5, OneBeat);
	Beep(C2, HalfBeat / 2);
	Beep(C2, OneBeat);
	Beep(C3, OneBeat);
	Beep(C5, OneBeat);
	Beep(C2, HalfBeat);
	Beep(C2, OneBeat);
	Beep(D1, HalfBeat);
	Beep(B6, OneBeat * 2);

	Sleep(50);

	//����ʱ������ǰ
	Beep(C2, OneBeat);
	Beep(B6, HalfBeat / 2);
	Beep(B6, OneBeat);
	Beep(C3, OneBeat);
	Beep(C2, OneBeat);
	Beep(C1, HalfBeat / 2);
	Beep(C1, OneBeat);
	Beep(C1, OneBeat);
	Beep(B5, OneBeat * 2);

	//����ʱ�����Ժ�
	Beep(C5, OneBeat);
	Beep(C2, HalfBeat / 2);
	Beep(C2, OneBeat);
	Beep(C3, OneBeat);
	Beep(C5, OneBeat);
	Beep(C2, HalfBeat);
	Beep(C2, OneBeat);
	Beep(D1, OneBeat);
	Beep(B6, OneBeat * 2);

	Sleep(50);

	//����ʱ��������
	Beep(C2, OneBeat);
	Beep(B6, HalfBeat / 2);
	Beep(B6, OneBeat);
	Beep(C3, OneBeat);
	Beep(C2, OneBeat);
	Beep(C1, HalfBeat / 2);
	Beep(C1, OneBeat);
	Beep(C1, OneBeat);
	Beep(B5, OneBeat * 2);

	//��Ը��������ǰ����Լ
	Beep(C1, HalfBeat);
	Beep(C1, HalfBeat);
	Beep(C1, OneBeat);
	Beep(B5, HalfBeat);
	Beep(C1, HalfBeat / 2);
	Beep(C1, OneBeat);
	Beep(C5, OneBeat);
	Beep(D4, OneBeat);
	Beep(C3, OneBeat);
	Beep(C2, OneBeat);
	Beep(C1, HalfBeat / 2);
	Beep(C1, OneBeat * 2);

	//�����İ�����²����ٸı�
	Beep(C1, HalfBeat);
	Beep(C3, HalfBeat);
	Beep(C5, HalfBeat);
	Beep(C6, OneBeat);
	Beep(C5, HalfBeat);
	Beep(C6, HalfBeat / 2);
	Beep(C6, HalfBeat);
	Beep(C5, OneBeat);
	Beep(C6, OneBeat);
	Beep(C5, HalfBeat);
	Beep(C3, HalfBeat);
	Beep(C3, HalfBeat);
	Beep(C2, OneBeat);
	Beep(C3, HalfBeat / 2);
	Beep(C3, OneBeat * 2);

	//��Ը����һ�����㷢��
	Beep(C1, HalfBeat);
	Beep(C1, HalfBeat);
	Beep(C1, OneBeat);
	Beep(B5, HalfBeat);
	Beep(C1, HalfBeat / 2);
	Beep(C1, OneBeat);
	Beep(C5, OneBeat);
	Beep(D4, OneBeat);
	Beep(C3, OneBeat);
	Beep(C2, OneBeat);
	Beep(C1, HalfBeat / 2);
	Beep(C1, OneBeat * 2);

	//��һֱ������ߴ�δ��Զ
	Beep(C1, HalfBeat);
	Beep(C3, HalfBeat);
	Beep(C5, HalfBeat);
	Beep(C6, OneBeat);
	Beep(C5, HalfBeat);
	Beep(C6, HalfBeat / 2);
	Beep(C6, HalfBeat);
	Beep(C5, OneBeat);
	Beep(C6, OneBeat);
	Beep(C5, HalfBeat);
	Beep(C3, HalfBeat / 2);
	Beep(C5, OneBeat);
	Beep(C5, OneBeat * 4);
}

void SendOff() {
	//�ͱ�
	const int ONE_BEEP = 600;
	const int HALF_BEEP = 300;

	const int NOTE_1 = 440;
	const int NOTE_2 = 495;
	const int NOTE_3 = 550;
	const int NOTE_4 = 587;
	const int NOTE_5 = 660;
	const int NOTE_6 = 733;
	const int NOTE_7 = 825;

	//��ͤ��
	Beep(NOTE_5, ONE_BEEP);
	Beep(NOTE_3, HALF_BEEP);
	Beep(NOTE_5, HALF_BEEP);
	Beep(NOTE_1 * 2, ONE_BEEP * 2);

	//�ŵ���
	Beep(NOTE_6, ONE_BEEP);
	Beep(NOTE_1 * 2, ONE_BEEP);
	Beep(NOTE_5, ONE_BEEP * 2);

	//���ݱ�����
	Beep(NOTE_5, ONE_BEEP);
	Beep(NOTE_1, HALF_BEEP);
	Beep(NOTE_2, HALF_BEEP);
	Beep(NOTE_3, ONE_BEEP);
	Beep(NOTE_2, HALF_BEEP);
	Beep(NOTE_1, HALF_BEEP);
	Beep(NOTE_2, ONE_BEEP * 4);

	//������������
	Beep(NOTE_5, ONE_BEEP);
	Beep(NOTE_3, HALF_BEEP);
	Beep(NOTE_5, HALF_BEEP);
	Beep(NOTE_1 * 2, HALF_BEEP * 3);
	Beep(NOTE_7, HALF_BEEP);
	Beep(NOTE_6, ONE_BEEP);
	Beep(NOTE_1 * 2, ONE_BEEP);
	Beep(NOTE_5, ONE_BEEP * 2);

	//Ϧ��ɽ��ɽ
	Beep(NOTE_5, ONE_BEEP);
	Beep(NOTE_2, HALF_BEEP);
	Beep(NOTE_3, HALF_BEEP);
	Beep(NOTE_4, HALF_BEEP * 3);
	Beep((int)(NOTE_7 / 2 + 0.5), HALF_BEEP);
	Beep(NOTE_1, ONE_BEEP * 4);

	//��֮��
	Beep(NOTE_6, ONE_BEEP);
	Beep(NOTE_1 * 2, ONE_BEEP);
	Beep(NOTE_1 * 2, ONE_BEEP * 2);

	//��֮��
	Beep(NOTE_7, ONE_BEEP);
	Beep(NOTE_6, HALF_BEEP);
	Beep(NOTE_7, HALF_BEEP);
	Beep(NOTE_1 * 2, ONE_BEEP * 2);

	//֪��������
	Beep(NOTE_6, HALF_BEEP);
	Beep(NOTE_7, HALF_BEEP);
	Beep(NOTE_1 * 2, HALF_BEEP);
	Beep(NOTE_6, HALF_BEEP);
	Beep(NOTE_6, HALF_BEEP);
	Beep(NOTE_5, HALF_BEEP);
	Beep(NOTE_3, HALF_BEEP);
	Beep(NOTE_1, HALF_BEEP);
	Beep(NOTE_2, ONE_BEEP * 4);

	//һ���Ǿƾ��໶
	Beep(NOTE_5, ONE_BEEP);
	Beep(NOTE_3, HALF_BEEP);
	Beep(NOTE_5, HALF_BEEP);
	Beep(NOTE_1 * 2, HALF_BEEP * 3);
	Beep(NOTE_7, HALF_BEEP);
	Beep(NOTE_6, ONE_BEEP);
	Beep(NOTE_1 * 2, ONE_BEEP);
	Beep(NOTE_5, ONE_BEEP * 2);

	//�������κ�
	Beep(NOTE_5, ONE_BEEP);
	Beep(NOTE_2, HALF_BEEP);
	Beep(NOTE_3, HALF_BEEP);
	Beep(NOTE_4, HALF_BEEP * 3);
	Beep((int)(NOTE_7 / 2 + 0.5), HALF_BEEP);
	Beep(NOTE_1, ONE_BEEP * 3);

	Sleep(10000);
}
