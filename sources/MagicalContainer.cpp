#include "MagicalContainer.hpp"
using namespace ariel;


MagicalContainer::MagicalContainer() : container(std::vector<int>()) {}

/**
 * add element to the container
 * @param element to add
 */
void MagicalContainer::addElement(int element) {}

/**
 *  remove element from container
 * @param element to remove
 */
void MagicalContainer::removeElement(int element) {}

/**
 *  get the number of element in container
 * @return number of element in container
 */
int MagicalContainer::size() const {
    return 0;
}

/**
 * constructor for ascending iterator
 * @param magicalContainer magicalContainer for iterator
 */
ariel::MagicalContainer::AscendingIterator::AscendingIterator(ariel::MagicalContainer &magicalContainer) : magicalContainer(magicalContainer), CurrentIndex(0) {}

/**
 * copy constructor for ascending iterator
 * @param other magicalContainer for iterator
 */
ariel::MagicalContainer::AscendingIterator::AscendingIterator(const ariel::MagicalContainer::AscendingIterator &other) : magicalContainer(other.magicalContainer) , CurrentIndex(other.CurrentIndex) {}

/**
 *  Assignment operator
 * @param other Ascending Iterator
 * @return
 */
ariel::MagicalContainer::AscendingIterator& ariel::MagicalContainer::AscendingIterator::operator=(const ariel::MagicalContainer::AscendingIterator& other) {
    return *this;
}

/**
 * Equality comparison
 * @param other element to compere with
 * @return true if two element are equal , otherwise false
 */
bool ariel::MagicalContainer::AscendingIterator::operator==(const ariel::MagicalContainer::AscendingIterator& other) const{
    return false;
}

/**
 * Inequality comparison
 * @param other element to compere with
 * @return true if two element are not equal , otherwise false
 */
bool ariel::MagicalContainer::AscendingIterator::operator!=(const ariel::MagicalContainer::AscendingIterator& other) const{
    return false;
}

/**
 * Grater that comparison
 * @param other element to compere with
 * @return true if current element are grater that other element , otherwise false
 */
bool ariel::MagicalContainer::AscendingIterator::operator>(const ariel::MagicalContainer::AscendingIterator& other) const{
    return false;
}

/**
 * lower that  comparison
 * @param other element to compere with
 * @return true if current element are lower that other element , otherwise false
 */
bool ariel::MagicalContainer::AscendingIterator::operator<(const ariel::MagicalContainer::AscendingIterator& other) const{
    return false;
}

/**
 * Dereference operator
 * @return element after dereference
 */
int ariel::MagicalContainer::AscendingIterator::operator*() const{
    return 0;
}

/**
 * Pre-increment operator
 * @return  element after increment
 */
ariel::MagicalContainer::AscendingIterator& ariel::MagicalContainer::AscendingIterator::operator++(){
    return *this;
}

/**
 * pointing to the first element
 * @return pointing to the first element of the container
 */
ariel::MagicalContainer::AscendingIterator ariel::MagicalContainer::AscendingIterator::begin() {
    return *this;
}

/**
 * pointing to the last element
 * @return pointing to the last element of the container
 */
ariel::MagicalContainer::AscendingIterator ariel::MagicalContainer::AscendingIterator::end() {
    return *this;
}

/**
 * constructor for side cross iterator
 * @param magicalContainer magicalContainer for iterator
 */
ariel::MagicalContainer::SideCrossIterator::SideCrossIterator(ariel::MagicalContainer &magicalContainer) : magicalContainer(magicalContainer), RightIndex(0), LeftIndex(0) {}


/**
 * copy constructor for side cross iterator
 * @param other magicalContainer for iterator
 */
ariel::MagicalContainer::SideCrossIterator::SideCrossIterator(const ariel::MagicalContainer::SideCrossIterator &other):magicalContainer(other.magicalContainer) , RightIndex(other.RightIndex) , LeftIndex(other.LeftIndex) {}

/**
 *  Assignment operator
 * @param other Ascending Iterator
 * @return
 */
ariel::MagicalContainer::SideCrossIterator& ariel::MagicalContainer::SideCrossIterator::operator=(const ariel::MagicalContainer::SideCrossIterator& other){
    return *this;
}

/**
 * Equality comparison
 * @param other element to compere with
 * @return true if two element are equal , otherwise false
 */
bool ariel::MagicalContainer::SideCrossIterator::operator==(const ariel::MagicalContainer::SideCrossIterator& other) const{
    return false;
}

