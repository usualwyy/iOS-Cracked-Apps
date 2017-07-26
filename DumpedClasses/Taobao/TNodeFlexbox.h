//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TNodeFlexbox : NSObject
{
    struct TNODENode *node;
    double _margin;
    double _padding;
    double _borderWidth;
    CDUnknownBlockType _measureBlock;
    CDUnknownBlockType _childrenAtIndexBlock;
    CDUnknownBlockType _childrenCountBlock;
}

@property(copy, nonatomic) CDUnknownBlockType childrenCountBlock; // @synthesize childrenCountBlock=_childrenCountBlock;
@property(copy, nonatomic) CDUnknownBlockType childrenAtIndexBlock; // @synthesize childrenAtIndexBlock=_childrenAtIndexBlock;
@property(copy, nonatomic) CDUnknownBlockType measureBlock; // @synthesize measureBlock=_measureBlock;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) double margin; // @synthesize margin=_margin;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect frame;
- (void)prepareForLayout;
- (void)resetNodeLayout;
- (void)layout:(struct CGSize)arg1;
@property(nonatomic) double borderEndWidth;
@property(nonatomic) double borderStartWidth;
@property(nonatomic) double borderBottomWidth;
@property(nonatomic) double borderRightWidth;
@property(nonatomic) double borderTopWidth;
@property(nonatomic) double borderLeftWidth;
@property(nonatomic) double paddingVertical;
@property(nonatomic) double paddingHorizontal;
@property(nonatomic) double paddingEnd;
@property(nonatomic) double paddingStart;
@property(nonatomic) double paddingBottom;
@property(nonatomic) double paddingRight;
@property(nonatomic) double paddingTop;
@property(nonatomic) double paddingLeft;
@property(nonatomic) double marginVertical;
@property(nonatomic) double marginHorizontal;
@property(nonatomic) double marginEnd;
@property(nonatomic) double marginStart;
@property(nonatomic) double marginBottom;
@property(nonatomic) double marginRight;
@property(nonatomic) double marginTop;
@property(nonatomic) double marginLeft;
@property(nonatomic) double end;
@property(nonatomic) double start;
@property(nonatomic) double bottom;
@property(nonatomic) double right;
@property(nonatomic) double top;
@property(nonatomic) double left;
@property(nonatomic) double maxHeight;
@property(nonatomic) double maxWidth;
@property(nonatomic) double minHeight;
@property(nonatomic) double minWidth;
@property(nonatomic) double height;
@property(nonatomic) double width;
@property(nonatomic) double flexBasis;
@property(nonatomic) double flexShrink;
@property(nonatomic) double flexGrow;
@property(nonatomic) double flex;
@property(nonatomic) _Bool display;
@property(nonatomic) int overflow;
@property(nonatomic) int positionType;
@property(nonatomic) _Bool flexWrap;
@property(nonatomic) int alignContent;
@property(nonatomic) int alignItems;
@property(nonatomic) int alignSelf;
@property(nonatomic) int justify;
@property(nonatomic) int flexDirection;
@property(nonatomic) int direction;
- (void)dealloc;
- (id)init;

@end

