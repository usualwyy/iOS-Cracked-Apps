//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBBaseShareHandler.h"

@class TBShareContent, TBShareQRCodeViewModel;

@interface TBQRCodeShareHandler : TBBaseShareHandler
{
    _Bool _isLoading;
    TBShareQRCodeViewModel *_qrcodeViewModel;
    TBShareContent *_content;
}

@property(retain, nonatomic) TBShareContent *content; // @synthesize content=_content;
@property(retain, nonatomic) TBShareQRCodeViewModel *qrcodeViewModel; // @synthesize qrcodeViewModel=_qrcodeViewModel;
- (void).cxx_destruct;
- (void)dismissQRView;
- (_Bool)canShare;
- (_Bool)taoPasswordIsValid:(id)arg1;
- (void)didPasswordRequestFinished:(id)arg1 afterHandler:(id)arg2;
- (void)copyTaopassword:(id)arg1 tpContentUrl:(id)arg2;
- (void)dispatchPart:(id)arg1;
- (void)shareToTarget:(id)arg1 withInfo:(id)arg2;
- (void)setViewController:(id)arg1;

@end

