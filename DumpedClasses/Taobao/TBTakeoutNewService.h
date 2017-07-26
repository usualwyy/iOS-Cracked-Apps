//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBSDKMTOPServer, TBTakeoutApi;

@interface TBTakeoutNewService : NSObject
{
    id <TBTakeoutNewServiceDelegate> _delegate;
    TBTakeoutApi *_api;
    TBSDKMTOPServer *_server;
}

@property(retain, nonatomic) TBSDKMTOPServer *server; // @synthesize server=_server;
@property(retain, nonatomic) TBTakeoutApi *api; // @synthesize api=_api;
@property(nonatomic) __weak id <TBTakeoutNewServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)parseResult:(id)arg1;
- (void)onFail:(id)arg1;
- (id)errorInfo:(id)arg1;
- (void)onFinish:(id)arg1;
- (void)cancel;
- (void)requestApi:(id)arg1 delegate:(id)arg2;

@end

