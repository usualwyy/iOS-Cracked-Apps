//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBTradeRecmdCellModel.h"

@class NSMutableArray<TBTradeRecmdItemModel>, NSString;

@interface TBTradeRecmdCellModel : NSObject <TBTradeRecmdCellModel>
{
    NSMutableArray<TBTradeRecmdItemModel> *_childItemModels;
    unsigned long long _maxCountOfItemModels;
}

@property(nonatomic) unsigned long long maxCountOfItemModels; // @synthesize maxCountOfItemModels=_maxCountOfItemModels;
@property(retain, nonatomic) NSMutableArray<TBTradeRecmdItemModel> *childItemModels; // @synthesize childItemModels=_childItemModels;
- (void).cxx_destruct;
- (id)childModels;
- (id)initWithChildModels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

