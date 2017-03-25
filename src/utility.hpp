/**
 *    > Author:            UncP
 *    > Mail:         770778010@qq.com
 *    > Github:    https://www.github.com/UncP/Mushroom
 *    > Created Time:  2016-10-15 10:37:54
**/

#ifndef _UTILITY_HPP_
#define _UTILITY_HPP_

#include <cstdint>

namespace Mushroom {

typedef uint32_t page_id;

class KeySlice;
class BTreePage;
class BTree;
class LatchManager;
class PageManager;
class ThreadPool;

} // namespace Mushroom

#endif /* _UTILITY_HPP_ */