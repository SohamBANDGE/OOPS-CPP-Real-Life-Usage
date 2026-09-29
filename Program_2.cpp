#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct LogEntry {
    string line;
};

int main() {

    ofstream sampleLog("server.log");

    if (!sampleLog) {
        cerr << "Unable to create log file." << endl;
        return 1;
    }

    sampleLog << "2026-10-03 06:00:00 INFO Server started\n";
    sampleLog << "2026-10-03 06:20:00 INFO Cache warmed up\n";
    sampleLog << "2026-10-03 06:40:00 ERROR Payment gateway timeout\n";
    sampleLog << "2026-10-03 07:05:00 WARNING Memory usage high\n";
    sampleLog << "2026-10-03 07:25:00 CRITICAL Node unresponsive\n";
    sampleLog << "2026-10-03 07:40:00 ERROR Cache miss threshold exceeded\n";

    sampleLog.close();

    ifstream logFile("server.log");

    if (!logFile) {
        cerr << "Unable to open server.log." << endl;
        return 1;
    }

    vector<LogEntry> errors;
    string line;

    while (getline(logFile, line)) {

        if (line.find("ERROR") != string::npos ||
            line.find("CRITICAL") != string::npos) {

            errors.push_back({line});
        }
    }

    cout << "=== Critical Log Events ===" << endl;

    for (const auto& entry : errors) {
        cout << entry.line << endl;
    }

    cout << "Total critical events: " << errors.size() << endl;

    return 0;
}