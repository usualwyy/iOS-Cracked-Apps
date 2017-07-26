//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBShareContent;

@interface TBShareContentContainer : NSObject
{
    _Bool _mutex;
    _Bool _isPromotion;
    TBShareContent *_content;
    NSString *_shareId;
    NSString *_uniqueId;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(nonatomic) _Bool isPromotion; // @synthesize isPromotion=_isPromotion;
@property(retain, nonatomic) TBShareContent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)uuid;
- (void)preprocessImageUrl;
- (void)preprocessPromotion;
- (void)preprocessUrl;
- (void)preprocessContentType;
- (void)reset;
- (id)promotionContent;
- (id)getShareId;
- (id)get;
- (void)update:(id)arg1;
- (_Bool)prepare:(id)arg1;

@end

