/*
1．下面是一个简短程序的一部分:
int main()
{
    using namespace std;
    // list of double deduced from list contents
    auto q = average_list({15.4，10.7, 9.0};
    cout << q <<endl;
    // list of int deduced from list contents
    cout << average_list ( {20，30,19,17,45，38}) << endl;
    // forced list of double
    auto ad = average_list<double>({ 'A',70,65.33 });
    cout << ad << endl;
    return 0;
}
请提供函数 average_list()，让该程序变得完整。它应该是一个模板函数，其中的类型参数指定了用作函数参数的initilize_list模板的类型以及函数的返回类型。

*/