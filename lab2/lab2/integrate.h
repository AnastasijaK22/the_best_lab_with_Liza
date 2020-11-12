#pragma once
#include <cmath>
#include <vector>

using namespace std;

const double ksi = 0.4;

//k1(x), 0 <= x < ���
double k1(double x);

//q1(x), 0 <= x < ���
double q1(double x);

//f1(x), 0 <= x < ���
double f1(double x);

//k2(x), ��� < x <= 1
double k2(double x);

//q2(x), ��� < x <= 1
double q2(double x);

//f2(x), ��� < x <= 1
double f2(double x);

//k1*, 0 <= x < ���
double k1_test(double x);

//q1*, 0 <= x < ���
double q1_test(double x);

//f1*, 0 <= x < ���
double f1_test(double x);

//k2*, ��� < x <= 1
double k2_test(double x);

//q2*, ��� < x <= 1
double q2_test(double x);

//f2*, ��� < x <= 1
double f2_test(double x);

//��������� ������������ ai - ���������� ������ ����������� n+1
vector<double> calculation_a(int n, double (*k1)(double), double (*k2)(double));

//��������� ������������ di - ���������� ������ ����������� n+1
vector<double> calculation_d(int n, double (*q1)(double), double (*q2)(double));

//��������� ������������ fi - ���������� ������ ����������� n+1
vector<double> calculation_f(int n, double (*f1)(double), double (*f2)(double));

//
void diagonals(int n, vector<double>& bottom_d, vector<double>& center_d, vector<double>& upper_d, double (*k1)(double), double (*k2)(double), double (*q1)(double), double (*q2)(double));

vector<double> free_comp(int n, double (*f1)(double), double (*f2)(double));

vector<double> progonka(int n, vector<double> bottom_d, vector<double> center_d, vector<double> upper_d, vector<double> free);