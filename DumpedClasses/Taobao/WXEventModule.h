//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXEventModuleProtocol.h"

@class NSString, WXSDKInstance;

@interface WXEventModule : NSObject <WXEventModuleProtocol>
{
    WXSDKInstance *weexInstance;
}

+ (id)wx_export_method_21;
+ (id)wx_export_method_20;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1;
- (void)openURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

