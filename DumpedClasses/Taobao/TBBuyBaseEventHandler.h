//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBBuyEventProtocol.h"

@class TBBuyViewBuilder;

@interface TBBuyBaseEventHandler : NSObject <TBBuyEventProtocol>
{
    TBBuyViewBuilder *_viewBuilder;
}

@property(nonatomic) __weak TBBuyViewBuilder *viewBuilder; // @synthesize viewBuilder=_viewBuilder;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (id)initWithViewBuilder:(id)arg1;

@end

