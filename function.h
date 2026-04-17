#ifdef INTEGER

void ShowArrayInt(int* arr, int size);
int FindMinInt(int* arr, int size);
int FindMaxInt(int* arr, int size);

#elif defined DOUBLE

void ShowArrayDouble(double* arr, int size);
double FindMinDouble(double* arr, int size);
double FindMaxDouble(double* arr, int size);

#elif defined CHAR

void ShowArrayChar(char* arr, int size);
char FindMinChar(char* arr, int size);
char FindMaxChar(char* arr, int size);

#endif