#include <stdio.h>
#include <libxml/parser.h>
#include <libxml/tree.h>
int main(int argc, char **argv)
{
	xmlDocPtr doc = NULL;       //文件指针
	xmlNodePtr root_node = NULL, node = NULL, node1 = NULL;//节点指针

	// 创建一个文件，以及设置一个根节点
	doc = xmlNewDoc(BAD_CAST "1.0");
	root_node = xmlNewNode(NULL, BAD_CAST "root");
	xmlDocSetRootElement(doc, root_node);

	//创建一个绑定在根节点的子节
	xmlNewChild(root_node, NULL, BAD_CAST "node1",BAD_CAST "content of node1");

	//通过xmlNewProp()增加一个节点的属
	node=xmlNewChild(root_node, NULL, BAD_CAST "node3", BAD_CAST"node has attributes");
	xmlNewProp(node, BAD_CAST "attribute", BAD_CAST "yes");

	//创建节点的另一种方
	node = xmlNewNode(NULL, BAD_CAST "node4");
	node1 = xmlNewText(BAD_CAST"other way to create content");
	xmlAddChild(node, node1);
	xmlAddChild(root_node, node);

	//保存文件
	xmlSaveFormatFileEnc(argc > 1 ? argv[1] : "-", doc, "UTF-8", 1);
	/*free the document */
	xmlFreeDoc(doc);
	xmlCleanupParser();
	xmlMemoryDump();//debug memory for regression tests
	return(0);
}
