//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface MDMediaMessage : NSObject
{
    NSString *_title;
    NSString *_desc;
    NSData *_thumbData;
    id _mediaObject;
    NSString *_textContent;
    NSString *_feedTopic;
}

+ (id)message;
@property(retain, nonatomic) NSString *feedTopic; // @synthesize feedTopic=_feedTopic;
@property(retain, nonatomic) NSString *textContent; // @synthesize textContent=_textContent;
@property(retain, nonatomic) id mediaObject; // @synthesize mediaObject=_mediaObject;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData=_thumbData;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setThumbImage:(id)arg1;

@end

