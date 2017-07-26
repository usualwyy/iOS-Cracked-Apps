//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface TMDBStoreItem : NSObject
{
    int _size;
    int _modTime;
    int _accessTime;
    NSString *_key;
    NSData *_value;
    NSString *_filename;
    NSString *_md5;
    NSData *_extendedData;
}

@property(retain, nonatomic) NSData *extendedData; // @synthesize extendedData=_extendedData;
@property(nonatomic) int accessTime; // @synthesize accessTime=_accessTime;
@property(nonatomic) int modTime; // @synthesize modTime=_modTime;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) int size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) NSData *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

