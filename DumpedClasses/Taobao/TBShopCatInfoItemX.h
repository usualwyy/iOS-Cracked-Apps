//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBShopCatInfoItemX : TBJSONModel
{
    NSString *_id;
    NSString *_imagePath;
    NSString *_name;
    NSArray *_subCats;
}

@property(retain, nonatomic) NSArray *subCats; // @synthesize subCats=_subCats;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

