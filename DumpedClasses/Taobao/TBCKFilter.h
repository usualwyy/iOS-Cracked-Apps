//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, VSFilter;

@interface TBCKFilter : NSObject
{
    NSDictionary *_plusInfo;
    VSFilter *_innerFilter;
}

+ (id)filterWithFilterType:(long long)arg1 plusInfo:(id)arg2;
+ (id)filterWithFilterType:(long long)arg1;
+ (id)filterWithCIFilterName:(id)arg1;
+ (id)emptyFilter;
@property(retain, nonatomic) VSFilter *innerFilter; // @synthesize innerFilter=_innerFilter;
@property(retain, nonatomic) NSDictionary *plusInfo; // @synthesize plusInfo=_plusInfo;
- (void).cxx_destruct;
- (id)UIImageByProcessingUIImage:(id)arg1;
- (id)imageByProcessingImage:(id)arg1 atTime:(double)arg2;
@property(retain, nonatomic) NSString *name;
- (id)init;

@end

