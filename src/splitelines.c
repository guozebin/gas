/*
 * Guo Zebin <zebin.guo@live.com>
 *
 * Chengyi, JMU, 2014-6-18
 *
 */

/* Splited with newline, and store positions to arr[] */
void splitelines(const char *buf, int arr[], int arr_max_len)
{
	int i = 1;
	const char *bp = buf;

	while (*bp != '\0' && i < arr_max_len) {
		/* Record position of newline(UNIX(LR)) */
		if (*bp == '\n')
			arr[i++] = bp - buf;
		bp++;
	}
}
