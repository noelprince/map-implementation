#include "object.h"
#include "string.h"
#include "ObjVector.h"
#include "ObjVectorArray.h"

class Map : public Object {
public:
  ObjVectorArray* ovv_;    //the array of arrays that will contain everything
  

  // Constructor
  Map() {
  }


  // Constructor that copies existing Map
  Map(Map* const m);

  // Destructor
  ~Map();

  // Add an Object to the map with a String key
  void put(Object* key, Object* val) {
    String* s_key = dynamic_cast<String*>(key);
    String* s_val = dynamic_cast<String*>(val);
    
  }

  // Remove remove the value tied to the key from the map. Removes the key as well.
  Object* remove(Object* key);

  // Gets the value associated with the key
  Object* get(Object* key);

  // Clears all the keys and values from the map
  void clear();

  // Is the key in the map?
  bool containsKey(Object* key);

  // Get the number of keys in the map
  size_t size();

  // Is this map equal to the Object?
  bool equals(Object* o);

  // Get the hash of the map object
  size_t hash();
  
};
