//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ArgoWebViewComponentAdapter : NSObject
{
    CDUnknownBlockType _createWebViewBlock;
    CDUnknownBlockType _createCloseBtnBlock;
    CDUnknownBlockType _onLayoutCloseBtnBlock;
}

@property(copy, nonatomic) CDUnknownBlockType onLayoutCloseBtnBlock; // @synthesize onLayoutCloseBtnBlock=_onLayoutCloseBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType createCloseBtnBlock; // @synthesize createCloseBtnBlock=_createCloseBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType createWebViewBlock; // @synthesize createWebViewBlock=_createWebViewBlock;
- (void).cxx_destruct;
- (void)layoutCloseButton:(id)arg1;
- (id)createCloseButton;
- (id)createWebViewController;

@end

