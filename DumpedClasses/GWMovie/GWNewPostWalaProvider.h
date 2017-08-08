//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWPostWalaProvider.h"

@class NSMutableArray, NSString;

@interface GWNewPostWalaProvider : GWPostWalaProvider
{
    NSString *_topic;
    NSString *_title;
    NSString *_redTag;
    NSString *_type;
    NSMutableArray *_picturepath;
    NSMutableArray *_picturesize;
    NSMutableArray *_oriPictureArray;
    NSString *_commentType;
}

@property(copy, nonatomic) NSString *commentType; // @synthesize commentType=_commentType;
@property(retain, nonatomic) NSMutableArray *oriPictureArray; // @synthesize oriPictureArray=_oriPictureArray;
@property(retain, nonatomic) NSMutableArray *picturesize; // @synthesize picturesize=_picturesize;
@property(retain, nonatomic) NSMutableArray *picturepath; // @synthesize picturepath=_picturepath;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *redTag; // @synthesize redTag=_redTag;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (id)replacementForPropertyValue:(id)arg1 propertyName:(id)arg2;
- (id)replacementForPropertyName:(id)arg1;
- (void)providerWillStart;
- (id)parseResponed:(id)arg1 error:(id *)arg2;

@end
