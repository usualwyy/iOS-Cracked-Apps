//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBItemSearchInshopHotWord : TBJSONModel
{
    NSString *_keyword;
    long long _type;
}

+ (_Bool)strictMode;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;

@end

