//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBMy3DTagView;

@protocol TBMy3DTagViewDelegate <NSObject>
- (void)TBMy3DTagViewLinkTapped:(NSString *)arg1;
- (void)TBMy3DTagViewLiked:(TBMy3DTagView *)arg1 doLike:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
@end

