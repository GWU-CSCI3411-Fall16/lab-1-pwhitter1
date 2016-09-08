#include <stdio.h>


char* titles = {"Never Gonna Give You Up", "Stairway to Heaven"};
char* singers = {"Rick Astley", "Led Zeppelin"};

struct song_t {
	char* title;
	char* singer;
};

struct node_t {
	struct song_t* song;
	struct song_t* next;
};

void print_playlist(struct node_t* node) {
	struct node_t* ptr;
	ptr = node;
	while(ptr != NULL) {
		printf("%s by %s", ptr -> song -> title, ptr -> song -> singer);
		ptr = ptr -> next;
	}
}

int main(int argc, char* argv[]) {
	unsigned i;
	struct song_t ricksong, ledsong;
	struct node_t p1_rick, p1_led, p2_rick, p2_led;

	ricksong.title = titles[0];
	ricksong.singer = singers[0];

	ledsong.title = titles[1];
	ledsong.singer = singers[1];

	p1_rick.song = &ricksong;
	p1_rick.next = &p1_led;

	p1_led.song = &ledsong;
	p1_led.next = NULL;

	print_playlist(&p1_rick);

//	for(i = 0; i < 2; i++){
//		song.title = titles[i];
//		song.singer = singers[i];
//	}

	return 0;
}
