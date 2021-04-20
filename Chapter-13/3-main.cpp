/*
  修改baseDMA-lacksDMA-hasDMA类层次，让三个类都从一个ABC派生而来，然后使用与程序清单13.10相似的程序对结果进行测试。
  也就是说，它应使用ABC指针数组，并让用户决定要创建的对象类型。在类定义中添加virtual View()方法以处理数据显示。
*/
#include"3.h"

int main()
{
  baseDMA shirt("Portabelly", 8);
  lacksDMA balloon("red", "Blimpo", 4);
  hasDMA map("Mercator", "Buffer object Keys", 5);
  std::cout << "Display baseDMA object:" << std::endl;
  std::cout << shirt << std::endl;

  std::cout << "Display lacasDMA object:" << std::endl;
  std::cout << balloon << std::endl;

  std::cout << "Display hasDMA object:" << std::endl;
  std::cout << map << std::endl;

  shirt.View();

  balloon.View();

  map.View();

  return 0;
}