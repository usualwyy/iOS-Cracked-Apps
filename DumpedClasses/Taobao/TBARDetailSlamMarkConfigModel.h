//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBARDetailSlamMarkConfigModel : TBJSONModel
{
    float _dpi;
    float _scale;
    NSString *_markName;
    NSString *_configName;
}

@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float dpi; // @synthesize dpi=_dpi;
@property(copy, nonatomic) NSString *configName; // @synthesize configName=_configName;
@property(copy, nonatomic) NSString *markName; // @synthesize markName=_markName;
- (void).cxx_destruct;

@end

