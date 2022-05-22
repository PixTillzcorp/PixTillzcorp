<!-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# ############################################################################ #
# _____/\/\/\/\/\___/\/\____________/\/\/\/\/\/\_/\/\__/\/\__/\/\_____________ #
# ____/\/\____/\/\_______/\/\__/\/\____/\/\___________/\/\__/\/\__/\/\/\/\/\__ #
# ___/\/\/\/\/\___/\/\____/\/\/\______/\/\_____/\/\__/\/\__/\/\______/\/\_____ #
# __/\/\_________/\/\____/\/\/\______/\/\_____/\/\__/\/\__/\/\____/\/\________ #
# _/\/\_________/\/\__/\/\__/\/\____/\/\_____/\/\__/\/\__/\/\__/\/\/\/\/\_____ #
# ############################################################################ #
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ -->

<!-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~[ Introduction ]~~~~~~~~~~~~~~~~~~~~~~~~~~~~ -->
<h1 align="center">Hi 👋, I'm <img align="center" src="pixtillz.svg" width="120" height="80"/></h1>
<h3 align="center">As a programmer i'm the <em>'architecture guy'</em> !</h3>

<!--For the next elements all the logic is inside the .svg files -->
<div align="center">
  <a href="https://discordapp.com/users/232211356730785792/" target="_blank" rel="noreferrer">
    <img src="discord_profile.svg" width="600px" height="80">
  </a>
</div>
<div align="center">
  <a href="https://discord.gg/w9FxSX7" target="_blank" rel="noreferrer">
    <img src="discord_server.svg" width="600px" height="80">
  </a>
</div>
<div align="center">
  <a href="https://www.twitch.tv/pixtillz" target="_blank" rel="noreferrer">
    <img src="twitch.svg" width="600px" height="80">
  </a>
</div>
<!-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ -->

<h1></h1> <!-- Transition bar -->

<!-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~[ Description ]~~~~~~~~~~~~~~~~~~~~~~~~~~~~ -->

#### How I describe myself through a C++ class ...

```C++
  class PixTillz : public Programmer {
  public:
    typedef Programmer              inherited;
    typedef std::list<std::string>  strlist;

    std::string                     name;
    std::string                     nationality;
    std::string                     intro;
    strlist                         langages;
    strlist                         hobbies;

    virtual ~PixTillz() {}
    PixTillz(PixTillz const &cpy) : inherited(static_cast<inherited const &>(cpy)),
                    name(cpy.name), nationality(cpy.nationality),
                    intro(cpy.intro), langages(cpy.langages),
                    hobbies(cpy.hobbies) {}
    PixTillz &operator=(PixTillz const &cpy) {
      static_cast<inherited &>(*this) = static_cast<inherited const &>(cpy);
      name = cpy.name;
      nationality = cpy.nationality;
      intro = cpy.intro;
      langages = cpy.langages;
      hobbies = cpy.hobbies;
      return *this;
    }

    PixTillz() : inherited("42 Paris"), name("PixTillz"), nationality("French"),
          intro("I'm a creative person who loves to explore new skill "
          "fields. Motivated to become an active member of WEB3 development"
          ", I am currently working on a DeFi bot with my friends ! I like "
          "to write (sexy-looking) code that scales well !"),
          langages{ "C", "C++", "python", "Brainf_ck", "Solidity" },
          hobbies{ "Basket Ball", "Crypto trading", "Mechanics & Handiwork",\
              "Astronomy & Rockets", "Competitive video games",\
              "Terminal game development with ncurses"} {
    }
  };
```
#### ... inside 'description.cpp' that you can compile with the following command ...

```
  g++ -std=c++11 description.cpp
```

#### ... and get my description as an output 🌱

```
My Pseudo is 'PixTillz' and I'm a French developer from '42 Paris' !
I'm a creative person who loves to explore new skill fields.
Motivated to become an active member of WEB3 development,
I am currently working on a DeFi bot with my friends !
I like to write (sexy-looking) code that scales !
I can currently build projects with :
	- C
	- C++
	- python
	- Brainf_ck
	- Solidity
My hobbies and things I do in my spare time are:
	- Basket Ball
	- Crypto trading
	- Mechanics & Handiwork
	- Astronomy & Rockets
	- Competitive video games
	- Terminal game development with ncurses
```

<!-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ -->
