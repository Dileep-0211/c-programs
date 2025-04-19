// this is to show the write() systemcall 

#include <unistd.h>
#include <string.h>

void main()
{
	size_t len;
	int msg_len = 0;
	char buf[100];
	
	strncpy(buf,"this line will write to screen using write\n",99);
	msg_len = strlen(buf);
	
	len = write(1,buf,msg_len);
}
	
