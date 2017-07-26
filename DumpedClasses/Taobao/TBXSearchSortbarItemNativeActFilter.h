//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBXSearchSortbarItem.h"

@class NSDictionary, NSString, UIButton, UIImageView, UILabel;

@interface TBXSearchSortbarItemNativeActFilter : TBXSearchSortbarItem
{
    _Bool _itemSelected;
    NSDictionary *_actFilterData;
    UIButton *_itemView;
    UILabel *_showTextLabel;
    UIImageView *_iconImageView;
    NSString *_showText;
    NSString *_imgActive;
    NSString *_imgNormal;
    NSString *_trace;
    NSString *_paramKey;
    NSString *_paramValue;
}

@property(retain, nonatomic) NSString *paramValue; // @synthesize paramValue=_paramValue;
@property(retain, nonatomic) NSString *paramKey; // @synthesize paramKey=_paramKey;
@property(retain, nonatomic) NSString *trace; // @synthesize trace=_trace;
@property(retain, nonatomic) NSString *imgNormal; // @synthesize imgNormal=_imgNormal;
@property(retain, nonatomic) NSString *imgActive; // @synthesize imgActive=_imgActive;
@property(retain, nonatomic) NSString *showText; // @synthesize showText=_showText;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *showTextLabel; // @synthesize showTextLabel=_showTextLabel;
@property(retain, nonatomic) UIButton *itemView; // @synthesize itemView=_itemView;
@property(retain, nonatomic) NSDictionary *actFilterData; // @synthesize actFilterData=_actFilterData;
@property(nonatomic) _Bool itemSelected; // @synthesize itemSelected=_itemSelected;
- (void).cxx_destruct;
- (void)setImageWithUrl:(id)arg1;
- (void)setItemSelectedStatus:(_Bool)arg1;
- (void)onItemClick:(id)arg1;
- (void)processData;
- (id)getInitItemView;
- (id)initWithData:(id)arg1;

@end

