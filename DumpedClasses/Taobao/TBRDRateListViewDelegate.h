//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCTableViewDelegate.h"

@interface TBRDRateListViewDelegate : TBCTableViewDelegate
{
    CDUnknownBlockType _tableViewStopScrollHandler;
    CDUnknownBlockType _tableViewDidScrollHandler;
}

@property(copy, nonatomic) CDUnknownBlockType tableViewDidScrollHandler; // @synthesize tableViewDidScrollHandler=_tableViewDidScrollHandler;
@property(copy, nonatomic) CDUnknownBlockType tableViewStopScrollHandler; // @synthesize tableViewStopScrollHandler=_tableViewStopScrollHandler;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;

@end

