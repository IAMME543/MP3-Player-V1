#ifndef TYPES_H
#define TYPES_H

struct Artist;
struct Album;
struct Song;

struct Song {
  int id;
  char *title;
  struct Album *album;
  struct Artist *artists[8];
  char *path;
  int track_number;
};
struct Album {
  int id;
  char *title;
  struct Artist *artist;
  struct Song *songs[64];
};
struct Artist {
  int id;
  char *name;
  struct Album *albums[16];
};

#endif