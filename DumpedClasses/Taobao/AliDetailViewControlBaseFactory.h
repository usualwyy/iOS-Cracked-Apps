//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AliDetailFactoryProtocol.h"

@class NSString;

@interface AliDetailViewControlBaseFactory : NSObject <AliDetailFactoryProtocol>
{
}

- (Class)searchComponentModelClass:(id)arg1;
- (Class)makeClass:(id)arg1;
- (id)componentMapDic;
- (void)setComponentMapDic:(id)arg1;
- (id)make:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

