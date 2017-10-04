let test () => {
  print_endline Markers.(cyan "This should be Cyan!");
  print_endline Markers.(bold "This should be Bold!");
  print_endline Markers.(bold (cyan "This should be Bold AND Cyan!"));
  print_endline Markers.(magenta "This should be Magenta!");
  print_endline Markers.(bold "This should be Bold!");
  print_endline Markers.(bold (magenta "This should be Bold AND Magenta!"))
};

test ();
