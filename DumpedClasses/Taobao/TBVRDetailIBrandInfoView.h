//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBVRItemModel, UILabel;

@interface TBVRDetailIBrandInfoView : UIView
{
    UILabel *_storeName;
    UILabel *_addrIcon;
    UILabel *_addrName;
    TBVRItemModel *_model;
}

@property(retain, nonatomic) TBVRItemModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupView;

@end

