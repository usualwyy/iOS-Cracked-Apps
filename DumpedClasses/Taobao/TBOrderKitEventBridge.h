//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBOrderKitEventBridge : NSObject
{
    id <TBOrderKitEventBridgeProtocol> _eventTarget;
    id <TBAdaptationProtocol> _adaptationTarget;
}

@property(nonatomic) __weak id <TBAdaptationProtocol> adaptationTarget; // @synthesize adaptationTarget=_adaptationTarget;
@property(nonatomic) __weak id <TBOrderKitEventBridgeProtocol> eventTarget; // @synthesize eventTarget=_eventTarget;
- (void).cxx_destruct;
- (void)registerEngineCallback;
- (id)initWithTarget:(id)arg1;

@end

