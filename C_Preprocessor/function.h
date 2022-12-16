#pragma once

#ifndef INTEGER

void FillRandInt(int arr[], int n);
void PrintInt(int arr[], int n);
void FindMinInt(int arr[], int n);
void FindMaxInt(int arr[], int n);
void SortArrInt(int arr[], int n);
void ChangeInt(int arr[]);

#define Fill FillRandInt;
#define Show PrintInt;
#define FindMin FindMinInt;
#define FindMax FindMaxInt;
#define Sort SortArrInt;
#define Change ChangeInt;



#elif FLOAT

void FillRandFloat(float arr[], int n);
void PrintFloat(float arr[], int n);
void FindMinFloat(float arr[], int n);
void FindMaxFloat(float arr[], int n);
void SortFloat(float arr[], int n);
void ChangeFloat(float arr[]);

#define Fill FillRandFloat;
#define Show PrintFloat;
#define FindMin FindMinFloat;
#define FindMax FindMaxFloat;
#define Sort SortFloat;
#define Change ChangeFloat;



#elif CHAR

void FillRandChar(char arr[], int n);
void PrintChar(char arr[], int n);
void FindMinChar(char arr[], int n);
void FindMaxChar(char arr[], int n);
void SortChar(char arr[], int n);
void ChangeChar(char arr[]);

#define Fill FillRandChar;
#define Show PrintChar;
#define FindMin FindMinChar;
#define FindMax FindMaxChar;
#define Sort SortChar;
#define Change ChangeChar;

#endif