#include <stdio.h>
// #include <glib.h>
#include <stdlib.h>
#include <glib.h>




// counts all words
void count_words (gchar ** lines, GHashTable *table) {
	gchar **Oline;
	gchar *key;


	for (Oline= lines; *Oline; Oline++) {
		key = *Oline;

		// find if it exist
		if (g_hash_table_lookup(table, g_strdup(key)) != NULL) {
			g_hash_table_insert(table, g_strdup(key), g_hash_table_lookup(table, g_strdup(key)) + 1);
		}
		// otherwise we should add and 1
		else {
			g_hash_table_insert(table, g_strdup(key), GINT_TO_POINTER(1));
		}

	}
}
void print_hash(gpointer key, gpointer value, gpointer user_data){
	char * keyy = (char *) key;
	int valuee = GPOINTER_TO_INT(value);

	printf("%s :%d\n", keyy, valuee);


}



int main() {
	gchar ** texts;
	GHashTable *table = g_hash_table_new(g_str_hash, g_str_equal);
	gchar *outtext;
	gsize length;
	gchar *filename = "fank.txt";
	GError *error = NULL; //this will hold the error msg


	if (! g_file_get_contents(filename, &outtext, &length, &error)) {
		g_error (" feth file failed: %s", error->message);
	}

	texts = g_strsplit(outtext, " ", -1);
	count_words(texts, table);
	g_hash_table_foreach(table, print_hash, NULL);

	return 0;
}