/**
 * Inequality comparison
 * @param other element to compere with
 * @return true if two element are not equal , otherwise false
 */
bool ariel::MagicalContainer::SideCrossIterator::operator!=(const ariel::MagicalContainer::SideCrossIterator& other) const{
    return false;
}

/**
 * Grater that comparison
 * @param other element to compere with
 * @return true if current element are grater that other element , otherwise false
 */
bool ariel::MagicalContainer::SideCrossIterator::operator>(const ariel::MagicalContainer::SideCrossIterator& other) const{
    return false;
}

/**
 * lower that  comparison
 * @param other element to compere with
 * @return true if current element are lower that other element , otherwise false
 */
bool ariel::MagicalContainer::SideCrossIterator::operator<(const ariel::MagicalContainer::SideCrossIterator& other) const{
    return false;
}

/**
 * Dereference operator
 * @return element after dereference
 */
int ariel::MagicalContainer::SideCrossIterator::operator*() const{
    return 0;
}

/**
 * Pre-increment operator
 * @return  element after increment
 */
ariel::MagicalContainer::SideCrossIterator& ariel::MagicalContainer::SideCrossIterator::operator++(){
    return *this;
}

/**
 * pointing to the first element
 * @return pointing to the first element of the container
 */
ariel::MagicalContainer::SideCrossIterator ariel::MagicalContainer::SideCrossIterator::begin() {return *this;}

/**
 * pointing to the last element
 * @return pointing to the last element of the container
 */
ariel::MagicalContainer::SideCrossIterator ariel::MagicalContainer::SideCrossIterator::end() {return *this;}

/**
 * constructor for prime iterator
 * @param magicalContainer magicalContainer for iterator
 */
ariel::MagicalContainer::PrimeIterator::PrimeIterator(ariel::MagicalContainer &magicalContainer) : magicalContainer(magicalContainer), CurrentIndex(0) {}
/**
 * copy constructor for prime iterator
 * @param other magicalContainer for iterator
 */
ariel::MagicalContainer::PrimeIterator::PrimeIterator(const ariel::MagicalContainer::PrimeIterator &other) :magicalContainer(other.magicalContainer) , CurrentIndex(other.CurrentIndex) {}

/**
 *  Assignment operator
 * @param other Ascending Iterator
 * @return
 */
ariel::MagicalContainer::PrimeIterator& ariel::MagicalContainer::PrimeIterator::operator=(const ariel::MagicalContainer::PrimeIterator& other){return *this;}

/**
 * Equality comparison
 * @param other element to compere with
 * @return true if two element are equal , otherwise false
 */
bool ariel::MagicalContainer::PrimeIterator::operator==(const ariel::MagicalContainer::PrimeIterator& other) const{
    return false;
}

/**
 * Inequality comparison
 * @param other element to compere with
 * @return true if two element are not equal , otherwise false
 */
bool ariel::MagicalContainer::PrimeIterator::operator!=(const ariel::MagicalContainer::PrimeIterator& other) const{
    return false;
}

/**
 * Grater that comparison
 * @param other element to compere with
 * @return true if current element are grater that other element , otherwise false
 */
bool ariel::MagicalContainer::PrimeIterator::operator>(const ariel::MagicalContainer::PrimeIterator& other) const {
    return false;
}

/**
 * lower that  comparison
 * @param other element to compere with
 * @return true if current element are lower that other element , otherwise false
 */
bool ariel::MagicalContainer::PrimeIterator::operator<(const ariel::MagicalContainer::PrimeIterator& other) const{
    return false;
}

/**
 * Dereference operator
 * @return element after dereference
 */
int ariel::MagicalContainer::PrimeIterator::operator*() const{
    return false;
}

/**
 * Pre-increment operator
 * @return  element after increment
 */
ariel::MagicalContainer::PrimeIterator& ariel::MagicalContainer::PrimeIterator::operator++(){
    return *this;
}

/**
 * pointing to the first element
 * @return pointing to the first element of the container
 */
ariel::MagicalContainer::PrimeIterator ariel::MagicalContainer::PrimeIterator::begin() {return *this;}

/**
 * pointing to the last element
 * @return pointing to the last element of the container
 */
ariel::MagicalContainer::PrimeIterator ariel::MagicalContainer::PrimeIterator::end() {return *this;}

/**
 * check if number is a prime
 * @param num number to check
 * @return ture is the number is prime , otherwise false
 */
bool ariel::MagicalContainer::PrimeIterator::isPrime(int num) {
    return false;
}