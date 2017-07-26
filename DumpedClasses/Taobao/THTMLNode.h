//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface THTMLNode : NSObject
{
    struct _xmlNode *_node;
}

- (id)rawContents;
- (id)allContents;
- (int)nodetype;
- (id)contents;
- (void)appendChildContentsToString:(id)arg1 inNode:(struct _xmlNode *)arg2;
- (id)initWithXMLNode:(struct _xmlNode *)arg1;
- (id)findChildrenOfClass:(id)arg1;
- (id)findChildrenWithAttribute:(id)arg1 matchingName:(id)arg2 allowPartial:(_Bool)arg3;
- (id)findChildOfClass:(id)arg1;
- (id)findChildWithAttribute:(id)arg1 matchingName:(id)arg2 allowPartial:(_Bool)arg3;
- (id)findChildWithAttribute:(const char *)arg1 matchingName:(const char *)arg2 inXMLNode:(struct _xmlNode *)arg3 allowPartial:(_Bool)arg4;
- (id)children;
- (id)findChildTag:(id)arg1;
- (id)findChildTag:(id)arg1 inXMLNode:(struct _xmlNode *)arg2;
- (id)findChildTags:(id)arg1;
- (void)findChildTags:(id)arg1 inXMLNode:(struct _xmlNode *)arg2 inArray:(id)arg3;
- (void)findChildrenWithAttribute:(const char *)arg1 matchingName:(const char *)arg2 inXMLNode:(struct _xmlNode *)arg3 inArray:(id)arg4 allowPartial:(_Bool)arg5;
- (id)firstChild;
- (id)tagName;
- (id)className;
- (id)getAttributeNamed:(id)arg1;
- (id)previousSibling;
- (id)nextSibling;
- (id)parent;

@end

