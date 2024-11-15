#include <bits/stdc++.h>
using namespace std;

int main() {
    int fileCount = 5;       // 設定要生成的檔案數量

    random_device rd;  // initialize
    mt19937 gen(rd());
    uniform_int_distribution<> value(1,1000); // range

    for (int fileNum = 1; fileNum <= fileCount; ++fileNum) {
        string fileName = "資料夾路徑" + to_string(fileNum) + ".in"; //filename
        ofstream outFile(fileName);

        if (outFile.is_open()) {
            int a,b;
            a=value(gen),b=value(gen); //generate
            outFile << a << " " << b << endl; //output
            outFile.close();
            cout << "檔案 " << fileName << " 已生成成功！" << endl;
        } else {
            cerr << "無法開啟檔案 " << fileName << "！" << endl;
        }
    }
    return 0;
}
