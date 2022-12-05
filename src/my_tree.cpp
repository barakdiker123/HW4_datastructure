
#include <catch2/catch_test_macros.hpp>
#include <memory>

// TEST_CASE("Queue pop", "[queue]") {
//   Queue<int, 10> queue;
//   for (int i = 0; i < 5; i++) {
//     queue.enqueue(i);
//   }
//   REQUIRE(queue.dequeue() == 0);
//   REQUIRE(queue.dequeue() == 1);
//   queue.enqueue(100);
//   REQUIRE(queue.dequeue() == 2);
//   REQUIRE(queue.dequeue() == 3);
//   REQUIRE(queue.dequeue() == 4);
//   REQUIRE(queue.dequeue() == 100);
//   INFO("First is " << queue.get_first());
//   INFO("Last is " << queue.get_last());
//   queue.dequeue();
//   INFO("First is " << queue.get_first());
//   INFO("Last is " << queue.get_last());
//   queue.enqueue(1000);
//   REQUIRE(queue.dequeue() == 1000);
//   REQUIRE(queue.dequeue() == std::nullopt);
// }
