//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface TBTradeCardModel : NSObject
{
    NSMutableDictionary *_data;
}

@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)setSelectedValue:(id)arg1;
@property(readonly, nonatomic) NSString *tips;
@property(readonly, nonatomic) NSString *selectedValue;
@property(readonly, nonatomic) NSString *cardTitle;
@property(readonly, nonatomic) NSString *cardName;
- (id)initWithData:(id)arg1;

@end

