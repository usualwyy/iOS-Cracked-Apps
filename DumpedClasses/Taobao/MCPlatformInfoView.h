//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MCPlatformInfoViewProtocol.h"

@class NSString;

@interface MCPlatformInfoView : UIView <MCPlatformInfoViewProtocol>
{
    UIView *_itemContainer;
}

@property(retain, nonatomic) UIView *itemContainer; // @synthesize itemContainer=_itemContainer;
- (void).cxx_destruct;
- (void)updateItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

