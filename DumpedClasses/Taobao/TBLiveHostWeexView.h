//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TBLiveWeexBaseView;

@interface TBLiveHostWeexView : UIView
{
    TBLiveWeexBaseView *_babyWeexView;
    NSString *_weexUrl;
    NSString *_liveId;
}

@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) NSString *weexUrl; // @synthesize weexUrl=_weexUrl;
@property(retain, nonatomic) TBLiveWeexBaseView *babyWeexView; // @synthesize babyWeexView=_babyWeexView;
- (void).cxx_destruct;
- (void)updateWeexView;
- (id)initWithFrame:(struct CGRect)arg1 url:(id)arg2 liveId:(id)arg3;

@end

