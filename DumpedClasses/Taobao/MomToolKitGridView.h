//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray;

@interface MomToolKitGridView : UIView
{
    NSArray *_toolItemArray;
    NSMutableArray *_toolItemViewArray;
    id <MomToolKitGridViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MomToolKitGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *toolItemViewArray; // @synthesize toolItemViewArray=_toolItemViewArray;
@property(retain, nonatomic) NSArray *toolItemArray; // @synthesize toolItemArray=_toolItemArray;
- (void).cxx_destruct;
- (void)updateDataAtIndex:(long long)arg1 withRecord:(id)arg2;
- (void)updateData:(id)arg1;
- (void)initItems:(id)arg1;
- (id)initWithItems:(id)arg1;

@end

