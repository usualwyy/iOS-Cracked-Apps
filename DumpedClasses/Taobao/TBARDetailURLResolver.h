//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBURLActionHandler.h"

@class NSString;

@interface TBARDetailURLResolver : NSObject <TBURLActionHandler>
{
}

- (id)handlePreviewURLActionRequest:(id)arg1;
- (_Bool)isPreview:(id)arg1;
- (_Bool)isArm64Architecture;
- (_Bool)isUnSupportDevice;
- (id)handleURLActionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

