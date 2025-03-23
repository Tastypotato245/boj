// https://www.acmicpc.net/problem/1208
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int	begin_year, begin_month, begin_day;
int	end_year, end_month, end_day;

bool isLeapYear(int year)
{
	return ((year % 4 == 0 && year % 100 != 0)
			|| year % 400 == 0);
}

int day_about_month(int year, int month)
{
	if (month == 1) return 31;
	if (month == 2) return (isLeapYear(year) ? 29 : 28);
	if (month == 3) return 31;
	if (month == 4) return 30;
	if (month == 5) return 31;
	if (month == 6) return 30;
	if (month == 7) return 31;
	if (month == 8) return 31;
	if (month == 9) return 30;
	if (month == 10) return 31;
	if (month == 11) return 30;
	if (month == 12) return 31;
	return 0;
}

void Solve()
{
	cin >> begin_year >> begin_month >> begin_day;
	cin >> end_year >> end_month >> end_day;

	if (end_year - begin_year > 1000
			|| (end_year - begin_year == 1000
				&& begin_month * 100 + begin_day <= end_month * 100 + end_day))
	{
		cout << "gg";
		return ;
	}

	int d_day = 0;

	// 날짜가 시작일이 더 큰 경우
	if (end_day < begin_day)
	{
		d_day += day_about_month(begin_year, begin_month) - begin_day + end_day;
		// 그 다음날의 end_day날짜로 맞춰주면서 한 달을 추가함
		begin_month++;
		if (begin_month == 13)
		{
			begin_month = 1;
			++begin_year;
		}
	}
	else
	{
		d_day += end_day - begin_day;
	}

	// 달이 시작 달보다 더 큰 경우
	if (end_month < begin_month)
	{
		for (int i = begin_month ; i < end_month + 12 ; ++i)
		{
			d_day += day_about_month(begin_year + (i >= 13), i);
		}
		// 그 다음 년도의 end_month날짜로 맞춰주면서 일 년을 추가함
		++begin_year;
	}
	else
	{
		for (int i = begin_month ; i < end_month ; ++i)
		{
			d_day += day_about_month(begin_year, i);
		}
	}

	for (int i = begin_year ; i < end_year ; ++i)
	{
		d_day += (isLeapYear(i) ? 366 : 365);
	}
	cout << "D-" << d_day;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
