//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray<TBSCMyPathItemDO>, NSString;

@interface TBSCMyPathDO : TBJSONModel
{
    NSMutableArray<TBSCMyPathItemDO> *_myPathItemDOs;
    NSString *_date;
}

@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSMutableArray<TBSCMyPathItemDO> *myPathItemDOs; // @synthesize myPathItemDOs=_myPathItemDOs;
- (void).cxx_destruct;

@end

