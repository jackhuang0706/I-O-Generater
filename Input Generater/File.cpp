#include <bits/stdc++.h>
using namespace std;

int main() {
    int fileCount = 5;       // 設定要生成的檔案數量
    int maxValue = 100;      // A 和 B 的最大值

    srand(time(NULL));  // 初始化隨機種子

    for (int fileNum = 1; fileNum <= fileCount; ++fileNum) {
        string fileName = "資料夾路徑" + to_string(fileNum) + ".in";
        ofstream outFile(fileName);

        if (outFile.is_open()) {
            int a,b;
            a=rand()%maxValue;
            b=rand()%maxValue;
            outFile << a << " " << b << endl;
            outFile.close();
            cout << "檔案 " << fileName << " 已生成成功！" << endl;
        } else {
            cerr << "無法開啟檔案 " << fileName << "！" << endl;
        }
    }
    return 0;
}
