//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "TBWopcGatewayContext.h"

@class NSDictionary, NSMutableArray, NSString;

@interface wopc : WVDynamicHandler <TBWopcGatewayContext>
{
    NSMutableArray *_jsWopcList;
    NSDictionary *_origInputDict;
    NSString *_monitorPoint;
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (void)doAuth:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)invoke:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)getAuthList:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)init:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *monitorPoint; // @synthesize monitorPoint=_monitorPoint;
@property(retain, nonatomic) NSDictionary *origInputDict; // @synthesize origInputDict=_origInputDict;
@property(retain, nonatomic) NSMutableArray *jsWopcList; // @synthesize jsWopcList=_jsWopcList;
- (void).cxx_destruct;
- (id)getTidaNameWithData:(id)arg1;
- (id)monitorInfoString;
- (id)errorInfo:(id)arg1;
- (void)wopc:(id)arg1 tbWopc:(id)arg2 async:(id)arg3 withEvent:(id)arg4;
- (void)wopc:(id)arg1 tbWopc:(id)arg2 sync:(id)arg3;
- (_Bool)checkDomainWithWebView:(id)arg1 wvJSBResponseCallback:(CDUnknownBlockType)arg2;
- (void)doAuth:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)invoke:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)getAuthList:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)init:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

