#ifndef MAGICALCONTAINER_HPP
#define MAGICALCONTAINER_HPP

#include <vector>
#include <cmath>

using namespace std;

namespace ariel {
    class MagicalContainer {
    public:
        MagicalContainer();

        void addElement(int element);
        void removeElement(int element);
        int size() const;

        class AscendingIterator{
        public:
            AscendingIterator(MagicalContainer &magicalContainer);
            AscendingIterator(const AscendingIterator &other);
            ~AscendingIterator() = default;
            AscendingIterator(AscendingIterator&& other) = default;
            AscendingIterator& operator=(AscendingIterator&& other) = delete;

            AscendingIterator& operator=(const AscendingIterator& other);
            bool operator==(const AscendingIterator& other) const;
            bool operator!=(const AscendingIterator& other) const;
            bool operator>(const AscendingIterator& other) const;
            bool operator<(const AscendingIterator& other) const;
            int operator*() const;
            AscendingIterator& operator++();

            AscendingIterator begin();
            AscendingIterator end();

        private:
            MagicalContainer &magicalContainer;
            int CurrentIndex;
        };

        class SideCrossIterator{
        public:
            SideCrossIterator(MagicalContainer &magicalContainer);
            SideCrossIterator(const SideCrossIterator &other);
            ~SideCrossIterator() = default;
            SideCrossIterator(SideCrossIterator&& other) = default;
            SideCrossIterator& operator=(SideCrossIterator&& other) = delete;

            SideCrossIterator& operator=(const SideCrossIterator& other);
            bool operator==(const SideCrossIterator& other) const;
            bool operator!=(const SideCrossIterator& other) const;
            bool operator>(const SideCrossIterator& other) const;
            bool operator<(const SideCrossIterator& other) const;
            int operator*() const;
            SideCrossIterator& operator++();

            SideCrossIterator begin();
            SideCrossIterator end();

        private:
            MagicalContainer &magicalContainer;
            int RightIndex;
            int LeftIndex;

        };

        class PrimeIterator{
        public:
            PrimeIterator(MagicalContainer &magicalContainer);
            PrimeIterator(const PrimeIterator &other);
            ~PrimeIterator() = default;
            PrimeIterator(PrimeIterator&& other)= default;
            PrimeIterator& operator=(PrimeIterator&& other) = delete;

            PrimeIterator& operator=(const PrimeIterator& other);
            bool operator==(const PrimeIterator& other) const;
            bool operator!=(const PrimeIterator& other) const;
            bool operator>(const PrimeIterator& other) const;
            bool operator<(const PrimeIterator& other) const;
            int operator*() const;
            PrimeIterator& operator++();

            PrimeIterator begin();
            PrimeIterator end();

            bool isPrime(int num);

        private:
            MagicalContainer &magicalContainer;
            int CurrentIndex;
        };

    private:
        std::vector <int> container;
    };
}

#endif //MAGICALCONTAINER_HPP
