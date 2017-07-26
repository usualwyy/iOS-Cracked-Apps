//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDevice.h"

@class NSString;

@interface UIDevice (DeviceHardware)
+ (_Bool)isHighSpeed;
+ (_Bool)isJailbroken;
+ (_Bool)isRetinaDisplay;
+ (id)platformString;
+ (id)platform;
+ (id)getBatteryVoltage;
+ (id)getBatteryCapacity;
+ (int)tbHwMachineToIdevice:(id)arg1;
- (id)uniqueGlobalDeviceIdentifier;
- (id)uniqueDeviceIdentifier;
- (id)macaddress;
@property(readonly, nonatomic) NSString *modelName;
@end

