# COMP313 Assignment 1 
## Stelio Brooky

## Super Jesús

[Gameplay video](https://youtu.be/4N8WNXYDRj0)

## Description

### Main mechanic
Super Jesús is a 3d, third person, resource management, collectathon style game. The main character for the game is my pet lizard, named Jesús (humanoid model). The main goal of the game is 
to go around each level and collect enough insects to satisfy the given quota (10 insects on each level). The main mechanic of the game is the basking mechanic. As a cold-blooded reptile, 
all your energy comes from basking in the heat. In this game your energy bar will constantly be depleting unless you are standing underneath the basking lamps that are scattered across the
levels. This is how the game incorporates resource management, because now you need to concern yourself about how much energy you are wasting whilst searching for insects. In this game the
challenges that would restrict you from finding all of the insects before running out of energy involve a maze like layout and evasive insects. In the future, if i was the develop this game 
further, I would incorporate more puzzle solving aspects so that there would be time preassure applied to solving puzzles in the world.

### Development difficulties
Incorporating the C++ code into an unreal engine blueprint node function was troublesome. This was because i was not used to going between Visual studio and unreal engine and was having
trouble with programmin the function to be blueprint callable. Storage space was another major development difficulty. The space required for rendering assets made me refrain from importing
or creating my own assets as I worried that my computer would not be able to handle it. This is why i compromised by not having a lizard model, but instead having a humanoid with textures
that resemble that of my pet lizard.

### Most interesting
A favourite part of my game was the maze design in the first level. Although it is a very small scale maze, it does well in providing an almost somewhat claustrophobic environment when in
between the maze walls. Although this may seem unpleasent, the satisfaction that the player could gain from reaching a safe basking spot after escaping the tight walls of the maze is very
redeeming. Another really interesting part of my game is how the cricket insects behave on the second level. The drastic change from narrow maze walls to a large open plain provides initial
intrigue for the player. But as the player might suspect that it is substantionally easier, they then would approach the cricket but the cricket, unlike the mealworm, moves around in a
spiratic fashion. This is thanks to programming some random numbers into a vector format in C++ that gets added onto the current location for the crickets. 

### Reflection on Learning
Initially I was very overwhelmed with all of the new systems i would be using. I had never previously coded in C++, nor had i ever used unreal engine before. Initially i tried by diving
straight into the deep end and try and program things that connect to unreal engine but i very quickly learned that that was not wise for both the quality of the project and my own sanity.
Instead i found alot of value in going throuhg tutorials for even the most basic of things. Initially i relied on helpful tutorial to help guide me with displays and the energy gauge 
depleting over time. This was very helpful as giving me a base of general experience that then could be applied to my completley own blueprints. This includes the entirety of interactions
with the insects (collisions, the rotations, movement) as all of those were done by myself without the guidance of tutorials. This taught me that it is valuable to get assistance when you
have a blank slate, as guidance for getting you on the right track could make reaching your goals a lot more feasible in a much more reasonable timeframe.

A though thing to learn was how to implement animations. For this assignment, given that i had settled on using the humanoid mannequin model, there wasn't too much character animation i
needed to implement. Hoewever i did want the character to feel a bit more lively and in the moment. So i wanted to adjust the idle animation to show a more natural character appearance.
This was a fun expereince to slightly adjust the arm and head movements to better suit the character motivation, however applying to changes to the existing mesh was not an easy task. Since
UE4, they removed the straightforward apply option to the animations. In UE5, Keying in the animation was more important and there wasn't many resources to figure out how to apply the animation
online. I learened that it pays to be patient with the interface of an engine.

I have never coded in C++ in the past. This was worrysome as a blueprint function written in C++ was a requirement. I didn't know the structure for how classes in C++ work. Thankfully there
was the existence of support from friends and Github Copilot that could help guide me in the right direction. In order to get a decent base undertanding with C++, the first node i implemented
was the very basic basking function which incrimented your energy when you sat under a basking light. This was very basic code to understant but was a good starting point as i also had
to learn how to make it completely blueprint readable. Once i had succesfully implemented this function node, I had gained the confidence to do another node in C++. So i decided to make a
function that had the insects move away from the player. Doing this in c++ allowed me to mess around with random numbers and other numbers to make the expereince alot more personalised.
This was a good learning experience because it showed me how powerful growing a little bit of confidence could be and how it possitivley effects future work. 

The final key learning that i took from this expereience was realising the value of adaptability. Initially my plans for this game were quite different from what i ended up developing.
At first i had the idea of this game being more of a puzzle game. I wanted to have the player have to think about what actions they need to take in order to progress moreso than they have
to do in my submitted game. Eventually i felt that with the energy winding down, something a little bit more fast pace was fitting for the pace that the energy depleted. Thats when I adapted
to change and decided to make it primarily a maze navegation game. this makes the player think quick on their toes with the backdrop of a depleting energy motvating them. In future projects
in any environment, being so stubbornly attached to ideas that may not be as flash as initially thought, could be dangerous to the quality of the project. Instead I need to be adaptable and
willing to change if i want to make the best out of major projects. 
