//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBAreaModel : TBJSONModel
{
    NSString *_areaCode;
    NSString *_city;
    NSString *_country;
    NSString *_fullname;
    NSString *_province;
}

@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *fullname; // @synthesize fullname=_fullname;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *areaCode; // @synthesize areaCode=_areaCode;
- (void).cxx_destruct;

@end

