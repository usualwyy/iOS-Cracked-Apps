//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBURLActionHandler.h"

@class NSString;

@interface TBRateURLResolver : NSObject <TBURLActionHandler>
{
}

- (_Bool)isOrderRateSubmitSuccessURL:(id)arg1;
- (_Bool)isOrderRateURL:(id)arg1;
- (_Bool)isOrderAppendRateURL:(id)arg1;
- (_Bool)isCommentForRateEdit:(id)arg1;
- (id)handleURLActionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

