//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UILabel;

@interface TBIMMoblieContactsFriendsProfileView : UIView
{
    unsigned long long _miniMumFriendsNumber;
    NSArray *_friendsInContacts;
    UILabel *_totalFriendsNumberHintLabel;
    UILabel *_addFriendHintLabel;
    double _avatorGapWidth;
}

@property(nonatomic) double avatorGapWidth; // @synthesize avatorGapWidth=_avatorGapWidth;
@property(retain, nonatomic) UILabel *addFriendHintLabel; // @synthesize addFriendHintLabel=_addFriendHintLabel;
@property(retain, nonatomic) UILabel *totalFriendsNumberHintLabel; // @synthesize totalFriendsNumberHintLabel=_totalFriendsNumberHintLabel;
@property(retain, nonatomic) NSArray *friendsInContacts; // @synthesize friendsInContacts=_friendsInContacts;
@property(nonatomic) unsigned long long miniMumFriendsNumber; // @synthesize miniMumFriendsNumber=_miniMumFriendsNumber;
- (void).cxx_destruct;
- (id)friendAvatorViewAtIndex:(unsigned long long)arg1;
- (id)initWithMiniMumFriendsNumber:(unsigned long long)arg1 friendsInContact:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

