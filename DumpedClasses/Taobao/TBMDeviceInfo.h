//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBMDeviceInfo : NSObject
{
    _Bool _isMasterDevice;
    _Bool _isCurrentDevice;
    int _deviceType;
    NSString *_itemId;
    NSString *_deviceName;
    NSString *_gmtCreate;
}

@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) _Bool isCurrentDevice; // @synthesize isCurrentDevice=_isCurrentDevice;
@property(nonatomic) _Bool isMasterDevice; // @synthesize isMasterDevice=_isMasterDevice;
@property(copy, nonatomic) NSString *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

