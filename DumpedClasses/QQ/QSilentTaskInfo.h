//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QSilentTaskInfo : NSObject
{
    _Bool _shouldNotifyUI;
    short _totalTaskCount;
    short _doneTaskCount;
    long long _beginSeq;
    long long _endSeq;
}

@property(nonatomic) _Bool shouldNotifyUI; // @synthesize shouldNotifyUI=_shouldNotifyUI;
@property(nonatomic) short doneTaskCount; // @synthesize doneTaskCount=_doneTaskCount;
@property(nonatomic) short totalTaskCount; // @synthesize totalTaskCount=_totalTaskCount;
@property(nonatomic) long long endSeq; // @synthesize endSeq=_endSeq;
@property(nonatomic) long long beginSeq; // @synthesize beginSeq=_beginSeq;
- (id)init;

@end
