//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TBSearchViewModel : NSObject
{
    id <TBSearchViewComponent> _uiComponent;
    NSMutableArray *_subViewModels;
}

@property(retain, nonatomic) NSMutableArray *subViewModels; // @synthesize subViewModels=_subViewModels;
@property(nonatomic) __weak id <TBSearchViewComponent> uiComponent; // @synthesize uiComponent=_uiComponent;
- (void).cxx_destruct;
- (void)loadDataFailed:(id)arg1;
- (void)dataLoaded;
- (void)stopLoading;
- (void)startLoading;
- (void)unregisterSubViewModel:(id)arg1;
- (void)registerSubViewModel:(id)arg1;
- (id)init;

@end

