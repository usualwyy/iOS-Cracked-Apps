//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBSNSBasicListViewDataRequestConfigure : NSObject
{
    int paginationType;
    int countPerPage;
    NSString *orderType;
}

+ (id)serviceConfigureWith:(id)arg1;
+ (id)serviceConfigure;
@property(retain, nonatomic) NSString *orderType; // @synthesize orderType;
@property(nonatomic) int countPerPage; // @synthesize countPerPage;
@property(nonatomic) int paginationType; // @synthesize paginationType;
- (void).cxx_destruct;
- (id)initWithCOnfigure:(id)arg1;
- (id)init;

@end

