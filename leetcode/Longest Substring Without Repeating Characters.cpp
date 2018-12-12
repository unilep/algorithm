int lengthOfLongestSubstring(string s) {
	const int len = s.length() - 1;
	int l = 0, r = 0;
	bool visit[150] = { false, };
	int ans = 0;
	while (r <= len && l <= len) {
		char c = s[r];
		if (visit[c]) {
			visit[s[l]] = false;
			l++;
			
		}
		else {
			visit[c] = true;
			ans = max(ans, abs(r - l) + 1);
			r++;
		}
	}
	return ans;
}
