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

+ (id)mediaserverdLaunchedEvent:(unsigned long long)arg1;	// IMP=0x00400000000b6b7c
+ (id)remoraVoiceTriggerEvent:(id)arg1 activationInfo:(id)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x00100000000b6af8
+ (id)remoraVoiceTriggerEvent:(id)arg1 hostTime:(unsigned long long)arg2;	// IMP=0x00100000000b6a95
+ (id)jarvisVoiceTriggerEvent:(id)arg1 activationInfo:(id)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x00100000000b6a0c
+ (id)builtInMicVoiceTriggerEvent:(id)arg1 hostTime:(unsigned long long)arg2;	// IMP=0x00100000000b69a6
+ (id)remoteMicVADEvent:(id)arg1 vadScore:(float)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x00100000000b6931
+ (id)remoteMicVoiceTriggerEvent:(id)arg1 activationInfo:(id)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x00100000000b68a8
- (void).cxx_destruct;	// IMP=0x00200000000b6d61
@property(readonly, nonatomic) float vadScore; // @synthesize vadScore=_vadScore;
@property(readonly, nonatomic) unsigned long long hosttime; // @synthesize hosttime=_hosttime;
@property(readonly, nonatomic) NSDictionary *activationInfo; // @synthesize activationInfo=_activationInfo;
@property(readonly, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (id)_activationTypeString;	// IMP=0x00100000000b6ca5
@property(readonly, nonatomic) NSString *localizedDescription;
- (id)xpcObject;	// IMP=0x00100000000b6754
- (id)initWithXPCObject:(id)arg1;	// IMP=0x00100000000b650a
- (id)initWithType:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 hosttime:(unsigned long long)arg4;	// IMP=0x00100000000b64f2
- (id)initWithType:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 vadScore:(float)arg4 hosttime:(unsigned long long)arg5;	// IMP=0x00100000000b63d8

@end

