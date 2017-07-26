//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface WeAppSectionLayoutManager : NSObject
{
    long long _currentSectionIndex;
    NSMutableArray *_sectionLayouts;
}

@property(retain, nonatomic) NSMutableArray *sectionLayouts; // @synthesize sectionLayouts=_sectionLayouts;
@property(nonatomic) long long currentSectionIndex; // @synthesize currentSectionIndex=_currentSectionIndex;
- (void).cxx_destruct;
- (id)getCurrentSectionWithOffset:(id)arg1;
- (long long)getCurrentSectionIndexWithOffset:(id)arg1;
- (id)getCurrentSectionViewWithOffset:(id)arg1;
- (void)refreshSectionLayoutsWithOffset:(id)arg1;
- (void)setupSectionLayoutsWithOffset:(id)arg1;
- (void)resetSectionLayouts;
- (id)init;

@end

