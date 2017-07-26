//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBAddressBookMessageAvatarsView, TBAddressBookMessageChangeNameView, TBAddressBookMessageShareNameView;

@interface TBAddressBookMessageFloatContainerView : UIView
{
    _Bool _present;
    _Bool _animation;
    _Bool _messageAvatarsAnimation;
    TBAddressBookMessageShareNameView *_messageShareNameView;
    TBAddressBookMessageChangeNameView *_messageChangeNameView;
    TBAddressBookMessageAvatarsView *_messageAvatarsView;
}

+ (id)messageFloatContainerView;
@property(retain, nonatomic) TBAddressBookMessageAvatarsView *messageAvatarsView; // @synthesize messageAvatarsView=_messageAvatarsView;
@property(retain, nonatomic) TBAddressBookMessageChangeNameView *messageChangeNameView; // @synthesize messageChangeNameView=_messageChangeNameView;
@property(retain, nonatomic) TBAddressBookMessageShareNameView *messageShareNameView; // @synthesize messageShareNameView=_messageShareNameView;
@property(nonatomic, getter=isMessageAvatarsAnimation) _Bool messageAvatarsAnimation; // @synthesize messageAvatarsAnimation=_messageAvatarsAnimation;
@property(nonatomic, getter=isAnimation) _Bool animation; // @synthesize animation=_animation;
@property(nonatomic, getter=isPresent) _Bool present; // @synthesize present=_present;
- (void).cxx_destruct;
- (void)clearText;
- (void)setMessageChangeNameViewText:(id)arg1;
- (void)hideMessageChangeNameView;
- (void)showMessageChangeNameView;
- (void)removeMessageAvatar:(id)arg1;
- (void)addMessageAvatar:(id)arg1;
- (void)reloadMessageAvatarsViewWithMessageAvatarModels:(id)arg1;
- (void)updateMessageShareName:(id)arg1;
- (double)heightForMessageAvatarsView;
- (void)hideKeyBoardIfNeed;
- (_Bool)messageFloatContainerViewIsFirstResponder;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

