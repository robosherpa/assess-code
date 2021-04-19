#include <unordered_map>
#include <vector>
#include <algorithm>
 
std::string mostRecentLetter(std::unordered_map<std::string, int64_t> data, char c)
{
  std::string retval;
  if(!isalnum(c)) return retval;
  if(data.empty()) return retval;
  std::vector<std::pair<std::string, int64_t>> vdata(data.begin(), data.end());
 
  std::sort(vdata.begin(),vdata.end(), 
            [](std::pair<std::string, int64_t>a, std::pair<std::string, int64_t>b)
            {
                return (a.second > b.second);
             });
 
  for( auto it = vdata.begin(); it != vdata.end(); it++)
  {
      if(it->first.at(0) == c)
      {
          retval = it->first;
          break;
      }
  }
  return retval;
}
