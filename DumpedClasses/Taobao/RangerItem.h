//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, RangerBaseLayoutInfo, UIView;

@interface RangerItem : NSObject
{
    _Bool _isNeedLayout;
    NSDictionary *_attributes;
    UIView *_view;
    CDUnknownBlockType _clickBlock;
    RangerBaseLayoutInfo *_boxLayout;
    id <RangerTagProtocol> _baseTag;
    id <RangerTagProtocol> _hostTag;
    id <RangerTagProtocol> _hostTagHolder;
    id <RangerLayoutProtocol> _layouInstance;
}

@property(retain) id <RangerLayoutProtocol> layouInstance; // @synthesize layouInstance=_layouInstance;
@property(retain) id <RangerTagProtocol> hostTagHolder; // @synthesize hostTagHolder=_hostTagHolder;
@property __weak id <RangerTagProtocol> hostTag; // @synthesize hostTag=_hostTag;
@property(retain) id <RangerTagProtocol> baseTag; // @synthesize baseTag=_baseTag;
@property(retain) RangerBaseLayoutInfo *boxLayout; // @synthesize boxLayout=_boxLayout;
@property(copy) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property _Bool isNeedLayout; // @synthesize isNeedLayout=_isNeedLayout;
@property __weak UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (_Bool)isDisplayContent;
- (void)addFakeVarDictionary:(id)arg1 withVarName:(id)arg2;
- (id)getRangerValueForKey:(id)arg1;
- (void)setRangerValue:(id)arg1 forKey:(id)arg2;
- (void)style;
- (void)layout;
- (void)afterLayout;
@property(readonly, nonatomic) RangerBaseLayoutInfo *info;
- (id)rangerSubViews;
- (id)initWithView:(id)arg1 hostTag:(id)arg2;
- (void)dealloc;

@end

