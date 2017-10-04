open Colors;

let apply_style style str => "\027[" ^ style ^ str ^ "\027[0m";

/* Forground */
let cyan = apply_style forground.cyan;

let magenta = apply_style forground.magenta;

let blue = apply_style forground.blue;

let red = apply_style forground.red;

let green = apply_style forground.green;

let yellow = apply_style forground.yellow;

let black = apply_style forground.black;

let white = apply_style forground.white;

/* Background */
let cyanBg = apply_style background.cyan;

let magentaBg = apply_style background.magenta;

let blueBg = apply_style background.blue;

let blackBg = apply_style background.black;

let redBg = apply_style background.red;

let greenBg = apply_style background.green;

let yellowBg = apply_style background.yellow;

let whiteBg = apply_style background.white;

let bold str => "\027[1m" ^ str;
