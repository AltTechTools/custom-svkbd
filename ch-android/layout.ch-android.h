#define KEYS 64
static Key keys_ch[KEYS] = {
	{ "1", 0, XK_1, 1 },

};

Buttonmod buttonmods[] = {
	{ XK_Shift_L, Button2 },
	{ XK_Alt_L, Button3 },
};

#define OVERLAYS 29
static Key overlay[OVERLAYS] = {
        { "q", 0, XK_q }, //New overlay -> emoji overlay on Q key (for minimal layer)
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
        { 0, 0, XK_Cancel }, /* XK_Cancel signifies  overlay boundary */
//	{ 0, 0, XK_Cancel },
};

#define LAYERS 1
static char* layer_names[LAYERS] = {
	"ch",
};

static Key* available_layers[LAYERS] = {
	keys_ch,
};

