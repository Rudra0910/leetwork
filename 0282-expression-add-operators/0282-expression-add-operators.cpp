class Solution {
public:
    vector<string> addOperators(string num, int target) {
        vector<string> res;
        string path;
        backtrack(num, target, 0, 0, 0, path, res);
        return res;
    }

private:
    void backtrack(const string& num, int target, int index,
                   long long value, long long prev,
                   string& path, vector<string>& res) {
        int n = num.size();
        if (index == n) {
            if (value == target) {
                res.push_back(path);
            }
            return;
        }

        int pathLen = path.size();

        for (int i = index; i < n; i++) {
            // skip numbers with leading zero
            if (i > index && num[index] == '0') break;

            string curStr = num.substr(index, i - index + 1);
            long long cur = stoll(curStr);

            if (index == 0) {
                // first operand, no operator before it
                path += curStr;
                backtrack(num, target, i + 1, cur, cur, path, res);
                path.resize(pathLen);
            } else {
                // try +
                path += "+" + curStr;
                backtrack(num, target, i + 1, value + cur, cur, path, res);
                path.resize(pathLen);

                // try -
                path += "-" + curStr;
                backtrack(num, target, i + 1, value - cur, -cur, path, res);
                path.resize(pathLen);

                // try *
                path += "*" + curStr;
                backtrack(num, target, i + 1, value - prev + prev * cur, prev * cur, path, res);
                path.resize(pathLen);
            }
        }
    }
};