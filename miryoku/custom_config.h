// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Modified Colemak-DH
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             U_MT(RALT, F),     &kp P,             &kp B,                &kp J,             &kp L,               U_MT(RALT, U),     &kp Y,             &kp SQT,              \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,                &kp M,             U_MT(LSHFT, N),      U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),        \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,                &kp K,             &kp H,               &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, TAB),  U_LT(U_MOUSE, SPACE), U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC),   U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &kp RALT,          &kp B,             U_NA,                 U_RDO,             &kp J,               &kp RALT,          U_CUT,             U_UND,                \
&kp LGUI,          &kp LALT,          U_MT(LCTRL, ESC),  U_MT(LSHFT, G),    U_NA,                 U_NU,              U_MT(LSHIFT, M),     U_MT(LCTRL, ESC),  &kp LALT,          &kp LGUI,             \
U_NA,              &kp RALT,          &u_to_U_SYM,       &kp V,             U_NA,                 U_NU,              &kp K,               U_WH_D,            U_WH_U,            U_WH_R,               \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,                 U_BTN2,            U_BTN1,              U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,             U_NA,              &kp RBKT,            &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,               \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,            U_NA,              U_MT(LSHIFT, EQUAL), &kp LCTRL,         &kp LALT,          &kp LGUI,             \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,             U_NA,              &kp BSLH,            &u_to_U_NAV,       &kp RALT,          U_NA,                 \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,            U_NA,              &kp MINUS,           U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,             U_NA,              &kp RBRC,            &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,               \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,             U_NA,              U_MT(LSHFT, PLUS),   U_MT(LCTRL, DEL),  &kp LALT,          &kp LGUI,             \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,             U_NA,              &kp PIPE,            &u_to_U_MOUSE,     &kp RALT,          U_NA,                 \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,            U_NA,              &kp UNDER,           U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,                 U_RDO,             U_PST,               U_CPY,             U_CUT,             U_UND,                \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,                 &u_caps_word,      &kp LEFT,            &kp DOWN,          &kp UP,            &kp RIGHT,            \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_caps_word,      U_NA,                 &kp INS,           &kp HOME,            &kp PG_DN,         &kp PG_UP,         &kp END,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,                 &kp RET,           &kp BSPC,            &kp DEL,           U_NP,              U_NP
