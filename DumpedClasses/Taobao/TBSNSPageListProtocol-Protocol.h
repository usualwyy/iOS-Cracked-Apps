//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol TBSNSPageListProtocol <NSObject>
@property(copy, nonatomic) Class itemClass;
- (void)didFinishedParsedPageListWithJsonValue:(NSDictionary *)arg1;
- (void)parsePageListWithJsonValue:(NSDictionary *)arg1;
- (void)willParsedPageListWithJsonValue:(NSDictionary *)arg1;
- (_Bool)shouldPageListParse;
@end

