//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL;

@interface HPUrlAction : NSObject
{
    NSURL *_url;
    NSDictionary *_params;
    NSString *_host;
    long long _type;
}

+ (void)pushAfterCheckUrlType:(id)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)livePlayUrlWithShareUrl:(id)arg1;
- (_Bool)isTBLiveShareUrl:(id)arg1;
- (Class)nativeTB;
- (Class)nativeClass;
- (Class)clazz;
- (id)initWithURLStirng:(id)arg1;

@end

