//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, UIView;

@protocol TBDetailModelStatusDelegate <NSObject>
- (void)handleWhenModelOkStatus:(UIView *)arg1;
- (void)handleWhenModelErrorStatus:(NSError *)arg1 forView:(UIView *)arg2 frame:(struct CGRect)arg3;
@end

