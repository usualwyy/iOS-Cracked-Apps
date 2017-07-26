//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTradeComponentModel.h"

@class NSMutableArray;

@interface TBTradeRichSelectModel : TBTradeComponentModel
{
    NSMutableArray *_options;
}

@property(retain, nonatomic) NSMutableArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)loadOptionArray:(id)arg1;
- (id)selectedId;
- (id)ruleUrl;
- (id)optionWarn;
- (id)optionTitle;
- (id)value;
- (id)title;
- (id)icon;
- (void)setSelectedId:(id)arg1;
- (id)getSelectOptionById:(id)arg1;
- (void)reload:(id)arg1;
- (id)initWithData:(id)arg1 withBuyEngine:(id)arg2;

@end
