//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLConnection.h"

@class NSHTTPURLResponse, NSMutableData;

@interface WXURLConnection : NSURLConnection
{
    id <WXResourceRequestDelegate> _requestDelegate;
    NSHTTPURLResponse *_response;
    NSMutableData *_data;
}

@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) id <WXResourceRequestDelegate> requestDelegate; // @synthesize requestDelegate=_requestDelegate;
- (void).cxx_destruct;

@end

