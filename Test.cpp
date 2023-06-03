#include "doctest.h"
#include "sources/MagicalContainer.hpp"

using namespace ariel;

TEST_CASE("MagicalContainer class") {
    MagicalContainer container;

    SUBCASE("Adding elements") {
        container.addElement(1);
        container.addElement(2);
        container.addElement(3);
        container.addElement(4);

        CHECK(container.size() == 4);
    }

    SUBCASE("Removing elements") {
        container.removeElement(3);
        CHECK(container.size() == 3);
        container.addElement(3);
    }

    SUBCASE("container with 0 element") {
        MagicalContainer newContainer;

        ariel::MagicalContainer::AscendingIterator asiterator(newContainer);
        ariel::MagicalContainer::SideCrossIterator sciterator(newContainer);
        ariel::MagicalContainer::PrimeIterator primeiterator(newContainer);

        CHECK(asiterator.begin() == asiterator.end());
        CHECK(sciterator.begin() == sciterator.end());
        CHECK(primeiterator.begin() == primeiterator.end());
    }

    SUBCASE("get out of container") {
        MagicalContainer newContainer;
        newContainer.addElement(1);
        ariel::MagicalContainer::AscendingIterator asiterator(newContainer);
        ariel::MagicalContainer::SideCrossIterator sciterator(newContainer);
        ariel::MagicalContainer::PrimeIterator primeiterator(newContainer);
        ++asiterator;
        ++sciterator;
        ++primeiterator;
        CHECK_THROWS(*asiterator);
        CHECK_THROWS(*sciterator);
        CHECK_THROWS(*primeiterator);

    }

    SUBCASE("ascending iterator") {
        container.addElement(5);
        container.addElement(8);
        container.addElement(7);
        container.addElement(6);

        std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8};
        std::vector<int> result;
        ariel::MagicalContainer::AscendingIterator AscendingIterator1(container);
        for (ariel::MagicalContainer::AscendingIterator it = AscendingIterator1.begin(); it != AscendingIterator1.end(); ++it){
            result.push_back(*it);
        }

        CHECK(result == expected);

        AscendingIterator1.begin();
        ariel::MagicalContainer::AscendingIterator AscendingIterator2(container);
        ++AscendingIterator1;
        CHECK(AscendingIterator1!=AscendingIterator2);
        CHECK(AscendingIterator1>AscendingIterator2);
        CHECK(AscendingIterator2<AscendingIterator1);

    }

    SUBCASE("side cross iterator") {
        std::vector<int> expected = {1, 8, 2, 7, 3, 6, 5, 4};
        std::vector<int> result;

        ariel::MagicalContainer::SideCrossIterator SideCrossIterator1(container);
        for (ariel::MagicalContainer::SideCrossIterator it = SideCrossIterator1.begin(); it != SideCrossIterator1.end(); ++it){
            result.push_back(*it);
        }


        CHECK(result == expected);

        SideCrossIterator1.begin();
        ariel::MagicalContainer::SideCrossIterator SideCrossIterator2(container);
        ++SideCrossIterator1;
        CHECK(SideCrossIterator1!=SideCrossIterator2);
        CHECK(SideCrossIterator1>SideCrossIterator2);
        CHECK(SideCrossIterator2<SideCrossIterator1);
    }

    SUBCASE("prime iterator") {
        std::vector<int> expected = {2,3,5,7};
        std::vector<int> result;

        ariel::MagicalContainer::PrimeIterator PrimeIterator1(container);
        for (ariel::MagicalContainer::PrimeIterator it = PrimeIterator1.begin(); it != PrimeIterator1.end(); ++it){
            result.push_back(*it);
        }

        CHECK(result == expected);

        PrimeIterator1.begin();
        ariel::MagicalContainer::PrimeIterator PrimeIterator2(container);
        ++PrimeIterator1;
        CHECK(PrimeIterator1!=PrimeIterator2);
        CHECK(PrimeIterator1>PrimeIterator2);
        CHECK(PrimeIterator2<PrimeIterator1);
    }

    SUBCASE("modifying container during iteration") {
        MagicalContainer newContainer;
        newContainer.addElement(1);
        newContainer.addElement(2);
        newContainer.addElement(3);

        ariel::MagicalContainer::AscendingIterator asiterator(newContainer);
        ariel::MagicalContainer::SideCrossIterator sciterator(newContainer);
        ariel::MagicalContainer::PrimeIterator primeiterator(newContainer);

        newContainer.addElement(4);
        newContainer.removeElement(2);

        CHECK(*asiterator == 1);
        ++asiterator;
        CHECK(*asiterator == 3);
        ++asiterator;
        CHECK(*asiterator == 4);

        CHECK(*sciterator == 1);
        ++sciterator;
        CHECK(*sciterator == 4);
        ++sciterator;
        CHECK(*sciterator == 3);

        container.addElement(5);
        CHECK(*primeiterator == 3);
        ++primeiterator;
        CHECK(*primeiterator == 5);
    }
}