

#include "Cluster.h"

// Cluster.cpp
// Note: not all methods shown

namespace Clustering
{
    Cluster::Cluster(const Cluster &cluster) {
        m_Size = cluster.m_Size;
        LNodePtr newCluster = m_Points;
        LNodePtr tempCluster = cluster.m_Points;
        if (m_Size > 0) {
            while (tempCluster->next != nullptr) {
                newCluster->p = tempCluster->p;
                newCluster = newCluster->next;
                tempCluster = tempCluster->next;
            }
        }
    }

        Cluster &Cluster::operator=(const Cluster &cluster) {
        return <#initializer#>;
    }

    Cluster::~Cluster() {
        if (m_Points != nullptr) {
            for (int i = 0; i < m_Size; i ++)
                delete m_Points[i];
            delete [] m_Points;
        }
        m_Points = nullptr;
    }

    void Cluster::add(PointPtr const &ptr)
    {
        /*LNodePtr newNode;
        newNode->p = ptr;
        newNode->next = m_Points->next;
        m_Points->next = newNode;
        m_Size++;*/

        LNode * temp = new LNode;
        temp->p = ptr;
        temp->next = m_Points;
        m_Points = temp;
        m_Size++;
    }


    const PointPtr &Cluster::remove(PointPtr const &ptr) {
        if (m_Size == 0) {
            std::cout << "there is nothing to delete" << std::endl;
        }
        else

            for (int i = 0; i < m_Size; i++) {

                        }
            }
    std::ostream &Clustering::operator<<(std::ostream &ostream, const Cluster &cluster) {
        /*
         *
         * for (int i = 0; i < point.m_Dims; i++ ) {
            ostream << point.values[i] << std::endl;
        }
        return ostream;
        */

        //LNodePtr current = cluster;
        m_Size = cluster.m_Size;
        LNodePtr newCluster;
        LNodePtr tempCluster = cluster.m_Points;
        if (m_Size > 0) {
            while (tempCluster->next != nullptr) {
                tempCluster->p = tempCluster->p;
                newCluster = newCluster->next;
                tempCluster = tempCluster->next;

            }
        }
        return ostream;
    }

    std::istream &Clustering::operator>>(std::istream &istream, Cluster &cluster) {
        return istream;
    }

    Cluster &Cluster::operator+=(const Cluster &rhs)
    {
        // copy structure and values

        return *this;

    }


    Cluster &Cluster::operator-=(const Cluster &rhs) {
        return <#initializer#>;
    }

    // add point
    Cluster &Cluster::operator+=(const Point &rhs) {
        return <#initializer#>;
    }

    //remove
    Cluster &Cluster::operator-=(const Point &rhs) {
        return <#initializer#>;
    }

    const Cluster Clustering::operator+(const Cluster &lhs, const Cluster &rhs) {

        return Clustering::Cluster();
    }

    const Cluster Clustering::operator-(const Cluster &lhs, const Cluster &rhs) {
        return Clustering::Cluster();
    }

    const Cluster Clustering::operator+(const Cluster &lhs, const PointPtr &rhs) {
        Cluster newCluster = Cluster();

        // some code to copy the structure and values of rhs
        return newCluster;
    }

    const Cluster Clustering::operator-(const Cluster &lhs, const PointPtr &rhs) {
        return Clustering::Cluster();
    }


}




/*

void Cluster::add(const PointPtr &pt)
{
    // find the right spot
    // create a new node
    // assign pt
    // insert into the chain

    // for (int i = 0; i < size; i ++) {}
    LNodePtr prev = points;
    for (LNodePtr curr = points; curr != nullptr; curr = curr->next)
    {

    }

}
*/
/*
// copy ctor
Cluster(const Cluster &rhs)
        : size(rhs.size), capacity(rhs.capacity) {
    points = new PointPtr[capacity];
    for (int i = 0; i < capacity; i++)
        points[i] = nullptr;
    for (int i = 0; i < size; i++)
        points[i] = new Point(rhs.points[i]);
}

// assignment oper
Cluster &operator=(const Cluster &rhs) {
    if (this == &rhs) {
        return *this;
    } else {
        if (points != nullptr) {
            for (int i = 0; i < size; i++)
                delete points[i];
            delete [] points;
        }

        this->size = rhs.size;
        this->capacity = rhs.capacity;

        this->points = new PointPtr[capacity];
        for (int i = 0; i < capacity; i++)
            this->points[i] = nullptr;
        for (int i = 0; i < size; i++)
            this->points[i] = new Point(rhs.points[i]);
    }

    return *this;
}



// assignment oper
Cluster &operator=(const Cluster &rhs) { // rhs - right-hand side
    if (this == &rhs) { // check for self-assignment (like c1 = c1;)
        return *this; // return the current object
    } else {
        // clean up the current object's members
        // copy over the static members of rhs
        // allocate new copies of the dynamic members or rhs
    }

    return *this; // return the current object
}

*/
