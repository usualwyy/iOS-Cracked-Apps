//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBLiveRewardMsgModel : TBJSONModel
{
    NSString *_msgId;
    NSString *_senderId;
    NSString *_senderNick;
    NSString *_price;
    NSString *_taskId;
    NSString *_comboNum;
    NSString *_animationType;
    NSString *_displayTime;
    NSString *_gapTime;
    NSString *_filePath;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *gapTime; // @synthesize gapTime=_gapTime;
@property(copy, nonatomic) NSString *displayTime; // @synthesize displayTime=_displayTime;
@property(copy, nonatomic) NSString *animationType; // @synthesize animationType=_animationType;
@property(copy, nonatomic) NSString *comboNum; // @synthesize comboNum=_comboNum;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *senderNick; // @synthesize senderNick=_senderNick;
@property(copy, nonatomic) NSString *senderId; // @synthesize senderId=_senderId;
@property(copy, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
- (void).cxx_destruct;

@end

