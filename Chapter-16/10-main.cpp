/*
请按如下方式修改程序清单16.9（vect3.cpp）。
a. 在结构Review中添加成员price。
b. 不使用vector<Review>来存储输入，而使用vector<shared_ptr<Review>>。别忘了，必须使用new返回的指针来初始化shared_ptr。
c. 在输入阶段结束后，使用一个循环让用户选择如下方式之一显示书籍：按原始顺序显示、按字母表顺序显示、按评级升序显示、按评级降序显示、按价格升序显示、按价格降序显示、退出。
下面是一种可能的解决方案：获取输入后，再创建一个shared_ptr矢量，并用原始数组初始化它。
定义一个对指向结构的指针进行比较的operator<()函数，并使用它对第二个矢量进行排序，让其中的shared_ptr按其指向的对象中的书名排序。
重复上述过程，创建按rating和price排序的shared_ptr矢量。
请注意，通过使用rbegin()和rend()，可避免创建按相反的顺序排列的shared_ptr矢量。
*/
#include "10.h"
int main()
{
    std::vector <Review> books;
    Review temp;
    while( FillReview( temp ) )
    {
        books.push_back(temp);
    }
    if( books.size() > 0 )
    {
        std::cout << "Thank you. You entered the following "
                  << books.size() << " ratings:\n "
                  << "Rating\tBook\n";
        std::for_each( books.begin(), books.end(), ShowReview );

        std::sort( books.begin(), books.end() );
        std::cout << "Sorted by title: \nRating\tBook\n";
        std::for_each( books.begin(), books.end(), ShowReview );

        std::random_shuffle( books.begin(), books.end() );
        std::cout << "After shuffling:\nRating\tBook\n";
        std::for_each( books.begin(), books.end(), ShowReview );
    } else {
        std::cout << "No entries.";
        std::cout << "Bye.\n";
        return 0;
    }
}