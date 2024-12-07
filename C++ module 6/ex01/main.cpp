#include <Serializer.hpp>
#include <Data.hpp>
// #include <include.hpp>

void test(Data *originalPtr) {

    uintptr_t serializedPtr = Serializer::serialize(originalPtr);

    Data *deserializedPtr = Serializer::deserialize(serializedPtr);

    if (deserializedPtr == originalPtr)
        cout << "Serializer and deserializer successful!" << endl;
    else
        cout << "Serializer and deserializer failed!" << endl;
}
int main()
{
	Data obj1(42);

    Data obj2(99);

    cout << "Testing Serializer and Deserializer" << endl;
    cout << "---------------------------------------" << endl;

    cout << "Test 1: Serialize and Deserialize obj1" << endl;
    test(&obj1);
    cout << "---------------------------------------" << endl;

    cout << "Test 2: Serialize and Deserialize obj2" << endl;
    test(&obj2);
    cout << "---------------------------------------" << endl;

    return 0;
}
