//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBTakeoutAskItemModel : TBJSONModel
{
    NSString *_question;
    long long _answerNum;
}

@property(nonatomic) long long answerNum; // @synthesize answerNum=_answerNum;
@property(copy, nonatomic) NSString *question; // @synthesize question=_question;
- (void).cxx_destruct;

@end

