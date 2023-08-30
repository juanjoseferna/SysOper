#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <sstream>

using namespace std;


map<string, int> memory;

int acu = 0;
string icr; 

vector<string> split(const string &s, char delimiter) {
    vector<string> tokens;
    istringstream iss(s);
    string token;
    while (getline(iss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

void run(const vector<string> &instrucciones) {
    string opcode = instrucciones[0];
    if (opcode == "SET") {
        string dest = instrucciones[1];
        int value = stoi(instrucciones[2]);
        memory[dest] = value;
    } else if (opcode == "LDR") {
        string src = instrucciones[1];
        acu = memory[src];
    }else if (opcode == "INC") {
        string dest = instrucciones[1];
        memory[dest] ++;
    }else if (opcode == "DEC") {
        string dest = instrucciones[1];
        memory[dest] --;
    } else if (opcode == "ADD") {
        string dest = instrucciones[1];
        acu += memory[dest];
    } else if (opcode == "STR") {
        string dest = instrucciones[1];
        memory[dest] = acu;
    } else if (opcode == "PAUSE"){
        string trash;
        for (const auto &pair : memory) {
            cout << "Mem: " << pair.first << ", Val: " << pair.second << endl;
        }
        cout << "acu: " << acu << endl;
        cout << "icr: " << opcode << endl;
        cin >> trash;
    } else if (opcode == "SHW") {
        if (instrucciones[1] == "ACC"){
            cout << acu << endl;
        } else if (instrucciones[1] == "ICR"){
            cout << icr << endl;
        }else{
            string src = instrucciones[1];
            cout << memory[src] << endl;
        }
    }
    icr = opcode;

}

int main() {
    ifstream inputFile("programa1.txt");
    string line;
    
    if (!inputFile.is_open()) {
        cerr << "Unable to open the file." << endl;
        return 1;
    }
    while (getline(inputFile, line)) {
        vector<string> tokens = split(line, ' ');
        run(tokens);
    }
    
    inputFile.close();
    
    return 0;
}
