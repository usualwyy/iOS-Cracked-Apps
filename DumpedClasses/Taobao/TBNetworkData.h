//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBNetworkData : NSObject
{
    float _wifiSend;
    float _wifiReceived;
    float _wifiSendOffset;
    float _wifiReceivedOffset;
    float _cellularSend;
    float _cellularReceived;
    float _cellularSendOffset;
    float _cellularReceivedOffset;
}

@property(nonatomic) float cellularReceivedOffset; // @synthesize cellularReceivedOffset=_cellularReceivedOffset;
@property(nonatomic) float cellularSendOffset; // @synthesize cellularSendOffset=_cellularSendOffset;
@property(nonatomic) float cellularReceived; // @synthesize cellularReceived=_cellularReceived;
@property(nonatomic) float cellularSend; // @synthesize cellularSend=_cellularSend;
@property(nonatomic) float wifiReceivedOffset; // @synthesize wifiReceivedOffset=_wifiReceivedOffset;
@property(nonatomic) float wifiSendOffset; // @synthesize wifiSendOffset=_wifiSendOffset;
@property(nonatomic) float wifiReceived; // @synthesize wifiReceived=_wifiReceived;
@property(nonatomic) float wifiSend; // @synthesize wifiSend=_wifiSend;
- (id)uploadData;
- (id)toDictionary;
- (id)description;

@end

