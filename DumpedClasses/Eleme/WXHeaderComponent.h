//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

@class WXListComponent;

@interface WXHeaderComponent : WXComponent
{
    WXListComponent *_list;
}

@property(nonatomic) __weak WXListComponent *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (void)_calculateFrameWithSuperAbsolutePosition:(struct CGPoint)arg1 gatherDirtyComponents:(id)arg2;
- (void)_frameDidCalculated:(_Bool)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end

