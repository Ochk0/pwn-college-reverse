void _init()
{
    if (__gmon_start__ != 0)
        __gmon_start__();
}

int64_t sub_1020()
{
    int64_t var_8 = 0;
    /* jump -> nullptr */
}

int64_t sub_1030()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1040()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1050()
{
    int64_t var_8 = 2;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1060()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1070()
{
    int64_t var_8 = 4;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1080()
{
    int64_t var_8 = 5;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1090()
{
    int64_t var_8 = 6;
    /* tailcall */
    return sub_1020();
}

int64_t sub_10a0()
{
    int64_t var_8 = 7;
    /* tailcall */
    return sub_1020();
}

int64_t sub_10b0()
{
    int64_t var_8 = 8;
    /* tailcall */
    return sub_1020();
}

int64_t sub_10c0()
{
    int64_t var_8 = 9;
    /* tailcall */
    return sub_1020();
}

int64_t sub_10d0()
{
    int64_t var_8 = 0xa;
    /* tailcall */
    return sub_1020();
}

int64_t sub_10e0()
{
    int64_t var_8 = 0xb;
    /* tailcall */
    return sub_1020();
}

int64_t sub_10f0()
{
    int64_t var_8 = 0xc;
    /* tailcall */
    return sub_1020();
}

int64_t sub_1100()
{
    int64_t var_8 = 0xd;
    /* tailcall */
    return sub_1020();
}

void __cxa_finalize(void* d)
{
    /* tailcall */
    return __cxa_finalize(d);
}

int32_t putchar(int32_t c)
{
    /* tailcall */
    return putchar(c);
}

int32_t* __errno_location()
{
    /* tailcall */
    return __errno_location();
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
}

ssize_t write(int32_t fd, void const* buf, uint64_t nbytes)
{
    /* tailcall */
    return write(fd, buf, nbytes);
}

void __stack_chk_fail() __noreturn
{
    /* tailcall */
    return __stack_chk_fail();
}

int32_t printf(char const* format, ...)
{
    /* tailcall */
    return printf();
}

void __assert_fail(char const* assertion, char const* file, uint32_t line, char const* function) __noreturn
{
    /* tailcall */
    return __assert_fail(assertion, file, line, function);
}

int64_t geteuid()
{
    /* tailcall */
    return geteuid();
}

ssize_t read(int32_t fd, void* buf, uint64_t nbytes)
{
    /* tailcall */
    return read(fd, buf, nbytes);
}

int32_t memcmp(void const* arg1, void const* arg2, uint64_t arg3)
{
    /* tailcall */
    return memcmp(arg1, arg2, arg3);
}

int32_t setvbuf(FILE* fp, char* buf, int32_t mode, uint64_t size)
{
    /* tailcall */
    return setvbuf(fp, buf, mode, size);
}

int32_t open(char const* file, int32_t oflag, ...)
{
    /* tailcall */
    return open();
}

void exit(int32_t status) __noreturn
{
    /* tailcall */
    return exit(status);
}

char* strerror(int32_t errnum)
{
    /* tailcall */
    return strerror(errnum);
}

void _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t stack_end_1;
    int64_t stack_end = stack_end_1;
    __libc_start_main(main, __return_addr, &ubp_av, init, fini, arg3, &stack_end);
    /* no return */
}

void deregister_tm_clones()
{
    return;
}

void sub_1260()
{
    return;
}

void _FINI_0()
{
    if (data_4038 != 0)
        return;
    
    if (__cxa_finalize != 0)
        __cxa_finalize(data_4008);
    
    deregister_tm_clones();
    data_4038 = 1;
}

void _INIT_0()
{
    /* tailcall */
    return sub_1260();
}

int64_t sub_12e9()
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    puts("You win! Here is your flag:");
    int32_t fd = open("/flag", 0);
    
    if (fd >= 0)
    {
        void buf;
        int32_t rax_9 = read(fd, &buf, 0x100);
        
        if (rax_9 > 0)
        {
            write(1, &buf, rax_9);
            puts(&data_210a);
        }
        else
            printf("\n  ERROR: Failed to read the fl…", strerror(*__errno_location()));
    }
    else
    {
        printf("\n  ERROR: Failed to open the fl…", strerror(*__errno_location()));
        
        if (geteuid() != 0)
        {
            puts("  Your effective user id is not …");
            puts("  You must directly run the suid…");
        }
    }
    
    int64_t result = (rax ^ *(fsbase + 0x28));
    
    if (result == 0)
        return result;
    
    __stack_chk_fail();
    /* no return */
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    char** envp_1 = envp;
    void* fsbase;
    int64_t var_10 = *(fsbase + 0x28);
    
    if (argc <= 0)
    {
        __assert_fail("argc > 0", "<stdin>", 0x32, "main");
        /* no return */
    }
    
    puts(&data_211d);
    printf("### Welcome to %s!\n", *argv);
    puts(&data_211d);
    putchar(0xa);
    setvbuf(stdin, nullptr, 2, 0);
    setvbuf(stdout, nullptr, 2, 1);
    puts("This license verifier software w…");
    puts("are licensed to read flag files!…");
    puts("different operations on that inp…");
    puts("Providing the correct license ke…");
    int32_t buf = 0;
    int16_t var_12 = 0;
    puts("Ready to receive your license ke…");
    read(0, &buf, 5);
    
    for (int32_t i = 0; i <= 3; i += 1)
    {
        for (int32_t j = 0; j < (4 - i); j += 1)
        {
            if (*(&buf + j) > *(&buf + (j + 1)))
            {
                char rax_13 = *(&buf + j);
                *(&buf + j) = *(&buf + (j + 1));
                *(&buf + (j + 1)) = rax_13;
            }
        }
    }
    
    puts("Checking the received license ke…");
    
    if (memcmp(&buf, "gorry", 5) != 0)
    {
        puts("Wrong! No flag for you!");
        exit(1);
        /* no return */
    }
    
    sub_12e9();
    exit(0);
    /* no return */
}

void init()
{
    _init();
    int64_t i = 0;
    
    do
    {
        int64_t rdx;
        int64_t rsi;
        int32_t rdi;
        &init_array[i](rdi, rsi, rdx);
        i += 1;
    } while (1 != i);
}

void fini() __pure
{
    return;
}

int64_t _fini() __pure
{
    return;
}

