//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FTCoreTextStyle, NSArray, NSString;

@interface FTCoreTextNode : NSObject
{
    _Bool _isClosed;
    _Bool _isLink;
    _Bool _isImage;
    _Bool _isBullet;
    FTCoreTextNode *_supernode;
    NSArray *_subnodes;
    FTCoreTextStyle *_style;
    long long _startLocation;
    NSString *_imageName;
    struct _NSRange _styleRange;
}

@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) _Bool isBullet; // @synthesize isBullet=_isBullet;
@property(nonatomic) _Bool isImage; // @synthesize isImage=_isImage;
@property(nonatomic) _Bool isLink; // @synthesize isLink=_isLink;
@property(nonatomic) long long startLocation; // @synthesize startLocation=_startLocation;
@property(nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) struct _NSRange styleRange; // @synthesize styleRange=_styleRange;
@property(copy, nonatomic) FTCoreTextStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *subnodes; // @synthesize subnodes=_subnodes;
@property(nonatomic) FTCoreTextNode *supernode; // @synthesize supernode=_supernode;
- (void).cxx_destruct;
- (id)nextNode;
- (id)previousNode;
- (id)subnodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)nodeIndex;
- (void)adjustStylesAndSubstylesRangesByRange:(struct _NSRange)arg1;
- (id)allSubnodes;
- (id)_allSubnodes;
- (id)descriptionOfTree;
- (id)descriptionToRoot;
- (id)description;
- (long long)numberOfParents;
- (void)insertSubnode:(id)arg1 beforeNode:(id)arg2;
- (void)insertSubnode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addSubnode:(id)arg1;

@end

