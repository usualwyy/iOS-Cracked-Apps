//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FMSetting : NSObject
{
    _Bool _isAutoImageCompress;
    _Bool _isPostItemInWifi;
    _Bool _isOpenHeadPhone;
    int _listCellType;
    int _imageSetting;
    int _videoPlayEnvMode;
}

@property(nonatomic) int videoPlayEnvMode; // @synthesize videoPlayEnvMode=_videoPlayEnvMode;
@property(nonatomic) int imageSetting; // @synthesize imageSetting=_imageSetting;
@property(nonatomic) int listCellType; // @synthesize listCellType=_listCellType;
@property(nonatomic) _Bool isOpenHeadPhone; // @synthesize isOpenHeadPhone=_isOpenHeadPhone;
@property(nonatomic) _Bool isPostItemInWifi; // @synthesize isPostItemInWifi=_isPostItemInWifi;
@property(nonatomic) _Bool isAutoImageCompress; // @synthesize isAutoImageCompress=_isAutoImageCompress;
- (id)init;

@end
