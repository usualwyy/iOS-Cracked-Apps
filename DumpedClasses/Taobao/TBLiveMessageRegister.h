//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBLiveMessageRegister : NSObject
{
    id <TBLiveMessageManagerDelegate> _msgDelegate;
}

+ (void)registerLinkLiveMessage;
+ (void)registerAllMessage;
+ (id)sharedInstance;
@property(nonatomic) __weak id <TBLiveMessageManagerDelegate> msgDelegate; // @synthesize msgDelegate=_msgDelegate;
- (void).cxx_destruct;
- (void)unregisterMessageListener:(id)arg1;
- (void)registerMessageListener:(id)arg1;

@end

