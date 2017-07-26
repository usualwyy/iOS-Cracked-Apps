//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBHomePageOneSectionData, UIView;

@protocol TBHomeViewProvider <NSObject>
- (struct CGSize)renderSizeForHomeSection:(TBHomePageOneSectionData *)arg1;
- (UIView *)provideViewForHomeSection:(TBHomePageOneSectionData *)arg1;
- (_Bool)canProvideViewForHomeSection:(TBHomePageOneSectionData *)arg1;

@optional
- (void)didReceiveMemoryWarning;
- (void)prepareTemplateForHomeSection:(TBHomePageOneSectionData *)arg1 async:(_Bool)arg2;
@end

