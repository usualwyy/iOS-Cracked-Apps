//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBIPicShowViewDelegate.h"

@class NSArray, NSMutableDictionary, NSString;

@interface TBOMultiImageRender : NSObject <TBIPicShowViewDelegate>
{
    NSMutableDictionary *_imageDic;
    NSArray *_imageArray;
}

@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) NSMutableDictionary *imageDic; // @synthesize imageDic=_imageDic;
- (void).cxx_destruct;
- (void)tapVideo:(id)arg1;
- (void)saveToAlbum:(id)arg1;
- (void)tapImage:(id)arg1;
- (void)addClickEvent:(id)arg1 imgIndex:(long long)arg2 withType:(unsigned long long)arg3;
- (id)renderImage:(id)arg1 type:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

