# 给定无重复字符的字符串，生成它的所有排列。
void all_permutation(int start, string s) {
	if (start==s.length()) {
		cout << s << endl;
		return;
	}
	for (int i = start; i < s.length(); ++i) {
		swap(s[start], s[i]);
		all_permutation(start+1, s);
		swap(s[start], s[i]);
	}
}
