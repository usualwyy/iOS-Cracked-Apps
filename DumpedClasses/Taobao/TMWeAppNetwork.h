//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeAppNetwork.h"

@class TMWeAppMockManager;

@interface TMWeAppNetwork : WeAppNetwork
{
    _Bool _needLogin;
    TMWeAppMockManager *_mockData;
}

@property(nonatomic) _Bool needLogin; // @synthesize needLogin=_needLogin;
@property(retain, nonatomic) TMWeAppMockManager *mockData; // @synthesize mockData=_mockData;
- (void).cxx_destruct;
- (void)dealloc;
- (void)callWithAuthCheck:(id)arg1 method:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3;
- (void)request:(id)arg1 withParam:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;

@end

