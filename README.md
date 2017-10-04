# Markers
A Chalk-inspired library for beautiful terminal colors in ReasonML.

## Examples

```ocaml
print_endline Markers.(cyan "This should be Cyan!");
print_endline Markers.(bold "This should be Bold!");
print_endline Markers.(bold (cyan "This should be Bold AND Cyan!"));
```

## Available Colors

- `cyan`/`cyanBg`
- `magenta`/`magentaBg`
- `yellow`/`yellowBg`
- `blue`/`blueBg`
- `red`/`redBg`
- `green`/`greenBg`
- `black`/`blackBg`
- `white`/`whiteBg`
