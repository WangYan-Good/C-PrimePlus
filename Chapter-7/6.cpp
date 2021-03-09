#include<iostream>
using namespace std;
/*
��дһ��������ʹ�����к�����
Fill_array()��һ��double��������ƺͳ�����Ϊ����������ʾ�û�����doubleֵ��������Щֵ�洢�������С�
�����鱻�������û������˷�����ʱ�����뽫ֹͣ��������ʵ�������˶��ٸ����֡�
Show_array()��һ��double��������ƺͳ�����Ϊ����������ʾ����������ݡ�
Reverse_array()��һ��double��������ƺͳ�����Ϊ�����������洢�������е�ֵ��˳��ת��
����ʹ����Щ������������飬Ȼ����ʾ���飻��ת���飬Ȼ����ʾ���飻��ת�����г���һ�������һ��Ԫ��֮�������Ԫ�أ�Ȼ����ʾ���顣
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
