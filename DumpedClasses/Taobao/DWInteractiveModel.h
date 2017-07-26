//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface DWInteractiveModel : NSObject
{
    NSString *_type;
    NSString *_jsTemplate;
    NSDictionary *_jsData;
    NSString *_layout;
    NSArray *_anchorArray;
    NSString *_renderOrientation;
    NSDictionary *_margin;
    NSArray *_startAnimations;
    NSArray *_endAnimations;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(retain, nonatomic) NSArray *endAnimations; // @synthesize endAnimations=_endAnimations;
@property(retain, nonatomic) NSArray *startAnimations; // @synthesize startAnimations=_startAnimations;
@property(retain, nonatomic) NSDictionary *margin; // @synthesize margin=_margin;
@property(copy, nonatomic) NSString *renderOrientation; // @synthesize renderOrientation=_renderOrientation;
@property(retain, nonatomic) NSArray *anchorArray; // @synthesize anchorArray=_anchorArray;
@property(retain, nonatomic) NSString *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSDictionary *jsData; // @synthesize jsData=_jsData;
@property(retain, nonatomic) NSString *jsTemplate; // @synthesize jsTemplate=_jsTemplate;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

