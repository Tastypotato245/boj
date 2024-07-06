#include <iostream>
#include <string>

using namespace std;

int Answer;

int main(int argc, char** argv)
{
	int T, test_case;

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{
		Answer = 0;
    	bool now_a = false;
    	bool pre_a = false;
    	bool prepre_a = false;
    	char c;
    	int N;
    	cin >> N;
    	for (int i = 0 ; i < N ; ++i)
    	{
    		cin >> c;
    
	    	if (pre_a)
	    		prepre_a = true;
	    	else
	    		prepre_a = false;  
    		if (now_a)
    			pre_a = true;
    		else
    			pre_a = false;
    
    		if (c == 'A')
    		{
    			now_a = true;
    			if (pre_a)
    			{
    				Answer += 2;
    				pre_a = false;
    			}
    			else if (prepre_a)
    			{
    				Answer += 1;
    				prepre_a = false;
    			}
    		}
    		else
    		{
    			now_a = false;
    		}
    	}
    	
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}
