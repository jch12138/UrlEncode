# UrlEncode API

`int UrlEncode(const char *str, char *result, const int max_length);`

> 此函数可以对字符串进行UrlEncode编码.

| 参数              | 描述                               |
|:------------------|:-----------------------------------|
|`str`              | 源字符串的指针                      |
|`result`           | 目标字符串的指针                    |
|`max_length`       | 目标字符串的最大长度                |
| **返回**          | **描述**                           |
|0                  | 执行失败                            |
|!=0                 | 返回字符串的长度                   |

`int UrlDecode(const char *str, char *result, const int max_length);`

> 此函数可以对字符串进行UrlDecode解码.

| 参数              | 描述                                |
|:------------------|:------------------------------------|
|`str`              | 源字符串的指针                      |
|`result`           | 目标字符串的指针                     |
|`max_length`       | 目标字符串的最大长度                 |
| **返回**          | **描述**                            |
|0                  | 执行失败                            |
|!=0                 | 返回字符串的长度                    |

