//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIView;

@interface UTExposureModel : NSObject
{
    NSString *_utExposureControlName;
    NSString *_utExposureViewIndex;
    NSDictionary *_utExposureArgs;
    UIView *_utExposureView;
}

@property(retain, nonatomic) UIView *utExposureView; // @synthesize utExposureView=_utExposureView;
@property(retain, nonatomic) NSDictionary *utExposureArgs; // @synthesize utExposureArgs=_utExposureArgs;
@property(retain, nonatomic) NSString *utExposureViewIndex; // @synthesize utExposureViewIndex=_utExposureViewIndex;
@property(retain, nonatomic) NSString *utExposureControlName; // @synthesize utExposureControlName=_utExposureControlName;
- (void).cxx_destruct;

@end

