//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBLiveCPPopularColumnDataModel>, NSString;

@interface TBLiveCPPopularColumnGroupModel : TBJSONModel
{
    NSString *_bkPic;
    NSString *_ftPic;
    NSString *_titleBkColor;
    NSString *_popLiveTitleColor;
    NSArray<TBLiveCPPopularColumnDataModel> *_hpPopularLiveDatas;
}

@property(retain, nonatomic) NSArray<TBLiveCPPopularColumnDataModel> *hpPopularLiveDatas; // @synthesize hpPopularLiveDatas=_hpPopularLiveDatas;
@property(retain, nonatomic) NSString *popLiveTitleColor; // @synthesize popLiveTitleColor=_popLiveTitleColor;
@property(retain, nonatomic) NSString *titleBkColor; // @synthesize titleBkColor=_titleBkColor;
@property(retain, nonatomic) NSString *ftPic; // @synthesize ftPic=_ftPic;
@property(retain, nonatomic) NSString *bkPic; // @synthesize bkPic=_bkPic;
- (void).cxx_destruct;

@end

