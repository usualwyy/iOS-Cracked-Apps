//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBBuyQueryKey : NSObject
{
    NSString *_domain;
    NSString *_buildOrderApiName;
    NSString *_buildOrderVersion;
    NSString *_adjustOrderApiName;
    NSString *_adjustOrderVersion;
    NSString *_createOrderApiName;
    NSString *_createOrderVersion;
}

@property(retain, nonatomic) NSString *createOrderVersion; // @synthesize createOrderVersion=_createOrderVersion;
@property(retain, nonatomic) NSString *createOrderApiName; // @synthesize createOrderApiName=_createOrderApiName;
@property(retain, nonatomic) NSString *adjustOrderVersion; // @synthesize adjustOrderVersion=_adjustOrderVersion;
@property(retain, nonatomic) NSString *adjustOrderApiName; // @synthesize adjustOrderApiName=_adjustOrderApiName;
@property(retain, nonatomic) NSString *buildOrderVersion; // @synthesize buildOrderVersion=_buildOrderVersion;
@property(retain, nonatomic) NSString *buildOrderApiName; // @synthesize buildOrderApiName=_buildOrderApiName;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

