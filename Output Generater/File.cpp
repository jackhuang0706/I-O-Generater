#include <bits/stdc++.h>
using namespace std;

int main() {
    int fileCount = 5;  // 設定需要處理的檔案數量

    string downloadPath = "資料夾路徑";

    for (int fileNum = 1; fileNum <= fileCount; fileNum++) {
        string inputFileName = downloadPath + to_string(fileNum) + ".in";
        string outputFileName = downloadPath + to_string(fileNum) + ".out";

        ifstream inFile(inputFileName);
        ofstream outFile(outputFileName);

        if (inFile.is_open() && outFile.is_open()) {
            int a,b;
            inFile >> a >> b;
            outFile << a+b << endl;
            inFile.close();
            outFile.close();
            cout << "檔案 " << outputFileName << " 已成功生成！" << endl;
        } else {
            cerr << "無法開啟檔案 " << inputFileName << " 或 " << outputFileName << "！" << endl;
        }
    }
    return 0;
}
