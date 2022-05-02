vector<string>fiZBuzz(int num) {
   vector<string>str;
    unordered_map<int, string> mp = { 
        {15, "FizzBuzz"},
        {5, "Buzz"},
        {3, "Fizz"}
                            
                             };
    unordered_map<int, string>::iterator it;
    bool check = false;
    for (int i = 1; i <= num; i++) {
       
        for (auto item : mp) {
       
            if ((i % (item.first)) == 0) {
               str.push_back(static_cast<string>(to_string(i)) + item.second);
               check = true;
                break;
            }
            else {
                check = false;
            }
            
        }
            if (!check) 
            str.push_back(static_cast<string>(to_string(i)));
     
    }
    return str;
}
