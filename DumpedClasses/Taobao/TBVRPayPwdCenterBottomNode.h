//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUIDillyNode.h"

#import "TBVRPayNodeProtocol.h"

@class NSMutableArray, NSString, TBVRUIManager, UIImageView;

@interface TBVRPayPwdCenterBottomNode : VUIDillyNode <TBVRPayNodeProtocol>
{
    _Bool _isDeleteDisabled;
    CDUnknownBlockType _inputOneNum;
    CDUnknownBlockType _deleteOneNum;
    TBVRUIManager *_manager;
    UIImageView *_textureView;
    NSMutableArray *_buttonNodes;
}

@property(retain, nonatomic) NSMutableArray *buttonNodes; // @synthesize buttonNodes=_buttonNodes;
@property(retain, nonatomic) UIImageView *textureView; // @synthesize textureView=_textureView;
@property(nonatomic) __weak TBVRUIManager *manager; // @synthesize manager=_manager;
@property(copy, nonatomic) CDUnknownBlockType deleteOneNum; // @synthesize deleteOneNum=_deleteOneNum;
@property(copy, nonatomic) CDUnknownBlockType inputOneNum; // @synthesize inputOneNum=_inputOneNum;
@property(nonatomic) _Bool isDeleteDisabled; // @synthesize isDeleteDisabled=_isDeleteDisabled;
- (void).cxx_destruct;
- (void)redrawWithData:(id)arg1;
- (void)deleteNumByNod:(id)arg1;
- (void)deleteNum:(id)arg1;
- (void)inputOneNumByNod:(id)arg1;
- (void)inputOneNum:(id)arg1;
- (id)initWithParams:(id)arg1 data:(id)arg2 manager:(id)arg3;
@property(readonly, nonatomic) double ptHeight;
@property(readonly, nonatomic) double ptWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

