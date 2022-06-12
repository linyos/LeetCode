class Solution {
public:
	string restoreString(string s, vector<int>& indices) {

		int n = s.length();
		char * temp = new  char[n];
		for (int i = 0; i < n; i++)
		{
			temp[indices[i]] = s[i];
		}

		for (int i = 0; i < n; i++)
		{
			s[i] = (temp[i]);
		}
		return s;
	}
};