#include<iostream>
using namespace std;
/*
�޸ĳ����嵥7.7�е�3�����鴦������ʹ֮ʹ������ָ���������ʾ���䡣
fill_array()����������ʵ�ʶ�ȡ�˶��ٸ����֣����Ƿ���һ��ָ�룬��ָ��ָ���������λ�ã�
�����ĺ������Խ���ָ����Ϊ�ڶ����������Ա�ʶ���ݽ�β��
*/
double* Fill_array( double* pre, double* aft )
{
  double* cur = pre;
  while( cur <= aft )
  {
    cout << "Enter:";
    cin >> *cur;
    if ( cin.fail() )
    {
      //back
      *cur = '\n';
      if ( cur > pre )
      {
        cur--;
      }
      return cur;
    }
    cur++;
  }
  cur--;
  return cur;
}

void Show_array( double* pre, double* aft )
{
  double* cur = pre;
  while( cur <= aft )
  {
    cout << *cur;
    cur++;
  }
  cout << endl;
}

void Reverse_array( double* pre, double* aft )
{
  while( pre < aft )
  {
    if ( *pre != *aft )
    {
      int temp;
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
  double* last;
  last = Fill_array( &arr[0], &arr[19] );
  Show_array( arr, last );
  Reverse_array( arr, last );
  Show_array( arr, last );

  return 0;
}
