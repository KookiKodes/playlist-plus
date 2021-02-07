/*
Create an instruction based programn for Spotify that is more or less a language that allows you to easily
update playlists with key words, like +(5) Carry On will place the song 5th in the list with Spotify.

//You could even create a new playlist by saying "new Playlist(name):"


[Boob]"Unbelievers"->"All of Me"
"Unbelievers"->"All of Me"[Boob]

[Boob]"Unbelievers"<>"All of Me"<>"Say you wont let go"



Index:
	+      = add
	-      = remove
	^      = move up
	v(num | last/first)      = move down
	->     = before
	<-     = after
	"name"|'name'     = song title
	/genre/     = genre
	=>     = move
	[playlist] = playlist name
	<>     = together
  list   = output entire playlist

  play "song"
  !play

	1. Try to use a mixin function
	2. Try to use object oriented methods
	3. We will be using Spotify Api's in the future, so we can then implement promises
	4. Use a map idea for all of the operators above
	5. Try to use a generator as well for maybe the actions to take
*/


using namespace std;


int main(int argc, char const *argv[]) {
  cout << "argument count: " << argc << endl;
  for(i = 0; i < argc; i++) {
    cout << argv[i] << endl;
  }
  return 0;
}
