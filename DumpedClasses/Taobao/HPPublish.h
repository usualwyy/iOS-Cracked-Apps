//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HPPublishSuper.h"

@class NSString;

@interface HPPublish : HPPublishSuper
{
    NSString *_mtopAPI;
    NSString *_mtopVersion;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *mtopVersion; // @synthesize mtopVersion=_mtopVersion;
@property(copy, nonatomic) NSString *mtopAPI; // @synthesize mtopAPI=_mtopAPI;
- (void).cxx_destruct;
- (id)setupModelItems;
- (id)setupChaoWanEvent:(id)arg1;
- (id)setupChaoWanModel:(id)arg1;
- (id)setupDarenModel:(id)arg1;
- (id)setupGuangModel:(id)arg1;
- (void)popupPublisherForCW:(id)arg1 bizId:(id)arg2 eventId:(id)arg3;
- (void)popupPublishViewWithVC:(id)arg1 businessId:(id)arg2 channelId:(id)arg3;

@end

