//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBEnvasViewProvider.h"

@class NSString, UIView;

@interface TBTabViewProvider : NSObject <TBEnvasViewProvider>
{
    long long _alwaysSelectedIndex;
    UIView *_tabView;
}

@property(retain, nonatomic) UIView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) long long alwaysSelectedIndex; // @synthesize alwaysSelectedIndex=_alwaysSelectedIndex;
- (void).cxx_destruct;
- (double)marginTopwithData:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize)viewSizeWithData:(id)arg1 atIndexPath:(id)arg2;
- (void)makeSelectionEnabled:(_Bool)arg1;
- (void)changeSelectedIndex:(long long)arg1;
- (id)generateTabViewWithAlwaysSelect:(_Bool)arg1;
- (void)fillViewInReuseCell:(id)arg1 withData:(id)arg2 atIndexPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

