//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBVRPayBaseButtonNode.h"

#import "TBVRPayNodeProtocol.h"

@class NSDictionary, NSMutableDictionary, NSString, UIImage, UIImageView, UILabel, UIView;

@interface TBVRPayChannelItemNode : TBVRPayBaseButtonNode <TBVRPayNodeProtocol>
{
    unsigned long long _index;
    NSDictionary *_reqData;
    UIView *_textureView;
    UIImageView *_bgView;
    UIImageView *_selView;
    UIImageView *_tickView;
    UIImageView *_rec;
    UIImageView *_hui;
    UIImageView *_fan;
    UIImageView *_busy;
    UIImageView *_chargeFree;
    UIImage *_recImg;
    UIImage *_huiImg;
    UIImage *_fanImg;
    UIImage *_busyImg;
    UIImage *_chargeFreeImg;
    UILabel *_channel;
    UILabel *_channelTail;
    UILabel *_channelDetail;
    NSMutableDictionary *_source;
}

@property(retain, nonatomic) NSMutableDictionary *source; // @synthesize source=_source;
@property(nonatomic) __weak UILabel *channelDetail; // @synthesize channelDetail=_channelDetail;
@property(nonatomic) __weak UILabel *channelTail; // @synthesize channelTail=_channelTail;
@property(nonatomic) __weak UILabel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) UIImage *chargeFreeImg; // @synthesize chargeFreeImg=_chargeFreeImg;
@property(retain, nonatomic) UIImage *busyImg; // @synthesize busyImg=_busyImg;
@property(retain, nonatomic) UIImage *fanImg; // @synthesize fanImg=_fanImg;
@property(retain, nonatomic) UIImage *huiImg; // @synthesize huiImg=_huiImg;
@property(retain, nonatomic) UIImage *recImg; // @synthesize recImg=_recImg;
@property(nonatomic) __weak UIImageView *chargeFree; // @synthesize chargeFree=_chargeFree;
@property(nonatomic) __weak UIImageView *busy; // @synthesize busy=_busy;
@property(nonatomic) __weak UIImageView *fan; // @synthesize fan=_fan;
@property(nonatomic) __weak UIImageView *hui; // @synthesize hui=_hui;
@property(nonatomic) __weak UIImageView *rec; // @synthesize rec=_rec;
@property(nonatomic) __weak UIImageView *tickView; // @synthesize tickView=_tickView;
@property(nonatomic) __weak UIImageView *selView; // @synthesize selView=_selView;
@property(nonatomic) __weak UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *textureView; // @synthesize textureView=_textureView;
@property(retain, nonatomic) NSDictionary *reqData; // @synthesize reqData=_reqData;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)redrawWithData:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithParams:(id)arg1 data:(id)arg2 manager:(id)arg3;
@property(readonly, nonatomic) double ptHeight;
@property(readonly, nonatomic) double ptWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

