string printString(vector<string>arr) {
  
    string solution = "";
    string solution_remaining = "";
    int k = 0;
  
    auto it = max_element(arr.begin(), arr.end(), [](auto const& a, auto const& b) {return a.size() < b.size(); });//return pointer it to the longest string
    auto it2 = min_element(arr.begin(), arr.end(), [](auto const& a, auto const& b) {return a.length() < b.length(); });//return pointer it to the shortest string
  
    int indexOFmax_len = distance(arr.begin(), it);//return the index of the longest string
   int indexOFmin_len = distance(arr.begin(), it2);//return the index of the shortest string
    int max_begin = arr[0].length();
    int max_string_len = arr[indexOFmax_len].length();//the length of the longest string
    int min_string_len = arr[indexOFmin_len].length();//the length of the shortest string
  
  //get the last characters in the Longest String to append them to the original string
    while (k < (max_string_len - max_begin)) {
        solution_remaining.push_back(arr[indexOFmax_len][max_begin+k]);
            k++;
    }
    k = 0;
    cout << solution_remaining << endl;
    cout << "the min len is "<< min_string_len << endl;
 //while loop to add the characters of the whole First String in the array of strings
    while (k < max_begin) {
    
            for(auto V: arr)
            {
          
                if (V.size() > k && V.at(k) != ' ')
                    solution += V.at(k);// we used at not V[k] to throw the outbound exception if the position not found in the vector 
            }
        k++;
    }

    solution.append(solution_remaining);
    return solution;
}
