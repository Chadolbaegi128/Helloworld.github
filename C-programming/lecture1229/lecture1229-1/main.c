#include <stdio.h>
#define MAC
#define WINDOWS
#define ANDROID

int main() {

#ifdef WINDOWS
	printf("Windows Execute\n");
#endif // WINDOWS

#ifdef MAC
	printf("MAC Execute\n");
#endif // MAC

#ifdef ANDROID
	printf("ANDROID Execute\n");
#endif // ANDROID 
	return 0;
}