struct A
{
    char symbol;			// 1 byte in memory
    short id;				// 2 bytes in memory
    int number;				// 4 bytes - no padding needed
};//Total 8 Bytes

/*
This Structure is taking total 12 Bytes in memory.

struct A
{
    char symbol;			// 1 byte in memory
    //char charPadding[3];    // 3 bytes padding     
    int number;				// 4 bytes - no padding needed
    short id;				// 2 bytes in memory
	//char shortPadding[2];   // 2 bytes padding  
};

*/
