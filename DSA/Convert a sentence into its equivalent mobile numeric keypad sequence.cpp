string printSequence(string S)
{
    //code here.
    string ans = "";
    map<char, int> numPad;
    numPad['A'] = 2;
    numPad['B'] = 22;
    numPad['C'] = 222;
    numPad['D'] = 3;
    numPad['E'] = 33;
    numPad['F'] = 333;
    numPad['G'] = 4;
    numPad['H'] = 44;
    numPad['I'] = 444;
    numPad['J'] = 5;
    numPad['K'] = 55;
    numPad['L'] = 555;
    numPad['M'] = 6;
    numPad['N'] = 66;
    numPad['O'] = 666;
    numPad['P'] = 7;
    numPad['Q'] = 77;
    numPad['R'] = 777;
    numPad['S'] = 7777;
    numPad['T'] = 8;
    numPad['U'] = 88;
    numPad['V'] = 888;
    numPad['W'] = 9;
    numPad['X'] = 99;
    numPad['Y'] = 999;
    numPad['Z'] = 9999;
    numPad[' '] = 0;
    for(int i=0;i<S.size();i++){
        ans += to_string(numPad[S[i]]);
    }
    return ans;
}