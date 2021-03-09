#include<iostream>
using namespace std;
/*
编写一个程序，它使用下列函数：
Fill_array()将一个double数组的名称和长度作为参数。它提示用户输入double值，并将这些值存储到数组中。
当数组被填满或用户输入了非数字时，输入将停止，并返回实际输入了多少个数字。
Show_array()将一个double数组的名称和长度作为参数，并显示该数组的内容。
Reverse_array()将一个double数组的名称和长度作为参数，并将存储在数组中的值的顺序反转。
程序将使用这些函数来填充数组，然后显示数组；反转数组，然后显示数组；反转数组中除第一个和最后一个元素之外的所有元素，然后显示数组。
*/
int Fill_array( double arr[], int length )
{
  int index = 0;
  cout << "Enter arr["<<index <<"]";

  cin >> arr[index];
  while ( !cin.fail() && index < length-1 )
  {
    index++;
    cout << "Enter arr["<<index <<"]";

    cin >> arr[index];
  }
  return index;
}

void Show_array( double arr[], int length )
{
  int index = 0;
  while( index < length && arr[index] != '\0' )
  {
    cout << "Array["<<index<<"]:"<<arr[index]<<endl;
    index++;
  }
}

void Reverse_array( double arr[], int length )
{
  double* pre = arr;
  double* aft = &arr[length-1];

  while( *aft == '\0' )
  {
    aft--;
  }

  while( pre < aft )
  {
    if ( *pre != *aft )
    {
      double temp;
      temp = *pre;
      *pre = *aft;
      *aft = temp;
    }
    pre++;
    aft--;
  }

}

int main()
{
  double arr[20];
  Fill_array( arr, 20 );
  Show_array( arr, 20 );
  Reverse_array( arr, 20 );
  Show_array( arr, 20 );

  return 0;
}
