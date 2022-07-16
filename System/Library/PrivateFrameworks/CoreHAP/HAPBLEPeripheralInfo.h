//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString, NSUUID;

@interface HAPBLEPeripheralInfo : HMFObject <NSSecureCoding>
{
    NSUUID *_peripheralUUID;	// 8 = 0x8
    unsigned long long _advertisedProtocolVersion;	// 16 = 0x10
    unsigned long long _previousProtocolVersion;	// 24 = 0x18
    unsigned long long _resumeSessionId;	// 32 = 0x20
    double _lastSeen;	// 40 = 0x28
    NSNumber *_statusFlags;	// 48 = 0x30
    NSNumber *_stateNumber;	// 56 = 0x38
    NSNumber *_configNumber;	// 64 = 0x40
    NSNumber *_categoryIdentifier;	// 72 = 0x48
    NSString *_accessoryName;	// 80 = 0x50
    NSData *_broadcastKey;	// 88 = 0x58
    double _keyUpdatedTime;	// 96 = 0x60
    NSNumber *_keyUpdatedStateNumber;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000543a
- (void).cxx_destruct;	// IMP=0x00000000000053a3
@property(retain, nonatomic) NSNumber *keyUpdatedStateNumber; // @synthesize keyUpdatedStateNumber=_keyUpdatedStateNumber;
@property(nonatomic) double keyUpdatedTime; // @synthesize keyUpdatedTime=_keyUpdatedTime;
@property(retain, nonatomic) NSData *broadcastKey; // @synthesize broadcastKey=_broadcastKey;
@property(retain, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(readonly, nonatomic) NSNumber *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(readonly, nonatomic) NSNumber *configNumber; // @synthesize configNumber=_configNumber;
@property(retain, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(readonly, nonatomic) NSNumber *statusFlags; // @synthesize statusFlags=_statusFlags;
@property(readonly, nonatomic) double lastSeen; // @synthesize lastSeen=_lastSeen;
@property(nonatomic) unsigned long long resumeSessionId; // @synthesize resumeSessionId=_resumeSessionId;
@property(nonatomic) unsigned long long previousProtocolVersion; // @synthesize previousProtocolVersion=_previousProtocolVersion;
@property(nonatomic) unsigned long long advertisedProtocolVersion; // @synthesize advertisedProtocolVersion=_advertisedProtocolVersion;
@property(readonly, nonatomic) NSUUID *peripheralUUID; // @synthesize peripheralUUID=_peripheralUUID;
- (id)description;	// IMP=0x0000000000005022
- (unsigned long long)hash;	// IMP=0x0000000000004fde
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004f0c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004c2a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004995
- (void)updateAccessoryName:(id)arg1;	// IMP=0x0000000000004901
- (void)updateBroadcastKey:(id)arg1;	// IMP=0x000000000000486b
- (void)saveBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 updatedTime:(double)arg3;	// IMP=0x000000000000478e
- (void)updateStateNumber:(id)arg1;	// IMP=0x000000000000477c
- (void)updateResumeSessionId:(unsigned long long)arg1;	// IMP=0x000000000000476a
- (void)updateProtocolVersion:(unsigned long long)arg1;	// IMP=0x0000000000004701
- (id)initWithPeripheralInfo:(id)arg1 advertisedProtocolVersion:(unsigned long long)arg2 previousProtocolVersion:(long long)arg3 resumeSessionId:(unsigned long long)arg4 lastSeen:(double)arg5 statusFlags:(id)arg6 stateNumber:(id)arg7 configNumber:(id)arg8 categoryIdentifier:(id)arg9 accessoryName:(id)arg10;	// IMP=0x0000000000004572

@end
