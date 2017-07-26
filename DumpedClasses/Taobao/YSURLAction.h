//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL;

@interface YSURLAction : NSObject
{
    _Bool _modal;
    _Bool _animated;
    long long _type;
    NSURL *_url;
    long long _os;
    NSString *_identifier;
    NSString *_scheme;
    NSString *_host;
    NSString *_path;
    NSString *_paramsStr;
    NSDictionary *_params;
    NSDictionary *_nativeParams;
    long long _presentStyle;
    long long _transitionStyle;
}

+ (void)pushAfterCheckUrlType:(id)arg1;
@property(nonatomic) long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property(nonatomic) long long presentStyle; // @synthesize presentStyle=_presentStyle;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) _Bool modal; // @synthesize modal=_modal;
@property(retain, nonatomic) NSDictionary *nativeParams; // @synthesize nativeParams=_nativeParams;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *paramsStr; // @synthesize paramsStr=_paramsStr;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long os; // @synthesize os=_os;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (Class)nativeClass;
- (Class)clazz;
- (id)initWithURLStirng:(id)arg1 params:(id)arg2;

@end

