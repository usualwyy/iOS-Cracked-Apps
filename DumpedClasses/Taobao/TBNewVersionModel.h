//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBUpdateInfoModel;

@interface TBNewVersionModel : TBJSONModel
{
    NSString *_remindNum;
    NSString *_hasAvailableUpdate;
    TBUpdateInfoModel *_updateInfo;
}

@property(retain, nonatomic) TBUpdateInfoModel *updateInfo; // @synthesize updateInfo=_updateInfo;
@property(retain, nonatomic) NSString *hasAvailableUpdate; // @synthesize hasAvailableUpdate=_hasAvailableUpdate;
@property(retain, nonatomic) NSString *remindNum; // @synthesize remindNum=_remindNum;
- (void).cxx_destruct;

@end

