//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MirrorResult : NSObject
{
    _Bool _succeed;
    NSString *_errrorCode;
    NSString *_errorMsg;
}

@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain, nonatomic) NSString *errrorCode; // @synthesize errrorCode=_errrorCode;
@property(nonatomic) _Bool succeed; // @synthesize succeed=_succeed;
- (void).cxx_destruct;
- (id)toDic;
- (id)init;

@end

