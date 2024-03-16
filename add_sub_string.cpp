void addSubStr(string &str, string substr, int pos){
    int strlen=str.size();
    int sublen=substr.size();
    string s;
    int i;
    for(i=0; i<pos; i++){
        s+=str[i];
    }
    for(i=0; i<sublen; i++){
        s+=substr[i];
    }
    for(int i=pos; i<strlen; i++){
        s+=str[i];
    }
    str = s;
}
