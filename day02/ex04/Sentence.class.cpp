#include "Sentence.class.hpp"

Sentence::Sentence(const std::string word) : _word(word)
{
    this->_next = NULL;
}

Sentence::Sentence(Sentence const &src)
{
    *this = src;
}

Sentence::Sentence(void) : _word(NULL)
{
}

Sentence::~Sentence()
{
}

void            Sentence::setWord(std::string word)
{
    this->_word = word;
}

std::string     Sentence::getWord(void) const
{
    return this->_word;
}

void            Sentence::setNext(Sentence *next)
{
    this->_next = next;
}

Sentence        *Sentence::getNext(void) const
{
    return this->_next;
}

std::string     Sentence::getSentence(void) const
{
    std::string sent;
    Sentence    *temp;
    sent.append(this->getWord());

    temp = this->getNext();
    while (temp->getNext())
    {
        sent.append(" ");
        temp = temp->getNext();
        sent.append(temp->getWord());
    }
    return sent;
}


Sentence        &Sentence::operator=(Sentence const &rhs)
{
    if (this != &rhs)
        this->_word = rhs.getWord();
    return *this;
}

int             Sentence::operator==(Sentence const &rhs)
{
    if (this->getWord().compare(rhs.getWord()))
        return 0;
    else
        return 1;
}

int             Sentence::operator==(std::string const &rhs)
{
    if (this->getWord().compare(rhs))
        return 0;
    else
        return 1;
}

int             Sentence::operator==(std::string &rhs)
{
    if (this->getWord().compare(rhs))
        return 0;
    else
        return 1;
}


std::ostream    &operator<<(std::ostream &o, Sentence const &rhs)
{
    o << rhs.getWord();
    return o;
}
