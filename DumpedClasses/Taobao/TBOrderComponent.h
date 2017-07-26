//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOrderObject.h"

@class NSMutableDictionary, NSString, TBOrderMainModel;

@interface TBOrderComponent : TBOrderObject
{
    NSMutableDictionary *_fields;
    NSString *_tag;
    NSString *_cid;
    NSString *_type;
    TBOrderMainModel *_mainModel;
}

@property(nonatomic) __weak TBOrderMainModel *mainModel; // @synthesize mainModel=_mainModel;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSMutableDictionary *fields; // @synthesize fields=_fields;
- (void).cxx_destruct;
- (id)labelInfosWithKey:(id)arg1;
- (id)storage;
- (id)key;
- (id)initWithData:(id)arg1;
- (id)subAuctionId;
- (id)subOrderId;
- (id)eventId;

@end

