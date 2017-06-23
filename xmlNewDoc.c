#include <stdio.h>
#include <libxml/parser.h>
#include <libxml/tree.h>
#include <string.h>

int main(void)
{
#if 0
xmlNodePtr
xmlNewNode(xmlNsPtr ns, const xmlChar *name) {
xmlDocPtr
xmlNewDoc(const xmlChar *version) {
#endif
	xmlDocPtr doc = NULL;
	doc = xmlNewDoc("1.0");
	if (NULL != doc) {
		xmlFreeDoc(doc);
		doc = NULL;
	}
#if 0
xmlDocPtr xmlParseMemory(const char *buffer, int size) {
   return(xmlSAXParseMemory(NULL, buffer, size, 0));
}
#endif

#if 1
#define TMPBUFFER "<a>A</a>"
	xmlDocPtr doc2 = NULL;
	doc2 = xmlParseMemory(TMPBUFFER, strlen(TMPBUFFER));
	if (NULL != doc2) {
		xmlFreeDoc(doc2);
		xmlCleanupParser();
		doc2 = NULL;
	}
#endif
}
