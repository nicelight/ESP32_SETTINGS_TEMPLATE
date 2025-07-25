#define DEBUG
// имя пароль вашей домашней сети
// можно ввести, подключившись к ESP AP c паролем 1234567890
#define WIFI ""
#define WIFIPASS ""

// #define ON 0  // включение релюшек логическим нулем или единицей
// #define OFF 1 //
#define ON 1  // включение симмисторов лог. единицей
#define OFF 0 //

#define INDIKATOR 2 // на каком пине индикаторный светодиод
#define BTN 0 // встроенная кнопка

extern uint32_t g_lora_h;
