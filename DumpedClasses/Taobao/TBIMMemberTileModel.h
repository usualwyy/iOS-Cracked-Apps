//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface TBIMMemberTileModel : NSObject
{
    _Bool _needShowTitle;
    _Bool _needShowArrow;
    _Bool _canMemberViewSelected;
    _Bool _canAdd;
    _Bool _canDelete;
    _Bool _addEnabel;
    NSString *_topLeftContent;
    NSString *_topRightContent;
    NSArray *_members;
    long long _maxColumn;
    double _betweenColumnGap;
    double _addAndDeletedCorner;
}

@property(nonatomic) _Bool addEnabel; // @synthesize addEnabel=_addEnabel;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(nonatomic) _Bool canAdd; // @synthesize canAdd=_canAdd;
@property(nonatomic) _Bool canMemberViewSelected; // @synthesize canMemberViewSelected=_canMemberViewSelected;
@property(nonatomic) _Bool needShowArrow; // @synthesize needShowArrow=_needShowArrow;
@property(nonatomic) _Bool needShowTitle; // @synthesize needShowTitle=_needShowTitle;
@property(nonatomic) double addAndDeletedCorner; // @synthesize addAndDeletedCorner=_addAndDeletedCorner;
@property(nonatomic) double betweenColumnGap; // @synthesize betweenColumnGap=_betweenColumnGap;
@property(nonatomic) long long maxColumn; // @synthesize maxColumn=_maxColumn;
@property(retain, nonatomic) NSArray *members; // @synthesize members=_members;
@property(copy, nonatomic) NSString *topRightContent; // @synthesize topRightContent=_topRightContent;
@property(copy, nonatomic) NSString *topLeftContent; // @synthesize topLeftContent=_topLeftContent;
- (void).cxx_destruct;
- (id)init;

@end

