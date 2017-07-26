//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LOTAnimatableNumberValue, LOTAnimatablePointValue, LOTAnimatableScaleValue, LOTAsset, NSArray, NSNumber, NSString, UIColor;

@interface LOTLayer : NSObject
{
    _Bool _hasInAnimation;
    NSString *_layerName;
    NSString *_referenceID;
    NSNumber *_layerID;
    long long _layerType;
    NSNumber *_parentID;
    NSNumber *_inFrame;
    NSNumber *_outFrame;
    NSNumber *_framerate;
    NSArray *_shapes;
    NSArray *_masks;
    NSNumber *_layerWidth;
    NSNumber *_layerHeight;
    UIColor *_solidColor;
    LOTAsset *_imageAsset;
    LOTAnimatableNumberValue *_opacity;
    LOTAnimatableNumberValue *_rotation;
    LOTAnimatablePointValue *_position;
    LOTAnimatableNumberValue *_positionX;
    LOTAnimatableNumberValue *_positionY;
    LOTAnimatablePointValue *_anchor;
    LOTAnimatableScaleValue *_scale;
    NSArray *_inOutKeyframes;
    NSArray *_inOutKeyTimes;
    double _layerDuration;
    long long _matteType;
    struct CGRect _layerBounds;
    struct CGRect _parentCompBounds;
}

@property(readonly, nonatomic) long long matteType; // @synthesize matteType=_matteType;
@property(readonly, nonatomic) double layerDuration; // @synthesize layerDuration=_layerDuration;
@property(readonly, nonatomic) NSArray *inOutKeyTimes; // @synthesize inOutKeyTimes=_inOutKeyTimes;
@property(readonly, nonatomic) NSArray *inOutKeyframes; // @synthesize inOutKeyframes=_inOutKeyframes;
@property(readonly, nonatomic) _Bool hasInAnimation; // @synthesize hasInAnimation=_hasInAnimation;
@property(readonly, nonatomic) LOTAnimatableScaleValue *scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) LOTAnimatablePointValue *anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) LOTAnimatableNumberValue *positionY; // @synthesize positionY=_positionY;
@property(readonly, nonatomic) LOTAnimatableNumberValue *positionX; // @synthesize positionX=_positionX;
@property(readonly, nonatomic) LOTAnimatablePointValue *position; // @synthesize position=_position;
@property(readonly, nonatomic) LOTAnimatableNumberValue *rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) LOTAnimatableNumberValue *opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) LOTAsset *imageAsset; // @synthesize imageAsset=_imageAsset;
@property(readonly, nonatomic) UIColor *solidColor; // @synthesize solidColor=_solidColor;
@property(readonly, nonatomic) NSNumber *layerHeight; // @synthesize layerHeight=_layerHeight;
@property(readonly, nonatomic) NSNumber *layerWidth; // @synthesize layerWidth=_layerWidth;
@property(readonly, nonatomic) NSArray *masks; // @synthesize masks=_masks;
@property(readonly, nonatomic) NSArray *shapes; // @synthesize shapes=_shapes;
@property(readonly, nonatomic) NSNumber *framerate; // @synthesize framerate=_framerate;
@property(readonly, nonatomic) struct CGRect parentCompBounds; // @synthesize parentCompBounds=_parentCompBounds;
@property(readonly, nonatomic) struct CGRect layerBounds; // @synthesize layerBounds=_layerBounds;
@property(readonly, nonatomic) NSNumber *outFrame; // @synthesize outFrame=_outFrame;
@property(readonly, nonatomic) NSNumber *inFrame; // @synthesize inFrame=_inFrame;
@property(readonly, nonatomic) NSNumber *parentID; // @synthesize parentID=_parentID;
@property(readonly, nonatomic) long long layerType; // @synthesize layerType=_layerType;
@property(readonly, nonatomic) NSNumber *layerID; // @synthesize layerID=_layerID;
@property(readonly, nonatomic) NSString *referenceID; // @synthesize referenceID=_referenceID;
@property(readonly, nonatomic) NSString *layerName; // @synthesize layerName=_layerName;
- (void).cxx_destruct;
- (id)description;
- (void)_mapFromJSON:(id)arg1 withCompBounds:(struct CGRect)arg2 withFramerate:(id)arg3 withAssetGroup:(id)arg4;
- (id)initWithJSON:(id)arg1 withCompBounds:(struct CGRect)arg2 withFramerate:(id)arg3 withAssetGroup:(id)arg4;

@end

