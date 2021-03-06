#ifndef MESSAGEQUEUE_HPP
#define MESSAGEQUEUE_HPP

// EtherTerm SVN: $Id$
// Source: $HeadURL$
// $LastChangedDate$
// $LastChangedRevision$
// $LastChangedBy$

#include <iostream>
#include <vector>
#include <string>

class MessageQueue
{
public:
    MessageQueue() {}
    ~MessageQueue()
    {
        std::vector<int>().swap(m_queueParams);
        m_text.erase();
    }

    std::vector<int> m_queueParams;
    std::string m_text;

    void clear()
    {
        std::vector<int>().swap(m_queueParams);
        m_text.erase();
    }
};


#endif // MESSAGEQUEUE_HPP
