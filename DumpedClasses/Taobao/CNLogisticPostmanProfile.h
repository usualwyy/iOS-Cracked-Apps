//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface CNLogisticPostmanProfile : TBJSONModel
{
    NSString *_mobile;
    NSString *_photoUrl;
    NSString *_name;
    NSString *_partnerName;
    NSString *_siteName;
    long long _praiseCount;
    long long _depraiseCount;
}

@property(nonatomic) long long depraiseCount; // @synthesize depraiseCount=_depraiseCount;
@property(nonatomic) long long praiseCount; // @synthesize praiseCount=_praiseCount;
@property(retain, nonatomic) NSString *siteName; // @synthesize siteName=_siteName;
@property(retain, nonatomic) NSString *partnerName; // @synthesize partnerName=_partnerName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
- (void).cxx_destruct;

@end

