//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCartDataComponent.h"

@class NSString, TBCartCoudanComponent;

@interface TBCartShopComponent : TBCartDataComponent
{
    _Bool _editing;
    _Bool _checked;
    NSString *_subTitle;
    TBCartCoudanComponent *_coudan;
}

@property(retain, nonatomic) TBCartCoudanComponent *coudan; // @synthesize coudan=_coudan;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
- (void).cxx_destruct;
- (void)recalculateCheck;
- (_Bool)isEditing;
- (void)setEditing:(_Bool)arg1;
- (id)coudanUrl;
- (void)checkAll:(_Bool)arg1;
- (_Bool)isCheckAll;
@property(retain, nonatomic) NSString *url;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *icon;
@property(retain, nonatomic) NSString *shopId;
@property(retain, nonatomic) NSString *type;
@property(nonatomic) unsigned long long sellerId;
@property(retain, nonatomic) NSString *seller;
@property(nonatomic, getter=is11) _Bool is11;
@property(nonatomic) _Bool hasCoupon;
@property(nonatomic, getter=isChecked) _Bool checked;
- (void)setData:(id)arg1;
- (id)initWithData:(id)arg1;

@end

