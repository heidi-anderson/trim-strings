#include "..\\catch_amalgamated.hpp"
#include "trim.h"
#include <iostream>

using namespace Catch;

/* cTrim Test Cases */
TEST_CASE("cTrim - Testing C strings with no ws")                                   /* Given Test Case */
{
    // These variables will be initialized an any REQUIRE/CHECK executed before each
    // section below.
    char theString[100] = "Catch with Sections!";
    char theAnswer[100] = "Catch with Sections!";
    CHECK(strcmp(theString, theAnswer) == 0);

    // variables reinitialize and checked
    SECTION("Front - ws in front")
    {
        cTrim(theString, FRONT);
        CHECK(strcmp(theAnswer, theString) == 0);
    }

    SECTION("END - ws in front")
    {
        cTrim(theString, END);
        CHECK(strcmp(theAnswer, theString) == 0);
    }

    SECTION("BOTH - ws in front")
    {
        cTrim(theString, BOTH);
        CHECK(strcmp(theAnswer, theString) == 0);
    }
}

TEST_CASE("cTrim - Testing C strings with ws in the front")
{
    // These variables will be initialized an any REQUIRE/CHECK executed before each
    // section below.
    char theString[100] = " Catch with Sections!";
    char theAnswer[100] = "Catch with Sections!";
    CHECK(strcmp(theString, theAnswer) != 0);

    // variables reinitialize and checked
    SECTION("Front - ws in front")
    {
        cTrim(theString, FRONT);
        CHECK(strcmp(theAnswer, theString) == 0);
    }

    SECTION("END - ws in front")
    {
        cTrim(theString, END);
        CHECK(strcmp(theAnswer, theString) != 0);
    }

    SECTION("BOTH - ws in front")
    {
        cTrim(theString, BOTH);
        CHECK(strcmp(theAnswer, theString) == 0);
    }
}

TEST_CASE("cTrim - Testing C strings with ws in the back")
{
    // These variables will be initialized an any REQUIRE/CHECK executed before each
    // section below.
    char theString[100] = "Catch with Sections! ";
    char theAnswer[100] = "Catch with Sections!";
    CHECK(strcmp(theString, theAnswer) != 0);

    // variables reinitialize and checked
    SECTION("Front - ws in back")
    {
        cTrim(theString, FRONT);
        CHECK(strcmp(theAnswer, theString) != 0);
    }

    SECTION("END - ws in back")
    {
        cTrim(theString, END);
        CHECK(strcmp(theAnswer, theString) == 0);
    }

    SECTION("BOTH - ws in back")
    {
        cTrim(theString, BOTH);
        CHECK(strcmp(theAnswer, theString) == 0);
    }
}

TEST_CASE("cTrim - Testing C strings with ws for both sides")
{
    // These variables will be initialized an any REQUIRE/CHECK executed before each
    // section below.
    char theString[100] = " Catch with Sections! ";
    char theAnswer[100] = "Catch with Sections!";
    CHECK(strcmp(theString, theAnswer) != 0);

    // variables reinitialize and checked
    SECTION("Front - ws in back")
    {
        cTrim(theString, FRONT);
        CHECK(strcmp(theAnswer, theString) != 0);
    }

    SECTION("END - ws in back")
    {
        cTrim(theString, END);
        CHECK(strcmp(theAnswer, theString) != 0);
    }

    SECTION("BOTH - ws in back")
    {
        cTrim(theString, BOTH);
        CHECK(strcmp(theAnswer, theString) == 0);
    }
}

TEST_CASE("cTrim - Testing C strings with ws on both sides")
{
    // These variables will be initialized an any REQUIRE/CHECK executed before each
    // section below.
    char theString[100] = " Catch with Sections! ";
    char theAnswerFront[100] = "Catch with Sections! ";
    char theAnswerEnd[100] = " Catch with Sections!";
    char theAnswerBoth[100] = "Catch with Sections!";

    CHECK(strcmp(theString, theAnswerFront) != 0);
    CHECK(strcmp(theString, theAnswerEnd) != 0);
    CHECK(strcmp(theString, theAnswerBoth) != 0);

    // variables reinitialize and checked
    SECTION("Front - ws on both sides")
    {
        cTrim(theString, FRONT);
        CHECK(strcmp(theAnswerFront, theString) == 0);
    }

    SECTION("END - ws on both sides")
    {
        cTrim(theString, END);
        CHECK(strcmp(theAnswerEnd, theString) == 0);
    }

    SECTION("BOTH - on both sides")
    {
        cTrim(theString, BOTH);
        CHECK(strcmp(theAnswerBoth, theString) == 0);
    }
}

