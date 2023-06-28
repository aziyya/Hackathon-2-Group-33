# Hackathon-2-Group-33
This is Group 33's project during Hackathon 2 which is a C++ text-based game titled "Lost Echoes".

Group members :man: :man: :woman: :
1. Muhammad Faiq Fadhlullah ( 160677 )
2. Arif Arman bin Mazlan ( 160466 )
3. Nuraziyatul Najuwa binti Azli ( 160359 ) 

# _LOST ECHOES_ 🧭

## TABLE OF CONTENTS 📂
- [DESCRIPTION](#DESCRIPTION)
- [FEATURES](#FEATURES)
- [HOW TO PLAY](#HOW-TO-PLAY)
- [OBJECT-ORIENTED CONCEPT USED](#OBJECT-ORIENTED-CONCEPT-USED)
- [THE ROLE PLAY OF LINKED LIST](#THE-ROLE-PLAY-OF-LINKED-LIST)
- [GAME DESIGN](#GAME-DESIGN)
- [GAME DEMO VIDEO](#GAME-DEMO-VIDEO)
- [CODES](#CODES)

## DESCRIPTION  📍
"Lost Echoes" is an immersive text-based adventure game that takes players on a captivating journey of self-discovery and survival. Set within the mysterious confines of an enigmatic cave, the game introduces a protagonist who awakens with no memory of their past or how they ended up there.

With the determination, players embark on a quest to unravel the truth behind their imprisonment in the cave and find a way back home.

The game unfolds across four engrossing chapters, each unveiling new layers of the protagonist's identity and purpose. Starting with their awakening in darkness, players navigate the treacherous cave, solving puzzles, avoiding traps, and facing unexpected challenges. Along the way, they discover clues, encounter remnants of previous inhabitants, and gather fragments of memories that shed light on their past.

As the story progresses, the protagonist uncovers a sinister plot and encounters mysterious entities that guard the secrets within the cave's depths. They must harness their unique abilities and make choices that shape their destiny. The game incorporates branching paths, allowing players to make decisions that influence the story's outcome, leading to multiple possible endings.

"Lost Echoes" captivates players with its atmospheric setting, engaging storyline, and the freedom to shape the protagonist's fate. Will you uncover the truth, confront your captor, and find your way back home, or will the echoes of the cave forever haunt your journey? The answers lie within the depths of the darkness, waiting to be discovered.

## FEATURES  🪄
Some features of the game :
- **Character Customization**: 'Lost Echoes' allows players to name the protagonist with whatever name they like.

- **Exploration**: This game is set in a detailed cave environment with multiple interconnected rooms and passages to explore. Players can navigate through the cave, discovering hidden areas, secrets, and clues.

- **Interactive NPCs**: Introduce non-player characters (NPCs) along the journey who can provide quests, information, or aid the player in their escape. Players can engage in conversations and make choices that impact the story.

- **Combat System**: Implement turn-based or real-time combat mechanics for encounters with enemies and the powerful individual guarding the exit.
  
- **Puzzle Solving**: Include various puzzles and challenges throughout the cave, requiring players to possess mathematics knowledge and guessing ability.

- **Item Collection**: Allow players to discover and collect items during their exploration. These items can be used to solve puzzles and unlock new areas.

- **Resource Management**: Introduce a resource management aspect where players need to manage their character's health, stamina, and inventory space. Finding items that can give benefits along the journey of the escape.
  
- **Save and Load Management** : Save and load feature is implemented to allow players to save their progress and later resume the game from where they left off.

- **Choice-driven Outcomes** : Players will be able to make choices at certain points in the game. Each choice will play a role in determining the story that the player will experience. So, each playthrough is a new experience that the player can explore and experience.

## INCOMPLETE FEATURES 
Feature we wish to implement in this game :
- Character Customization : Implementing character that can be customized by including different class of players such as warriors, mage, thief and so on. Each class character possess unique back story and abilities.

## HOW TO PLAY  🎮
‘Lost Echoes’ is a text-based adventure game whereby the goal of this game is to uncover the truth about the player’s identity and the secrets hidden within while trying to escape the cave. 

**Start of the game:**
At the start of the game, the menu list is displayed. 
Type 1 to start the game, 2 to display credits, 3 to display load game and 4 to exit game.
Read dialogue carefully, pay attention to the surroundings, and use wit and intuition to progress and overcome challenges.

**Chapter 1:**
In chapter 1, begin in a dark cave and the character tries to make sense of the surrounding, the player will get to give the name to the character and some items can be collected. Then, the player will have to choose within 3 paths to go. Each path has its own story and challenges. It is better for the player to go to all paths.
After completing the challenges, the player will move on to Chapter 2.

**Chapter 2:**
In chapter 2, the player will uncover a part of the character’s story by exploring further into the cave and investigating the abandoned area while finding items or remnants that trigger memories of the character’s past, revealing glimpses of their true identity. Here, the player meets NPC (Non-Player Character). The NPC will either help uncover the truth hidden or not, depends on the player’s choice.
After completing the challenges, the player will move on to Chapter 3.

**Chapter 3:**
In chapter 3, the player will meet more NPCs and complete the challenges dared by them. For each challenge passed, there are benefits given. In this chapter, all of the truth will be uncovered.

**Chapter 4:**
In chapter 4, the player will encounter a powerful individual assigned to prevent them from leaving the cave. The player engages in a battle against this formidable enemy, utilizing their combat skills and any assistance the player has acquired throughout their journey. Defeating the individual will lead to the character’s escape from the cave.

As the game is text-based, so the player should immerse themself in the descriptive narratives and let their imagination bring the world of "Lost Echoes" to life. Enjoy the journey of self-discovery, uncovering the mysteries that lie within the depths of the cave.

## OBJECT-ORIENTED CONCEPTS USED  📜
“Lost Enchoes” game use of several object-oriented concepts in the development of the game. Here are some of the key object-oriented concepts utilized:

- **Classes and Objects:**
In this game, we defines several classes such as Inventory, Item, Player, SaveManager, ChapterManager etc. These classes serve as blueprints for creating objects that encapsulate data and behavior related to specific entities in the game.
For example, the Item class represents a game item and encapsulates its attributes like item name, item uses, and level item. The Inventory class represents the player's inventory and provides methods to manage items within it. The Player class encapsulates the player's data and actions, such as adding items to the inventory and setting the current chapter.
By using classes, the code achieves encapsulation and modularity, allowing different entities and functionalities to be implemented and maintained separately.

- **Encapsulation:**
Encapsulation is a fundamental principle of object-oriented programming, and it is exemplified throughout the code. Each class encapsulates its own data and provides methods to interact with that data, hiding the internal details and implementation from other parts of the program.
For instance, the Player class encapsulates the player's data, such as their name, current chapter, and inventory. It provides public methods like addItemToInventory, setCurrentChapter, and viewItemsForFile to control access to and manipulation of the player's data. The internal implementation details of how the data is stored and managed are hidden within the class.
Encapsulation promotes data abstraction, information hiding, and code organization, enhancing code maintainability and reusability.

- **Composition:**
Composition is a form of object composition where objects are combined to create more complex objects. Composition could be utilized to build complex game objects by combining simpler objects.
For example,  Fighter class has composition of Player class where Fighter class can use any function in Player class in their class. In this game, Fighter class use player.viewItemsFromInventory function in his their own function. This composition approach allows for flexible and modular construction of complex objects.

- **Modularity and Code Organization:**
Object-oriented programming encourages the modular organization of code, dividing it into smaller, manageable components. Each class represents a separate module with its own responsibilities, reducing complexity and improving code maintainability.
For this game, classes like Inventory, Item, Player, SaveManager, and ChapterManager encapsulate specific functionalities and data related to their respective responsibilities. This modular structure allows for easier comprehension, maintenance, and modification of the codebase.

- **Object Relationships:**
Object-oriented programming allows for expressing relationships between objects, such as associations, aggregations, and dependencies. These relationships define how objects interact with each other to fulfill specific functionalities.
In this game, various relationships can be observed. For instance, the Inventory class has a linked list of Item objects to represent the player's inventory. The SaveManager class interacts with the Player class to save and load game states. These relationships enable the code to establish connections and dependencies between different objects, facilitating communication and data exchange.

- **Abstraction:**
Abstraction is the process of identifying essential features and behaviors while hiding unnecessary details. Object-oriented programming allows for creating abstract classes and interfaces that define common characteristics and operations without specifying their implementation.
While the provided code doesn't explicitly showcase abstraction, it could be employed to define abstract classes or interfaces for game entities with shared attributes or behaviors. This abstraction allows for defining a common contract that derived classes must adhere to, promoting consistency and providing a clear structure for the codebase.
These object-oriented concepts collectively contribute to the development of a well-structured, modular, and maintainable game. They facilitate code reuse, encapsulation, flexibility, and extensibility, ultimately resulting in a more organized and scalable project.

## THE ROLE PLAY OF LINKED LIST  📜
For this “Lost Echoes” game, we use linked-list data structure to manage two important aspects of the game which is Story Progression and the Player’s Inventory.
- **Story Progression:**
The SaveManager class is responsible for handling the save and load functionality of the game. It uses a linked list to store the game data for each save point. Each node in the linked list, represented by the SaveNode struct, contains the player's data for a particular save.
When the saveGame function is called, a new SaveNode is created, and the player's data is assigned to it. The new node is then appended to the end of the linked list. Additionally, the game data is serialized and saved to a file using an ofstream.
On the other hand, the loadGame function takes an index parameter representing the desired save point to load. It reads the serialized game data from the corresponding file using an ifstream. The data is then deserialized and used to update the player's current chapter, name, and inventory. The deserialized inventory items are added to the player's inventory by creating new Item objects and using the addItemToInventory function.
The linked list structure allows for the efficient management of multiple save points, as each node represents a distinct save state. The traversal of the linked list enables the loading of specific save points by accessing the desired node based on the provided index.

- **Player's Inventory:**
The Inventory class is responsible for managing the player's inventory using a linked list. Each node in the linked list, represented by the Node struct, corresponds to an item in the inventory.
The addItem function adds a new item to the inventory by creating a new node with the provided Item object and appending it to the end of the linked list. This operation ensures that new items are efficiently inserted at the end of the list, allowing for dynamic storage of the inventory.
The removeItem function removes a specific item from the inventory. It traverses the linked list, searching for the item to remove. Once found, it updates the pointers of the adjacent nodes to bypass the node containing the item. The memory allocated for the removed item and the node is then freed.
The viewInventory function iterates through the linked list and displays the information of each item in the inventory. This allows the player to see the contents of their inventory, such as the item's name, usage, and level.
Other functions like searchItem and reducedItem provide additional functionality related to item management in the inventory. The searchItem function searches for a specific item in the inventory by traversing the linked list and comparing the item's name. The reducedItem function decreases the usage of a specific item in the inventory. If the usage reaches zero, the item is removed from the inventory using the removeItem logic.
By utilizing a linked list for the player's inventory, the code enables efficient insertion, removal, searching, and updating operations on the items. The linked list structure allows for flexibility in managing the inventory and ensures optimal performance even as the inventory size changes dynamically.
Overall, the linked list data structure plays a crucial role in managing both the story progression and the player's inventory in the game. It provides an efficient and flexible mechanism for storing, organizing, and manipulating data related to the game's progress and the items in the player's possession.

## GAME DESIGN  💻
![Lost Echoes Game Design](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/Lost%20Echoes.png)

## GAME DEMO VIDEO  📹
[Lost Echoes Demo Video](https://youtu.be/XsxAONf70Og)

## CODES  🖥️
Player data   
[Header file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/PlayerData.h)   
[Implementation file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/PlayerData.cpp)   
Save Manager   
[Header file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/save_manager.h)   
[Implementation file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/save_manager.cpp)   
Chapter Manager   
[Header file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/chapter_manager.h)   
[Implementation file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/chapter_manager.cpp)   
Inventory   
[Header file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/Inventory.h)   
[Implementation file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/Inventory.cpp)   
Item   
[Header file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/Item.h)   
[Implementation file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/Item.cpp)   
Fun Game   
[Header file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/FunGame.h)   
[Implementation file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/FunGame.cpp)   
Fighting   
[Header file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/Fighting.h)   
[Implementation file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/Fighting.cpp)   
Level 1   
[Header file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/Level1.h)   
[Implementation file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/Level1.cpp)    
Level 2   
[Header file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/Level2.h)    
[Implementation file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/Level2.cpp)    
Level 3   
[Header file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/Level3.h)    
[Implementation file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/Level3.cpp)    
Level 4   
[Header file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/Level4.h)   
[Implementation file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/Level4.cpp)   
Main    
[Implementation file](https://github.com/aziyya/Hackathon-2-Group-33/blob/main/main.cpp)    

------------------------------------------
Special thanks to :
- Dr. Teh Je Sen
- Dr. Nur Hana binti Samsudin
- Dr. Siti Hazyanti binti Mohd Hashim
------------------------------------------
