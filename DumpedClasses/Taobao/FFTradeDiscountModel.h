//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTradeComponentModel.h"

@class FFTradeDiscountOption, NSArray, NSString;

@interface FFTradeDiscountModel : TBTradeComponentModel
{
    FFTradeDiscountOption *_selectedOption;
    NSArray *_options;
}

@property(readonly, nonatomic) NSArray *options; // @synthesize options=_options;
@property(readonly, nonatomic) FFTradeDiscountOption *selectedOption; // @synthesize selectedOption=_selectedOption;
- (void).cxx_destruct;
- (void)_setupOptions;
@property(readonly, nonatomic) NSString *coName;
@property(readonly, nonatomic) NSString *selectedFullName;
@property(readonly, nonatomic) NSString *selectedName;
@property(retain, nonatomic) NSString *selectedId;
- (void)reload:(id)arg1;
- (id)initWithData:(id)arg1 withBuyEngine:(id)arg2;

@end

