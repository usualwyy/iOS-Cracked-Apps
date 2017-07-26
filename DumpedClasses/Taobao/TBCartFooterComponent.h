//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCartDataComponent.h"

@class TBCartFooterCheckAllComponent, TBCartFooterPayComponent, TBCartFooterQuantityComponent, TBCartFooterSubmitComponent, TBCartFooterWeightComponent;

@interface TBCartFooterComponent : TBCartDataComponent
{
    _Bool _editing;
    TBCartFooterCheckAllComponent *_checkAll;
    TBCartFooterPayComponent *_pay;
    TBCartFooterQuantityComponent *_quantity;
    TBCartFooterSubmitComponent *_submit;
    TBCartFooterWeightComponent *_weight;
}

@property(retain, nonatomic) TBCartFooterWeightComponent *weight; // @synthesize weight=_weight;
@property(retain, nonatomic) TBCartFooterSubmitComponent *submit; // @synthesize submit=_submit;
@property(retain, nonatomic) TBCartFooterQuantityComponent *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) TBCartFooterPayComponent *pay; // @synthesize pay=_pay;
@property(retain, nonatomic) TBCartFooterCheckAllComponent *checkAll; // @synthesize checkAll=_checkAll;
- (void).cxx_destruct;
- (void)recalculateCheck;
- (_Bool)isEditing;
- (void)setEditing:(_Bool)arg1;
- (void)checkAll:(_Bool)arg1;
- (_Bool)isCheckAll;
- (void)setData:(id)arg1;
- (id)initWithData:(id)arg1;

@end

