pow函数应用
计算的话预处理要添加math
#include<math.h>
要在int result = pow(2,32)-1 加unsigned表示无符号输出

加unsigned的原因如下：
默认下int是signed类型的，即带符号的整型，存放整型的存储单元时，
左边第一位不是用来存数值，而是符号。example，if 该位数是0，then 表示一个正数
if 该位数是1表示以为负数
so 需要表达整型的32比特全部用来存放数据值，那就必须用unsigned int来声明


这就导致了下面的代码需要使用%u输出，而不是%d
printf("result = %u\n",result);

pow(2,32)-1 
人话为2的32次方减1
二进制的11111...*32相当于十进制的2的32次方减1