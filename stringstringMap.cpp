/*

String String Map 

11/02/24

@AJ Enrique Arguello

Objectives: Create a string string Map that will connect Relationship ("Family", "Co-Worker", "Friend") to specific People ("names")

  Add a name to each category

  Display categories and names

*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    std::map<std::string, std::string> relationshipPeople; // string string map initialization
    // map contents relationship->name
    relationshipPeople["Family"] = "John Scott";
    relationshipPeople["Co-Worker"] = "Mike Handson";
    relationshipPeople["Friend"] = "Alex Wock";
    // auto print, prints both relationship/name
    for (auto print:relationshipPeople) {
      cout << "Relationship: " << print.first << " || Name: " << print.second << endl;
    }

    return 0;
}