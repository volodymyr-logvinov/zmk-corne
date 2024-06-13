/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>


/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ґ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ й │ ц │ у │ к │ е │ н │ г │ ш │ щ │ з │ х │ ї │ ʼ   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────│
 * │      │ ф │ і │ в │ а │ п │ р │ о │ л │ д │ ж │ є │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │ я │ ч │ с │ м │ и │ т │ ь │ б │ ю │ . │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */



// Row 1
#define UA_QUOT GRAVE  // '
#define UA_N1    N1    // 1
#define UA_N2    N2    // 2
#define UA_N3    N3    // 3
#define UA_N4    N4    // 4
#define UA_N5    N5    // 5
#define UA_N6    N6    // 6
#define UA_N7    N7    // 7
#define UA_N8    N8    // 8
#define UA_N9    N9    // 9
#define UA_N0    N0    // 0
#define UA_MINS MINUS  // -
#define UA_EQL  EQUAL  // =

// Row 2
#define UA_YOT  Q    // Й
#define UA_TSE  W    // Ц
#define UA_U    E    // У
#define UA_KA   R    // К
#define UA_E    T    // Е
#define UA_EN   Y    // Н
#define UA_HE   U    // Г
#define UA_SHA  I    // Ш
#define UA_SHCH O    // Щ
#define UA_ZE   P    // З
#define UA_KHA  LBKT // Х
#define UA_YI   RBKT // Ї
// #define UA_BSLS BSLS // (backslash)

// Row 3
#define UA_EF   A    // Ф
#define UA_I    S    // І
#define UA_VE   D    // В
#define UA_A    F    // А
#define UA_PE   G    // П
#define UA_ER   H    // Р
#define UA_O    J    // О
#define UA_EL   K    // Л
#define UA_DE   L    // Д
#define UA_ZHE  SEMI // Ж
#define UA_YE   SQT  // Є

// Row 4
#define UA_YA   Z    // Я
#define UA_CHE  X    // Ч
#define UA_ES   C    // С
#define UA_EM   V    // М
#define UA_Y    B    // И
#define UA_TE   N    // Т
#define UA_SOFT M    // Ь
#define UA_BE   COMM // Б
#define UA_YU   DOT  // Ю
#define UA_DOT  SLSH // .


#define UA_HRYV S(UA_QUOT) // ₴
#define UA_EXLM S(UA_1)    // !
#define UA_DQUO S(UA_2)    // "
#define UA_NUM  S(UA_3)    // №
#define UA_SCLN S(UA_4)    // ;
#define UA_PERC S(UA_5)    // %
#define UA_COLN S(UA_6)    // :
#define UA_QUES S(UA_7)    // ?
#define UA_ASTR S(UA_8)    // *
#define UA_LPRN S(UA_9)    // (
#define UA_RPRN S(UA_0)    // )
#define UA_UNDS S(UA_MINS) // _
#define UA_PLUS S(UA_EQL)  // +
#define UA_SLSH S(UA_BSLS) // /
#define UA_COMM S(UA_DOT)  // ,
#define UA_GE   ALGR(UA_HE)   // ґ

