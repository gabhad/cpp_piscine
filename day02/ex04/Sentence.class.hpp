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

    void            setWord(std::string word);
    std::string     getWord(void) const;
    void            setNext(Sentence *next);
    Sentence        *getNext(void) const;

    std::string     getSentence(void) const;

    Sentence        &operator=(Sentence const &rhs);
    Sentence        &operator=(std::string const &rhs);
    Sentence        &operator=(std::string &rhs);

    
    int             operator==(Sentence const &rhs);
    int             operator==(std::string const &rhs);
    int             operator==(std::string &rhs);
};

std::ostream    &operator<<(std::ostream &o, Sentence const &rhs);

#endif