//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CSActivationEvent : NSObject
{
    float _vadScore;	// 8 = 0x8
    NSString *_UUID;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    NSString *_deviceId;	// 32 = 0x20
    NSDictionary *_activationInfo;	// 40 = 0x28
    unsigned long long _hosttime;	// 48 = 0x30
}

+ (id)mediaserverdLaunchedEvent:(unsigned long long)arg1;	// IMP=0x000000000005f958
+ (id)remoraVoiceTriggerEvent:(id)arg1 activationInfo:(id)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x000000000005f8d4
+ (id)remoraVoiceTriggerEvent:(id)arg1 hostTime:(unsigned long long)arg2;	// IMP=0x000000000005f871
+ (id)jarvisVoiceTriggerEvent:(id)arg1 activationInfo:(id)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x000000000005f7e8
+ (id)builtInMicVoiceTriggerEvent:(id)arg1 hostTime:(unsigned long long)arg2;	// IMP=0x000000000005f782
+ (id)remoteMicVADEvent:(id)arg1 vadScore:(float)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x000000000005f70d
+ (id)remoteMicVoiceTriggerEvent:(id)arg1 activationInfo:(id)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x000000000005f684
- (void).cxx_destruct;	// IMP=0x000000000005fb3d
@property(readonly, nonatomic) float vadScore; // @synthesize vadScore=_vadScore;
@property(readonly, nonatomic) unsigned long long hosttime; // @synthesize hosttime=_hosttime;
@property(readonly, nonatomic) NSDictionary *activationInfo; // @synthesize activationInfo=_activationInfo;
@property(readonly, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (id)_activationTypeString;	// IMP=0x000000000005fa81
@property(readonly, nonatomic) NSString *localizedDescription;
- (id)xpcObject;	// IMP=0x000000000005f530
- (id)initWithXPCObject:(id)arg1;	// IMP=0x000000000005f2e6
- (id)initWithType:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 hosttime:(unsigned long long)arg4;	// IMP=0x000000000005f2ce
- (id)initWithType:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 vadScore:(float)arg4 hosttime:(unsigned long long)arg5;	// IMP=0x000000000005f1b4

@end

