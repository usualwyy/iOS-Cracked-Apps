//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface QQVIPFunctionComicPayInfoModel : NSObject
{
    NSString *_comicId;
    NSMutableDictionary *_sectionBuyStatus;
    int _autoPay;
    NSMutableDictionary *_sectionPermissions;
    int _userType;
    int _xo;
}

- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(nonatomic) int autoPay; // @dynamic autoPay;
@property(retain, nonatomic) NSString *comicId; // @dynamic comicId;
@property(retain, nonatomic) NSMutableDictionary *sectionBuyStatus; // @dynamic sectionBuyStatus;
@property(retain, nonatomic) NSMutableDictionary *sectionPermissions; // @dynamic sectionPermissions;
@property(nonatomic) int userType; // @dynamic userType;

@end
