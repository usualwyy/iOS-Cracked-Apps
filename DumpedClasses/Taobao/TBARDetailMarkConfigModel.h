//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray, NSString;

@interface TBARDetailMarkConfigModel : TBJSONModel
{
    NSMutableArray *_modelConfig;
    float _filter;
    NSString *_markName;
    NSString *_markPic;
    NSString *_modelData;
}

@property(copy, nonatomic) NSString *modelData; // @synthesize modelData=_modelData;
@property(nonatomic) float filter; // @synthesize filter=_filter;
@property(copy, nonatomic) NSString *markPic; // @synthesize markPic=_markPic;
@property(copy, nonatomic) NSString *markName; // @synthesize markName=_markName;
- (void).cxx_destruct;
- (id)modelConfig;

@end

