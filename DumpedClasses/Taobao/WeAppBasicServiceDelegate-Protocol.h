//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, WeAppBasicService;

@protocol WeAppBasicServiceDelegate <NSObject>

@optional
- (void)serviceDataOperationFinished:(WeAppBasicService *)arg1;
- (void)serviceDidDowngrade:(WeAppBasicService *)arg1;
- (void)serviceDidTimeout:(WeAppBasicService *)arg1;
- (void)service:(WeAppBasicService *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)serviceDidFinishLoad:(WeAppBasicService *)arg1;
- (void)serviceDidCancelLoad:(WeAppBasicService *)arg1;
- (void)serviceDidStartLoad:(WeAppBasicService *)arg1;
@end

