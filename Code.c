void check_system()
{
    int a=1;
    char* p=(char*)&a;
    if(*p==1)
    {
     	std::cout<<"The system is Little-endian!"<<std::endl;
    }
    else
    {
        std::cout<<"The system is Big-endian!"<<std::endl;
    }
}


//1.计数器方式
int My_Strlen(char* str)
{
    int count;
    while(*str!='\0')
    {
        ++count;
        ++str;
    }
    return count;
}

//2.递归方式
int My_strlen(char* str)
{
    if(*str=='\0')
    {
        return 0;
    }
    else
    {
        return 1+My_Strlen(str+1);
    }
}