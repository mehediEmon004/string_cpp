int find(string str, string substr){
    int strlen=str.size();
    int sublen=substr.size();
    for(int i=0; i<strlen-sublen+1; i++){
        int k=i,j;
        for(j=0; j<sublen; j++){
            if(substr[j]!=str[k]) break;
            k++;
        }
        if(j==sublen) return i+1;
    }
}
