#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>


// Aliases
#define DE_CIRC GRAVE  // ^ (dead)
#define DE_SS   MINUS // ß
#define DE_ACUT EQUAL  // ´ (dead)
#define DE_Z    Y    // Z
#define DE_UE LEFT_BRACKET // Ü
#define DE_PLUS RIGHT_BRACKET // +
#define DE_OE SEMICOLON // Ö
#define DE_AE SINGLE_QUOTE // Ä
#define DE_HASH NON_US_HASH // #
#define DE_LABK NON_US_BSLH // <
#define DE_Y    Z    // Y
#define DE_MINS SLASH // -
#define DE_DEG  LS(DE_CIRC) // °
#define DE_EXLM LS(N1)    // !
#define DE_DQUO LS(N2)    // "
#define DE_SECT LS(N3)    // §
#define DE_DLR  LS(N4)    // $
#define DE_PERC LS(N5)    // %
#define DE_AMPR LS(N6)    // &
#define DE_SLSH LS(N7)    // /
#define DE_LPRN LS(N8)    // (
#define DE_RPRN LS(N9)    // )
#define DE_EQL  LS(N0)    // =
#define DE_QUES LS(DE_SS)   // ?
#define DE_GRV  LS(DE_ACUT) // ` (dead)
#define DE_ASTR LS(DE_PLUS) // *
#define DE_QUOT LS(DE_HASH) // '
#define DE_RABK LS(DE_LABK) // >
#define DE_SCLN LS(DE_COMM) // ;
#define DE_COLN LS(DE_DOT)  // :
#define DE_UNDS LS(DE_MINS) // _
#define DE_SUP2 RA(N2)    // ²
#define DE_SUP3 RA(N3)    // ³
#define DE_LCBR RA(N7)    // {
#define DE_LBRC RA(N8)    // [
#define DE_RBRC RA(N9)    // ]
#define DE_RCBR RA(N0)    // }
#define DE_BSLS RA(DE_SS)   // (backslash)
#define DE_AT   RA(Q)    // @
#define DE_EURO RA(E)    // €
#define DE_TILD RA(PLUS) // ~
#define DE_PIPE RA(DE_LABK) // |
#define DE_MICR RA(M)    // µ
