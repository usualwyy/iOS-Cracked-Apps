//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface UTTracker : NSObject
{
    NSMutableDictionary *mGlobalArgs;
    NSMutableDictionary *mReserves;
    NSString *mTrackId;
    NSMutableDictionary *mNaviStackDict;
}

- (void).cxx_destruct;
- (void)refreshViewExposure:(id)arg1 viewIndex:(id)arg2;
- (void)refreshBlockExposure:(id)arg1;
- (void)refreshPageExposure;
- (void)setExposureView:(id)arg1 controlName:(id)arg2 viewIndex:(id)arg3 args:(id)arg4;
- (void)sender:(id)arg1 isSync:(_Bool)arg2;
- (void)send:(id)arg1;
- (id)getPageProperties:(id)arg1;
- (void)skipPage:(id)arg1;
- (void)updatePageStatus:(id)arg1 status:(int)arg2;
- (void)updatePageUrl:(id)arg1 url:(id)arg2;
- (void)addTPKItem:(id)arg1;
- (void)_updateNextPageUtparam:(id)arg1;
- (void)updateNextPageUtparam:(id)arg1;
- (void)updateNextPageProperties:(id)arg1;
- (void)updatePageUtparam:(id)arg1 utParamJson:(id)arg2;
- (void)updatePageProperties:(id)arg1 properties:(id)arg2;
- (void)updatePageName:(id)arg1 pageName:(id)arg2;
- (void)pageDisAppear:(id)arg1;
- (void)pageAppear:(id)arg1 withPageName:(id)arg2;
- (void)pageAppear:(id)arg1;
- (id)getGlobalProperty:(id)arg1;
- (void)removeGlobalProperty:(id)arg1;
- (void)setGlobalProperty:(id)arg1 value:(id)arg2;
- (id)initWithTrackId:(id)arg1;

@end

