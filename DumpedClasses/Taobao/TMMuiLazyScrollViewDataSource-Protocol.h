//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TMMuiLazyScrollView, TMMuiRectModel, UIView;

@protocol TMMuiLazyScrollViewDataSource <NSObject>
- (UIView *)scrollView:(TMMuiLazyScrollView *)arg1 itemByMuiID:(NSString *)arg2;
- (TMMuiRectModel *)scrollView:(TMMuiLazyScrollView *)arg1 rectModelAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemInScrollView:(TMMuiLazyScrollView *)arg1;
@end

