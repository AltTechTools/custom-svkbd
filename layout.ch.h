#define KEYS 66

static Key keys_ch[KEYS] = {
        { "1", "!|", XK_1, 1 }, 
        { "2", "\"@", XK_2, 1 }, 
        { "3", "*#", XK_3, 1 }, 
        { "4", "ç¼", XK_4, 1 }, 
        { "5", "%½", XK_5, 1 }, 
        { "6", "&¬", XK_6, 1 }, 
        { "7", "/|", XK_7, 1 }, 
        { "8", "(¢", XK_8, 1 }, 
        { "9", ")]", XK_9, 1 }, 
        { "0", "=}", XK_0, 1 }, 
        { "'", "?´", XK_ssharp, 1 }, 
        { "^", "`~", XK_dead_circumflex, 1 }, 
        { "⌫", 0, XK_BackSpace, 1.5 }, 

        { 0 }, /* New row */

        { "↹", 0, XK_Tab, 0.75 }, 
        { "q", "Q@", XK_q, 1 }, 
        { "w", "Wł", XK_w, 1 }, 
        { "e", "E€", XK_e, 1 }, 
        { "r", "R¶", XK_r, 1 }, 
        { "t", "Tŧ", XK_t, 1 }, 
        { "z", "Z←", XK_z, 1 }, 
        { "u", "U↓", XK_u, 1 }, 
        { "i", "I→", XK_i, 1 }, 
        { "o", "Oœ", XK_o, 1 }, 
        { "p", "Pþ", XK_p, 1 }, 
        { "ü", "Ü[", 0xfc, 0.75 }, 
        { "¨", "!]", 0xfe57, 0.75 }, 

        { 0 }, /* New row */

        { "️⮹", 0, XK_Caps_Lock, 1.75 }, 
        { "a", "Aæ", XK_a, 1 }, 
        { "s", "Sß", XK_s, 1 }, 
        { "d", "Dð", XK_d, 1 }, 
        { "f", "Fđ", XK_f, 1 }, 
        { "g", "Gŋ", XK_g, 1 }, 
        { "h", "Hħ", XK_h, 1 }, 
        { "j", "J̣̣̉̉", XK_j, 1 }, 
        { "k", "Kĸ", XK_k, 1 }, 
        { "l", "Lł", XK_l, 1 }, 
        { "ö", "Ö", 0xf6, 1 }, 
        { "ä", "Ä{", 0xe4, 0.75 }, 
        { "$", "£}", 0x24, 0.75 }, 

        { 0 }, /* New row */

        { "⬆", 0, XK_Shift_L, 1.75 }, 
        { "<", ">\\", XK_less, 1 }, 
        { "y", "Y«", XK_y, 1 }, 
        { "x", "X»", XK_x, 1 }, 
        { "c", "C¢", XK_c, 1 }, 
        { "v", "V“", XK_v, 1 }, 
        { "b", "B”", XK_b, 1 }, 
        { "n", "Nn", XK_n, 1 }, 
        { "m", "Mµ", XK_m, 1 }, 
        { ",", 0, XK_comma, 1 }, 
        { ".", ":·", XK_period, 1 }, 
        { "-", "_", XK_minus, 0.75 }, 
        { "Del", 0, XK_Delete, 0.75 }, 

        { 0 }, /* New row */

        { "Ctrl", 0, XK_Control_L, 2 }, 
        { "Win",  0, XK_Super_L, 2 }, 
        { "Alt", 0, XK_Alt_L, 1 }, 
        { "", 0, XK_space, 5 }, 
        { "Alt Gr", 0, XK_ISO_Level3_Shift, 2 }, 
        { "↺", 0, XK_Cancel, 2 }, 
        { "Menu", 0, XK_Menu, 1 }, 
        { "↵", 0, XK_Return, 2 }, 

        { 0 }, /* New row */


        { 0 }, /* ending row */

};

static Key keys_navigation[KEYS] = {
        { "Esc", 0, XK_Escape, 1 }, 
        { "⇤", 0, XK_Home, 1 }, 
        { "↑", 0, XK_Up, 1 }, 
        { "⇥", 0, XK_End, 1 }, 
        { "⇈", 0, XK_Prior, 1 }, 

        { 0 }, /* New row */

        { "Shift", 0, XK_Shift_L, 1 }, 
        { "←", 0, XK_Left, 1 }, 
        { "", 0, XK_space, 1 }, 
        { "→", 0, XK_Right, 1 }, 
        { "⇊", 0, XK_Next, 1 }, 

        { 0 }, /* New row */

        { "↺", 0, XK_Cancel, 1, }, 
        { "⌫Bksp", 0, XK_BackSpace, 1 }, 
        { "↓", 0, XK_Down, 1 }, 
        { "Tab", 0, XK_Tab, 1 }, 
        { "↲ Enter", 0, XK_Return, 1 }, 

        { 0 }, /* New row */


        { 0 }, /* ending row */

};

#define OVERLAYS 29
static Key overlay[OVERLAYS] = {
        { 0, 0, XK_q }, /* New Definition */
        { "😀", 0, 0x101f600 }, 
        { "😁", 0, 0x101f601 }, 
        { "😂", 0, 0x101f602 }, 
        { "😃", 0, 0x101f603 }, 
        { "😄", 0, 0x101f604 }, 
        { "😅", 0, 0x101f605 }, 
        { "😆", 0, 0x101f606 }, 
        { "😇", 0, 0x101f607 }, 
        { "😈", 0, 0x101f608 }, 
        { "😉", 0, 0x101f609 }, 
        { "😊", 0, 0x101f60a }, 
        { "😋", 0, 0x101f60b }, 
        { "😌", 0, 0x101f60c }, 
        { "😍", 0, 0x101f60d }, 
        { "😎", 0, 0x101f60e }, 
        { "😏", 0, 0x101f60f }, 
        { "😐", 0, 0x101f610 }, 
        { "😒", 0, 0x101f612 }, 
        { "😓", 0, 0x101f613 }, 
        { "😛", 0, 0x101f61b }, 
        { "😮", 0, 0x101f62e }, 
        { "😟", 0, 0x101f61f }, 
        { "😟", 0, 0x101f620 }, 
        { "😢", 0, 0x101f622 }, 
        { "😭", 0, 0x101f62d }, 
        { "😳", 0, 0x101f633 }, 
        { "😴", 0, 0x101f634 }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
};

#define LAYERS 2
static char* layer_names[LAYERS] = {
       "ch",
       "nav",
};

static Key* available_layers[LAYERS] = {
        keys_ch,
        keys_navigation,
};

Buttonmod buttonmods[] = {
        { XK_Shift_L, Button2 },
        { XK_Alt_L, Button3 },
};
