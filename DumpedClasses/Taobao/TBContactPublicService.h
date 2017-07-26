//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBContactServiceProtocol.h"

@class NSString;

@interface TBContactPublicService : NSObject <TBContactServiceProtocol>
{
}

- (id)shareContactViewWithItem:(id)arg1 tapBlock:(CDUnknownBlockType)arg2 shareResultBlock:(CDUnknownBlockType)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;
- (void)shareContactWithItem:(id)arg1 currentViewController:(id)arg2 shareResultBlock:(CDUnknownBlockType)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;
- (void)attemptToAddressBookViewControllerWithShareItem:(id)arg1 shareResultBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
- (void)presentAddressBookViewControllerWithShareItem:(id)arg1 shareResultBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
- (id)encodeURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

