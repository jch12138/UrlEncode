#include "UrlEncode.h"

int UrlEncode_test(int argc, char* argv[])
{
    char *src;

    if(argc == 1)
    {
        src = "RT-Thread,小而美的物联网操作系统";
    }

    if(argc == 2)
    {
        src = argv[1];
    }

    rt_kprintf("src: %s\n", src);
    rt_kprintf("src length: %d\n", rt_strlen(src));

    char obj[200] = {0};
    UrlEncode(src, obj, 200);

    rt_kprintf("result: %s\n", obj);
    rt_kprintf("result: %d\n", rt_strlen(obj));
 
    return 0;
}
MSH_CMD_EXPORT(UrlEncode_test,UrlEncode_test);

int UrlDecode_test(int argc, char* argv[])
{
    char *src;

    if(argc == 1)
    {
        src = "RT-Thread%2C%E5%B0%8F%E8%80%8C%E7%BE%8E%E7%9A%84%E7%89%A9%E8%81%94%E7%BD%91%E6%93%8D%E4%BD%9C%E7%B3%BB%E7%BB%9F";
    }

    if(argc == 2)
    {
        src = argv[1];
    }

    rt_kprintf("src: %s\n", src);
    rt_kprintf("src length: %d\n", rt_strlen(src));

    char obj[100] = {0};
    UrlDecode(src, obj, 100);

    rt_kprintf("result: %s\n", obj);
    rt_kprintf("result: %d\n", rt_strlen(obj));
 
    return 0;
}
MSH_CMD_EXPORT(UrlDecode_test,UrlDecode_test);