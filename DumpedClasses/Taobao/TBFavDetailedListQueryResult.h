//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray<TBFavDetailedList>;

@interface TBFavDetailedListQueryResult : TBJSONModel
{
    _Bool _hasMore;
    NSMutableArray<TBFavDetailedList> *_resultList;
}

@property(retain, nonatomic) NSMutableArray<TBFavDetailedList> *resultList; // @synthesize resultList=_resultList;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;
- (id)lastListCursor;

@end

