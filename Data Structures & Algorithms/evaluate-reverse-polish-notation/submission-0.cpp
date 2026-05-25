class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        string op = tokens.back();
        tokens.pop_back();
        if(op=="-"){
            int r = evalRPN(tokens);
            int l = evalRPN(tokens);
            return l - r;
        }
        else if(op=="+"){
            return evalRPN(tokens) + evalRPN(tokens);
        }
        else if(op=="*"){
            return evalRPN(tokens) * evalRPN(tokens);
        }
        else if(op=="/"){
            int r = evalRPN(tokens);
            int l = evalRPN(tokens);
            return l / r;
        }
        else{
            return stoi(op);
        }

    }

};
