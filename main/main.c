#include <stdio.h>

void app_main(void)
{
  printf("Hello: %s \n", "2022/11/21");
  printf("打印: %4d年%02d月%02d日 %02d时%02d分\n", 2022, 11, 21, 8, 23);
  printf("打印%%: %5.2f%%\n", 75.1);
  printf("temp: %f\n", 1.23);
  printf("temp: %.1f\n", 1.23);
  printf("指定长度: %10.1f\n", 1.23);
  printf("指定填充字符0: %010.1f\n", 1.23);

  printf("打印符号: %+.1f\n", 1.23);
  printf("打印符号: %+.1f\n", -1.23);
  // 清空标准输出，与\n同作用
  fflush(stdout);
}
