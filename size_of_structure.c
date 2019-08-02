#include<stdio.h>
int main()
{
    struct student
    {
        char name[10];
        char usn[12];
        int sem;
    };
    struct student s1;
    int x = sizeof(struct student);
    printf("size of structure variable is : %d",x);
    return 0;
}

/*  Memory are like boxes each box constitute one byte means 8 bit 
    in 32-bit system 4 bytes constitue one 32 bit
    whenever memory is allocated it is allocated in the form of
    32 bit means 4 byte are allocated 

    here above 10 char + 12 char + 1 int 
    means 10 byte + 12 byte + 4 byte = 26 byte should be the size 
    but actually the size is 28 byte because in 32 bit system 4 bytes are 
    allocated at a time so for 24 bytes it is allocated but for rest 2 bytes
    4 byte of space is allocated so total size becomes 28 byte
    that additional 2 byte of memory is of no use and is just the wastage of memory
        ________
       |_\_\_\_\|   }8 bit
       |_\_\_\_\|   }8 bit ---\  32
       |________|   }8 bit ---/  bit
       |________|   }8 bit
       |________|
       |________|
       |________|
       |________|


 */