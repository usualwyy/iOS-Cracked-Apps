//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBNewDetailedListConfigureModel, TBShareListTypeBean;

@interface TBNewDetailedListRequestModel : NSObject
{
    _Bool _needSyncToSquare;
    NSString *_name;
    NSString *_introduction;
    TBShareListTypeBean *_typeBean;
    TBNewDetailedListConfigureModel *_configureJSONModel;
}

+ (id)wishTypeBean;
+ (id)ordinaryTypeBean;
+ (id)emptyTypeBean;
+ (id)viewModelForWishDetailedList;
+ (id)viewModelForOrdinaryDetailedList;
@property(nonatomic) _Bool needSyncToSquare; // @synthesize needSyncToSquare=_needSyncToSquare;
@property(retain, nonatomic) TBNewDetailedListConfigureModel *configureJSONModel; // @synthesize configureJSONModel=_configureJSONModel;
@property(copy, nonatomic) TBShareListTypeBean *typeBean; // @synthesize typeBean=_typeBean;
@property(copy, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)updateWithConfigureJSONModel:(id)arg1;
- (id)init;

@end

