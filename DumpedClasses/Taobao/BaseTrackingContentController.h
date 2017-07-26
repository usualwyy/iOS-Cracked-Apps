//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@interface BaseTrackingContentController : NSObject
{
    UIView *_contentView;
    NSString *_groupId;
}

+ (id)notificationName;
+ (id)type;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)receiveEvent:(id)arg1 withParams:(id)arg2;
- (void)fireEvent:(id)arg1 withParams:(id)arg2;
- (void)frameChanged:(struct CGRect)arg1;
- (void)onViewRemoved;
- (void)onViewAdded;
- (void)destroyView;
- (void)createViewWithFrame:(struct CGRect)arg1 params:(id)arg2 createdBlock:(CDUnknownBlockType)arg3;
- (id)initWithGroupId:(id)arg1;

@end

