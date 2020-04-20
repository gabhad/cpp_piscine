#ifndef SENTENCE_CLASS_HPP
# define SENTENCE_CLASS_HPP

#include <iostream>

class Sentence
{
private:
    std::string     _word;
    Sentence        *_next;

public:
    Sentence(const std::string word);
    Sentence (Sentence const &src);
    Sentence(void);
    ~Sentence();

    std::string     getWord(void) const;
    void            setNext(Sentence *next);
    Sentence        *getNext(void) const;

    std::string     getSentence(void) const;

    Sentence        &operator=(Sentence const &rhs);
};

std::ostream    &operator<<(std::ostream &o, Sentence const &rhs);

#endif