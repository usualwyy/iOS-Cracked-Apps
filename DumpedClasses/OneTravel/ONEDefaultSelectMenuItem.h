//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface ONEDefaultSelectMenuItem : JSONModel
{
    long long _startTime;
    long long _endTime;
    NSString *_menu_id;
    long long _id;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *menu_id; // @synthesize menu_id=_menu_id;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (_Bool)isValid;

@end
