//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBURLActionHandler.h"

@class NSString;

@interface TBSmoothSSOURLHandler : NSObject <TBURLActionHandler>
{
}

+ (long long)tb_p_incAndRequestCounter;
+ (long long)tb_p_getRequestCounter;
+ (void)initialize;
- (void)tb_p_appendParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)tb_p_getUIWindow;
- (id)tb_p_getTopViewController;
- (void)cancelForSourceApplicaiton:(id)arg1;
- (void)ssoToSourceApplication:(id)arg1 t:(id)arg2 euuid:(id)arg3 ssoVersion:(id)arg4 sign:(id)arg5 targetURL:(id)arg6 ext:(id)arg7 slaveBundleId:(id)arg8;
- (id)handleURLActionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

