//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeAppEngine.h"

@class TBWeAppMockManager, TBWeAppUserTrack;

@interface TBWeAppEngine : WeAppEngine
{
    TBWeAppMockManager *_mockData;
    TBWeAppUserTrack *_userTrack;
}

+ (void)initialize;
@property(retain, nonatomic) TBWeAppUserTrack *userTrack; // @synthesize userTrack=_userTrack;
@property(retain, nonatomic) TBWeAppMockManager *mockData; // @synthesize mockData=_mockData;
- (void).cxx_destruct;
- (void)hideErrorView;
- (void)showErrorView;
- (void)unregisterEngine;
- (void)engineRegister;
- (void)renderWithPage:(id)arg1 withParam:(id)arg2 withData:(id)arg3 byFrame:(struct CGRect)arg4 onResult:(CDUnknownBlockType)arg5;
- (void)setViewController:(id)arg1;
- (void)setupEngine;
- (void)dealloc;
- (id)init;
- (_Bool)needAlert;

@end

