//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class TBFavDetailedListEditContext;

@interface TBFavDetailedListEditOperation : NSOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
    TBFavDetailedListEditContext *_context;
}

@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain, nonatomic) TBFavDetailedListEditContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)start;
- (id)initWithContext:(id)arg1;

@end

