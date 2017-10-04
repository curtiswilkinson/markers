let test () => {
  print_endline Markers.(cyan "This should be Cyan!" |> make);
  print_endline Markers.(bold "This should be Bold!" |> make);
  print_endline Markers.(bold (cyan "This should be Bold AND Cyan!") |> make);
  print_endline Markers.(magenta "This should be Magenta!" |> make);
  print_endline Markers.(bold "This should be Bold!" |> make);
  print_endline Markers.(bold (magenta "This should be Bold AND Magenta!") |> make)
};

test ();
