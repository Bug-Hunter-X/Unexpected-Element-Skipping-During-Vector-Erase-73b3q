std::vector<int> vec; 
 for (int i = 0; i < 10; ++i) {
     vec.push_back(i); 
 }
 
 // Correct way to remove element 5
 for (auto it = vec.begin(); it != vec.end(); ++it) {
     if (*it == 5) {
         it = vec.erase(it); 
     } 
 }