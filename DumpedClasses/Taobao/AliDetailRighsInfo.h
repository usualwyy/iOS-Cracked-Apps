//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface AliDetailRighsInfo : TBJSONModel
{
    _Bool _isUseIconFont;
    NSString *_name;
    NSString *_icon;
    NSArray *_desc;
    NSString *_serviceId;
    NSString *_showType;
}

+ (id)jsonToModelKeyMapDictionary;
@property(retain, nonatomic) NSString *showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property(retain, nonatomic) NSArray *desc; // @synthesize desc=_desc;
@property(nonatomic) _Bool isUseIconFont; // @synthesize isUseIconFont=_isUseIconFont;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithConsumerProtectionItemModel:(id)arg1;

@end

