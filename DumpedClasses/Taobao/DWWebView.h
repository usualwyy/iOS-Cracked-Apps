//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVWebView.h"

@class DWComponent, NSDictionary;

@interface DWWebView : WVWebView
{
    NSDictionary *_jsData;
    DWComponent *_component;
}

@property(nonatomic) __weak DWComponent *component; // @synthesize component=_component;
@property(retain, nonatomic) NSDictionary *jsData; // @synthesize jsData=_jsData;
- (void).cxx_destruct;

@end

