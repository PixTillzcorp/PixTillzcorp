/*
********************************************************************************
**____________________________________________________________________________**
**_____/\/\/\/\/\___/\/\____________/\/\/\/\/\/\_/\/\__/\/\__/\/\_____________**
**____/\/\____/\/\_______/\/\__/\/\____/\/\___________/\/\__/\/\__/\/\/\/\/\__**
**___/\/\/\/\/\___/\/\____/\/\/\______/\/\_____/\/\__/\/\__/\/\______/\/\_____**
**__/\/\_________/\/\____/\/\/\______/\/\_____/\/\__/\/\__/\/\____/\/\________**
**_/\/\_________/\/\__/\/\__/\/\____/\/\_____/\/\__/\/\__/\/\__/\/\/\/\/\_____**
**____________________________________________________________________________**
**                                                                            **
**----- Author --------------{ PixTillz }-------------------------------------**
**----- File ----------------{ tmp.cpp }--------------------------------------**
**----- Created -------------{ 2022-05-20 04:04:18 }--------------------------**
**----- Updated -------------{ 2022-05-20 05:01:24 }--------------------------**
********************************************************************************
*/

# include <iostream>
# include <list>

class Programmer {
public:
	std::string	src;

	virtual ~Programmer() {}
	Programmer(Programmer const &cpy) : src(cpy.src) {}
	Programmer &operator=(Programmer const &cpy) { src = cpy.src; return *this; }
	Programmer(std::string src) : src(src) {}

private:
	Programmer();
};

class PixTillz : public Programmer {
public:
	typedef Programmer				inherited;
	typedef std::list<std::string>	strlist;

	std::string	name;
	std::string	nationality;
	std::string	intro;
	strlist		langages;
	strlist		hobbies;

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
				hobbies{ "Basket Ball", "Crypto trading", "Mecanics & Handiwork",\
						"Astronomy & Rockets", "Competitive video games",\
						"Terminal game development with ncurses"} {
	}
};

std::ostream	&operator<<(std::ostream &flux, PixTillz const &src) {
	flux << "My Pseudo is \'" << src.name << "\' and I\'m a " << src.nationality;
	flux << " developer from \'" << src.src << "\' !" << std::endl;
	flux << src.intro << std::endl;
	flux << "I can currently build projects with :\n";
	for (auto &&it : src.langages) { flux << "\t- " << it << std::endl; }
	flux << "My hobbies and things I do in my spare time are:\n";
	for (auto &&it : src.hobbies) { flux << "\t- " << it << std::endl; }
	return flux;
}

int main(void) {

	std::cout << PixTillz() << std::endl;

	return 0;
}
