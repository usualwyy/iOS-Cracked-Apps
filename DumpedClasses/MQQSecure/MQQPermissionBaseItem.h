//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol MQQPermissionItemDelegate;

@interface MQQPermissionBaseItem : NSObject
{
    _Bool _stopPermissionAlert;
    long long _reminderType;
    long long _remindTimes;
    NSDate *_lastDate;
    id <MQQPermissionItemDelegate> _delegate;
}

@property(nonatomic) _Bool stopPermissionAlert; // @synthesize stopPermissionAlert=_stopPermissionAlert;
@property(nonatomic) id <MQQPermissionItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *lastDate; // @synthesize lastDate=_lastDate;
@property(nonatomic) long long remindTimes; // @synthesize remindTimes=_remindTimes;
@property(nonatomic) long long reminderType; // @synthesize reminderType=_reminderType;
- (void)showAlertViewWithTag:(long long)arg1 buttonType:(long long)arg2;
- (_Bool)shouldShowAlertView;
- (void)checkPermission;
- (void)dealloc;
- (id)init;

@end

