 //░░░░░░░░░░ 
//░░░░░░░░▄▐░▄▄█████▄▄     
//░░░░░░▄█████████████▄▀▄▄▄▄▄    
//░░░░████▐█████▌████████▌█████▌
//░░░████▌█████▌█░████████▐▀██▀
//░▄█████░█████▌░█░▀██████▌█▄▄▀▄
//░▌███▌█░▐███▌▌░░▄▄░▌█▌███▐███░▀
//▐░▐██░░▄▄▐▀█░░░▐▄█▀▌█▐███▐█
//░░███░▌▄█▌░░▀░░▀██░░▀██████▌
//░░░▀█▌▀██▀░▄░░░░░░░░░███▐███
//░░░░██▌░░░░░░░░░░░░░▐███████▌
//░░░░███░░░░░▀█▀░░░░░▐██▐███▀▌
//░░░░▌█▌█▄░░░░░░░░░▄▄████▀░▀    
//░░░░░░█▀██▄▄▄░▄▄▀▀▒█▀█░▀
//░░░░░░░░░▀░▀█▀▌▒▒▒░▐▄▄
//░░░░░░░░▄▄▀▀▄░░░░░░▄▀░▀▀▄▄
//░░░░░░▄▀░▄▀▄░▌░░░▄▀░░░░░░▄▀▀▄
//░░░░░▐▒▄▀▄▀░▌▀▄▄▀░░░░░░▄▀▒▒▒▐
//░░░░▐▒▒▌▀▄░░░░░▌░░░░▄▄▀▒▐▒▒▒▒▌
//░░░▐▒▒▐░▌░▀▄░░▄▀▀▄▀▀▒▌▒▐▒▒▒▒▐▐
//░░░▌▄▀░░░▄▀░█▀▒▒▒▒▀▄▒▌▐▒▒▒▒▒▌▌
//░░▄▀▒▐░▄▀░░░▌▒▐▒▐▒▒▒▌▀▒▒▒▒▒▐▒▌
string isBalanced(string s) {
    unordered_map<char,int> brkts={{'(',-1},{')',1},{'[',-2},{']',2},{'{',-3},{'}',3}};
    stack<char> st;
    for(auto v : s)
    {
        if(brkts[v]<0)
        st.push(v);
        else
        {
            if(st.empty()) return "NO";
            else if(brkts[v]+brkts[st.top()]==0)
                  st.pop();
                  else return "NO";
        
        }
    }
    if(st.empty()) return "YES";
    else return "NO";

}