//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBFavoriteNewPageInfo : TBJSONModel
{
    _Bool _hasMore;
    long long _startRow;
    long long _totalCount;
    long long _pageSize;
    NSString *_nextStartTime;
}

@property(retain, nonatomic) NSString *nextStartTime; // @synthesize nextStartTime=_nextStartTime;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long startRow; // @synthesize startRow=_startRow;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;

@end

