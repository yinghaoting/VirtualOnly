# VirtualOnly
毁掉计算机的方法…只有虚拟机用户才敢尝试的储存库…

***

## <span style="font-size:2rem;background-color:red;">使用前务必阅读</span>

You should know what's in this repository before you use it.

If you cannot understand the Chinese instruction, you'd better read the code file carefully or ask us. We'll tell you more about the repository.

这个储存库中包含会对计算机造成损害的程序，您必须确保在虚拟机中运行它。我们提供了通用的恶意程序安全锁模板，但是有些程序因功能原因，并不使用这些模板。这些程序通常会额外标注，请您仔细查看。

***

## 使用说明：

1. 将储存库中需要运行的恶意程序复制到虚拟机中
2. 将KEY.zip中的KEY.key解压并移动到恶意程序同一目录下
2. 运行恶意程序

> 不同恶意程序标准不同，有些恶意程序不需要KEY解锁。我们不建议将此类程序长时间储存在您的电脑或虚拟机中，以免造成不必要的损失

***

## 储存库说明

如果您不知道如何使用储存库内的内容，或者对我们的储存库感兴趣，希望帮助我们维护储存库，请您阅读本章内容。

### /Tools

/Tools目录下主要存放一些编译和生成代码所需的工具

#### 编译器

编译器共有3个文件：ClickCompiler.bat、DragCompiler.bat、DragCompilerName\_.bat。3个文件都用于在Windows已经配置MinGW的环境下节省使用cmd所需的时间（许多IDE自带的编译器生成的文件无法独立运行）。

其中ClickCompiler.bat需要点击以后手动输入程序名称，DragCompiler.bat则是将需编译的cpp文件拖拽到文件图标上，即用DragCompiler.bat打开，作为参数传入并运行。

因为部分文件的目录带有空格，传入参数时带有引号，造成文件读取错误，生成的文件无后缀名，所以额外增加了DragCompilerName\_.bat，若出现上述错误使用DragCompilerName\_.bat即可。

#### 代码生成器

为了更方便的生成cpp源文件，我们制作了两个代码生成器

##### CoutCoder

CoutCoder有两个文件：.cpp源文件和.exe可执行文件。

此代码生成器可将代码文件变为由cout输出的代码文件

例如以下代码

```cpp
cout << "Hello World";
```

会被转为

```cpp
cout << "cout << \"Hello World\";"
```

需要注意的是，虽然CoutCoder可以转换任何格式和语法的文件，且对于引号`"`做了优化，但是没有针对反斜杠`\`的优化。使用时需注意。

##### KeyGenerator

此代码生成器可以生成安全锁样例和解锁钥匙。

解锁钥匙和安全锁都是默认的通用密钥，未设置随机数。若需设置可在代码中根据注释修改。

#### 虚拟机工具

为了更方便地测试代码，我们提供了虚拟机工具

TrustedInstaller.reg可以为用户提供超级管理员，即TrustedInstaller权限。将文件合并入虚拟机的注册表后，右键需获得权限的文件所在目录，即可获得权限。

#### 示例文件

恶意程序的示例也储存在此文件夹中

TemplateExample.cpp为安全锁的样例

### /CompletedPrograms

经过测试可正常运行且具有安全性的程序在此文件夹内

### /TestingPrograms

介于并不是任何人都拥有虚拟机，可以将待测试的程序置于此文件夹内。我们对其进行测试后会移入/CompletedPrograms。请您不要随意使用此文件夹内未经测试的文件，以免造成不必要的损失。
