#include <QtTest>

// add necessary includes here
#include "bookkeeperlib.h"


class TestBookkeeper : public QObject
{
    Q_OBJECT

public:
    TestBookkeeper();
    ~TestBookkeeper();

private slots:
    void test_case1();
};

TestBookkeeper::TestBookkeeper() {}

TestBookkeeper::~TestBookkeeper() {}

void TestBookkeeper::test_case1()
{
    BookkeeperLib sb;
    QCOMPARE(sb.add(1, 1), 2);   // 断言 1 + 1 应该等于 2
    QCOMPARE(sb.add(2, 2), 4);   // 断言 2 + 2 应该等于 4

}

QTEST_APPLESS_MAIN(TestBookkeeper)

#include "tst_testbookkeeper.moc"
