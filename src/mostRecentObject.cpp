#include <unordered_map>
#include <vector>
#include <algorithm>
 
 /**
 * A function that returns the most recent object values for an unordered map
 * to a matching character
 *
 * @param data Unordered map of pair of string and integer.
 * @param c First character in the objects value to look for a match
 * @return if there is an object starting with letter c:
 * 			return string value of the most recent object starting with letter c 
 *		otherwise:
 *			return empty string
 */
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
