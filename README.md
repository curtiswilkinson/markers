# Markers
A Chalk-inspired library for beautiful terminal colors in ReasonML.

## Examples

```ocaml
print_endline Markers.(cyan "This should be Cyan!" |> make);
print_endline Markers.(bold "This should be Bold!" |> make);
print_endline Markers.(bold (cyan "This should be Bold AND Cyan!") |> make);
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