/* sTrim Test Cases */
TEST_CASE("sTrim - Testing strings with ws in the front")
{
    // These variables will be initialized an any REQUIRE/CHECK executed before each
    // section below.
    string theString = " Catch with Sections!";
    string theAnswer = "Catch with Sections!";
    REQUIRE(theString != theAnswer);

    // variables reinitialize and checked
    SECTION("Front - ws in front")
    {
        sTrim(theString, FRONT);
        REQUIRE(theString == theAnswer);
    }

    SECTION("END - ws in front")
    {
        sTrim(theString, END);
        REQUIRE(theString != theAnswer);
    }

    SECTION("BOTH - ws in front")
    {
        sTrim(theString, BOTH);
        REQUIRE(theString == theAnswer);
    }

   
}

TEST_CASE("sTrim - Testing strings with ws in the back")
{
    // These variables will be initialized an any REQUIRE/CHECK executed before each
    // section below.
    string theString = "Catch with Sections! ";
    string theAnswer = "Catch with Sections!";
    REQUIRE(theString != theAnswer);

    // variables reinitialize and checked
    SECTION("Front - ws in back")
    {
        sTrim(theString, FRONT);
        REQUIRE(theString != theAnswer);
    }

    SECTION("END - ws in back")
    {
        sTrim(theString, END);
        REQUIRE(theString == theAnswer);
    }

    SECTION("BOTH - ws in front")
    {
        sTrim(theString, BOTH);
        REQUIRE(theString == theAnswer);
    }
}

TEST_CASE("sTrim - Testing strings with ws on each side")
{
    // These variables will be initialized an any REQUIRE/CHECK executed before each
    // section below.
    string theString = " Catch with Sections! ";
    string theAnswer = "Catch with Sections!";
    REQUIRE(theString != theAnswer);

    // variables reinitialize and checked
    SECTION("Front - ws on both")
    {
        sTrim(theString, FRONT);
        REQUIRE(theString != theAnswer);
    }

    SECTION("END - ws on both")
    {
        sTrim(theString, END);
        REQUIRE(theString != theAnswer);
    }

    SECTION("BOTH - ws on both")
    {
        sTrim(theString, BOTH);
        REQUIRE(theString == theAnswer);
    }
}

TEST_CASE("sTrim - Testing strings with no ws")                                     /* Given Test Case */
{
    // These variables will be initialized an any REQUIRE/CHECK executed before each
    // section below.
    string theString = "Catch with Sections!";
    string theAnswer = "Catch with Sections!";
    REQUIRE(theString == theAnswer);

    // variables reinitialize and checked
    SECTION("Front - no ws")
    {
        sTrim(theString, FRONT);
        REQUIRE(theString == theAnswer);
    }

    SECTION("END - no ws")
    {
        sTrim(theString, END);
        REQUIRE(theString == theAnswer);
    }

    SECTION("BOTH - no ws")
    {
        sTrim(theString, BOTH);
        REQUIRE(theString == theAnswer);
    }
}

TEST_CASE("sTrim - Testing strings with ws on both sides")
{
    // These variables will be initialized an any REQUIRE/CHECK executed before each
    // section below.
    string theString = " Catch with Sections! ";
    string theAnswerBoth = "Catch with Sections!";
    string theAnswerFront = "Catch with Sections! ";
    string theAnswerEnd = " Catch with Sections!";

    REQUIRE(theString != theAnswerBoth);
    REQUIRE(theString != theAnswerFront);
    REQUIRE(theString != theAnswerEnd);

    // variables reinitialize and checked
    SECTION("Front - ws on both sides")
    {
        sTrim(theString, FRONT);
        REQUIRE(theString == theAnswerFront);
    }

    SECTION("END - ws on both sides")
    {
        sTrim(theString, END);
        REQUIRE(theString == theAnswerEnd);
    }

    SECTION("BOTH - ws on both sides")
    {
        sTrim(theString, BOTH);
        REQUIRE(theString == theAnswerBoth);
    }
}