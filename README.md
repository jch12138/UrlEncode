# UrlEncode

## 1、介绍
在进行网络请求时,经常需要对参数进行UrlEncode编码,本软件包可以比较方便的对参数进行编码以及解码.
>URL编码(URL encoding)，也称作百分号编码(Percent-encoding)， 是特定上下文的统一资源定位符 (URL)的编码机制。用于统一资源标识符(URI)的编码，也用于为"application/x-www-form-urlencoded" MIME准备数据， 因为它用于通过HTTP的请求操作(request)提交HTML表单数据。


### 1.1 目录结构

UrlEncode 软件包目录结构如下所示：

``` 
UrlEncode
├───docs 
│   └───api.md                      // API 使用说明
├───inc                             // 头文件
├───src                             // 源文件				
├───examples                        // 示例代码
│   └───UrlEncode_Example.c         // UrlEncode 编解码示例代码
│   LICENSE                         // 软件包许可证
│   README.md                       // 软件包使用说明
└───SConscript                      // RT-Thread 默认的构建脚本
```

### 1.2 许可证

UrlEncode 软件包遵循 LGPLv2.1  许可，详见 LICENSE 文件。

### 1.3 依赖

- RT_Thread 3.0+

## 2、获取软件包

使用 UrlEncode 软件包需要在 RT-Thread 的包管理中选中它，具体路径如下：

```
RT-Thread online packages
    tools packages  --->
         [*] UrlEncode: a simple tool to Encode/Decode Url
                [*] Use Examples
                Version (latest)  --->
```

**Use Examples** : 使用示例命令.

**Version** ：配置软件包版本。

配置完成后让 RT-Thread 的包管理器自动更新，或者使用 pkgs --update 命令更新包到 BSP 中。

## 3、使用 UrlEncode 软件包

- 完整的 API 文档，请参考 [API 手册](docs/api.md)

## 4、注意事项

如果串口终端不支持中文显示(UTF-8),显示可能会有问题


## 5、联系方式 & 感谢

- 维护：蒋晨辉
- 主页：https://github.com/jch12138/UrlEncode