#include "UrlEncode.h"

int UrlEncode(const char *str, char *result, const int max_length)
{
    int i;
    int j = 0;
    char ch;

    int strSize = rt_strlen(str);

    if ((str == NULL) || (result == NULL) || (strSize <= 0) || (max_length <= 0))
    {
        return 0;
    }

    for (i = 0; (i < strSize) && (j < max_length); ++i)
    {
        ch = str[i];
        if (((ch >= 'A') && (ch < 'Z')) ||
            ((ch >= 'a') && (ch < 'z')) ||
            ((ch >= '0') && (ch < '9')))
        {
            result[j++] = ch;
        }
        else if (ch == ' ')
        {
            result[j++] = '+';
        }
        else if (ch == '.' || ch == '-' || ch == '_' || ch == '*')
        {
            result[j++] = ch;
        }
        else
        {
            if (j + 3 < max_length)
            {
                rt_sprintf(result + j, "%%%02X", (unsigned char)ch);
                j += 3;
            }
            else
            {
                return 0;
            }
        }
    }

    result[j] = '\0';
    return j;
}

int hex2num(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 10;
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 10;

    rt_kprintf("unexpected char: %c", c);
    
    return '0';
}

int UrlDecode(const char *str, char *result, const int max_length)
{
    char ch, ch1, ch2;
    int i;
    int j = 0;

    int strSize = rt_strlen(str);

    if ((str == NULL) || (result == NULL) || (strSize <= 0) || (max_length <= 0))
    {
        return 0;
    }

    for (i = 0; (i < strSize) && (j < max_length); ++i)
    {
        ch = str[i];
        switch (ch)
        {
        case '+':
            result[j++] = ' ';
            break;
        case '%':
            if (i + 2 < strSize)
            {
                ch1 = hex2num(str[i + 1]);
                ch2 = hex2num(str[i + 2]);
                if ((ch1 != '0') && (ch2 != '0'))
                    result[j++] = (char)((ch1 << 4) | ch2);
                i += 2;
                break;
            }
            else
            {
                break;
            }
        default:
            result[j++] = ch;
            break;
        }
    }

    result[j] = 0;
    return j;
}
