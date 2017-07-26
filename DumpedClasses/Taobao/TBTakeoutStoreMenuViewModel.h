//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTakeoutNewViewModel.h"

@class NSArray, NSMutableArray, NSString;

@interface TBTakeoutStoreMenuViewModel : TBTakeoutNewViewModel
{
    _Bool _light;
    _Bool _itemCanAddToCart;
    long long _categoryId;
    NSString *_name;
    NSString *_sign;
    NSString *_icon;
    long long _numberInCart;
    long long _sortValue;
    NSString *_menuDescription;
    NSArray *_activityViewModels;
    NSArray *_itemViewModels;
    NSMutableArray *_activityViewModelList;
    NSMutableArray *_itemViewModelList;
    struct CGSize _nameSize;
}

@property(retain, nonatomic) NSMutableArray *itemViewModelList; // @synthesize itemViewModelList=_itemViewModelList;
@property(retain, nonatomic) NSMutableArray *activityViewModelList; // @synthesize activityViewModelList=_activityViewModelList;
@property(copy, nonatomic) NSArray *itemViewModels; // @synthesize itemViewModels=_itemViewModels;
@property(copy, nonatomic) NSArray *activityViewModels; // @synthesize activityViewModels=_activityViewModels;
@property(nonatomic) _Bool itemCanAddToCart; // @synthesize itemCanAddToCart=_itemCanAddToCart;
@property(copy, nonatomic) NSString *menuDescription; // @synthesize menuDescription=_menuDescription;
@property(nonatomic) long long sortValue; // @synthesize sortValue=_sortValue;
@property(nonatomic) long long numberInCart; // @synthesize numberInCart=_numberInCart;
@property(nonatomic) struct CGSize nameSize; // @synthesize nameSize=_nameSize;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool light; // @synthesize light=_light;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;
- (void)parseResult:(id)arg1;

@end

