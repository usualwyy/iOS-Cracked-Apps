//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface ALPJumpParam : NSObject
{
    NSMutableDictionary *_extraParam;
    NSString *_linkKey;
    NSString *_degradeToH5Url;
    NSString *_backURL;
    NSString *_visa;
    NSString *_module;
    NSString *_currentViewName;
    NSString *_routeRule;
}

@property(copy, nonatomic) NSString *routeRule; // @synthesize routeRule=_routeRule;
@property(copy, nonatomic) NSString *currentViewName; // @synthesize currentViewName=_currentViewName;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(copy, nonatomic) NSString *visa; // @synthesize visa=_visa;
@property(copy, nonatomic) NSString *backURL; // @synthesize backURL=_backURL;
@property(copy, nonatomic) NSString *degradeToH5Url; // @synthesize degradeToH5Url=_degradeToH5Url;
@property(copy, nonatomic) NSString *linkKey; // @synthesize linkKey=_linkKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extraParam; // @synthesize extraParam=_extraParam;
- (id)ALP_visaString;
- (id)ALP_parseToJSONString;
- (id)isLegalParam;

@end

