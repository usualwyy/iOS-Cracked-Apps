//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliTradeSKUPropSelectControl.h"

@class AliDetailModel, NSArray;

@interface AliTradeTmallServiceSelectControl : AliTradeSKUPropSelectControl
{
    _Bool _isMultiSelected;
    _Bool _groupMustSelect;
    _Bool _groupMulti;
    NSArray *_serviceUnits;
    AliDetailModel *_tbDetailModel;
}

@property(nonatomic) __weak AliDetailModel *tbDetailModel; // @synthesize tbDetailModel=_tbDetailModel;
@property(nonatomic) _Bool groupMulti; // @synthesize groupMulti=_groupMulti;
@property(nonatomic) _Bool groupMustSelect; // @synthesize groupMustSelect=_groupMustSelect;
@property(retain, nonatomic) NSArray *serviceUnits; // @synthesize serviceUnits=_serviceUnits;
@property(nonatomic) _Bool isMultiSelected; // @synthesize isMultiSelected=_isMultiSelected;
- (void).cxx_destruct;
- (_Bool)isMustSelectInGroup:(id)arg1;
- (void)layoutSubviews;
- (void)propButtonClicked:(id)arg1;
- (void)setHighlightEnabled:(_Bool)arg1 forIndex:(unsigned long long)arg2;
- (void)setSelected:(_Bool)arg1 enabled:(_Bool)arg2 forIndex:(unsigned long long)arg3 isInit:(_Bool)arg4;
- (id)createButton:(id)arg1;

@end

