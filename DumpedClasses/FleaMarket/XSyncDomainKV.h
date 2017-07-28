//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XSyncDomainKV : NSObject
{
    int _Domain;
    int _Flag;
    unsigned long long _Version;
}

+ (id)infoNet:(id)arg1 inDb:(id)arg2;
+ (id)info:(int)arg1 inDb:(id)arg2;
+ (id)justinfo:(int)arg1 inDb:(id)arg2;
+ (void)saveVersion:(id)arg1 to:(id)arg2;
+ (void)save:(id)arg1 to:(id)arg2;
+ (_Bool)queryAll:(id)arg1 inDb:(id)arg2;
+ (_Bool)query:(id)arg1 inDb:(id)arg2 by:(int)arg3;
+ (void)query:(id)arg1 inDb:(id)arg2 by:(int)arg3 withCallback:(CDUnknownBlockType)arg4;
+ (_Bool)query:(id)arg1 hitResult:(id)arg2 inDb:(id)arg3;
+ (void)fill:(id)arg1 fromNetSet:(id)arg2 inDb:(id)arg3;
+ (void)fill:(id)arg1 fromDbSet:(id)arg2 inDb:(id)arg3;
+ (void)whenDbOpen:(id)arg1;
+ (void)whenDbDegrade:(id)arg1 from:(long long)arg2 to:(long long)arg3;
+ (void)whenDbUpgrade:(id)arg1 from:(long long)arg2 to:(long long)arg3;
+ (void)whenDbCreate:(id)arg1;
@property int Flag; // @synthesize Flag=_Flag;
@property unsigned long long Version; // @synthesize Version=_Version;
@property int Domain; // @synthesize Domain=_Domain;
- (id)toNetInfo;

@end
