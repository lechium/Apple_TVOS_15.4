//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface AFMyriadAccessoryMessage : NSObject
{
    struct myrAccessoryMessage _message;	// 8 = 0x8
    unsigned char _version;	// 56 = 0x38
    unsigned char _goodnessScore;	// 57 = 0x39
    unsigned char _userConfidenceScore;	// 58 = 0x3a
    unsigned char _tieBreaker;	// 59 = 0x3b
    unsigned char _deviceClass;	// 60 = 0x3c
    unsigned char _deviceGroup;	// 61 = 0x3d
    unsigned char _productType;	// 62 = 0x3e
    unsigned char _electionDecision;	// 63 = 0x3f
    unsigned char _emergencyHandled;	// 64 = 0x40
    unsigned char _ack;	// 65 = 0x41
    _Bool _isSane;	// 66 = 0x42
    _Bool _serializedProtocol;	// 67 = 0x43
    unsigned short _audioHash;	// 68 = 0x44
    unsigned long long _requestType;	// 72 = 0x48
    unsigned long long _session;	// 80 = 0x50
    double _voiceTriggerEndTime;	// 88 = 0x58
    NSUUID *_accessoryId;	// 96 = 0x60
}

+ (id)myriadRequestTypeAsString:(unsigned long long)arg1;	// IMP=0x00000000000fd15b
+ (_Bool)isMyriadRequestMessage:(id)arg1;	// IMP=0x00000000000fd02d
+ (id)messageKey;	// IMP=0x00000000000fd020
+ (id)requestTypeKey;	// IMP=0x00000000000fd013
+ (id)sessionIdKey;	// IMP=0x00000000000fd006
+ (id)emergencyHandledKey;	// IMP=0x00000000000fcff9
+ (id)electionDecisionKey;	// IMP=0x00000000000fcfec
+ (id)deviceInfoKey;	// IMP=0x00000000000fcfdf
+ (id)audioDataKey;	// IMP=0x00000000000fcfd2
+ (id)acknowledgeRequestKey;	// IMP=0x00000000000fcfc5
+ (id)protocolName;	// IMP=0x00000000000fcfb8
- (void).cxx_destruct;	// IMP=0x00000000000fe37a
@property(readonly, nonatomic, getter=usesSerializedProtocol) _Bool serializedProtocol; // @synthesize serializedProtocol=_serializedProtocol;
@property(readonly, nonatomic) _Bool isSane; // @synthesize isSane=_isSane;
@property(readonly, nonatomic) NSUUID *accessoryId; // @synthesize accessoryId=_accessoryId;
@property(readonly, nonatomic, getter=isAcknowledgement) unsigned char ack; // @synthesize ack=_ack;
@property(readonly, nonatomic, getter=isEmergencyHandled) unsigned char emergencyHandled; // @synthesize emergencyHandled=_emergencyHandled;
@property(readonly, nonatomic, getter=electionWon) unsigned char electionDecision; // @synthesize electionDecision=_electionDecision;
@property(readonly, nonatomic) unsigned char productType; // @synthesize productType=_productType;
@property(readonly, nonatomic) unsigned char deviceGroup; // @synthesize deviceGroup=_deviceGroup;
@property(readonly, nonatomic) unsigned char deviceClass; // @synthesize deviceClass=_deviceClass;
@property(readonly, nonatomic) unsigned char tieBreaker; // @synthesize tieBreaker=_tieBreaker;
@property(readonly, nonatomic) unsigned char userConfidenceScore; // @synthesize userConfidenceScore=_userConfidenceScore;
@property(readonly, nonatomic) unsigned char goodnessScore; // @synthesize goodnessScore=_goodnessScore;
@property(readonly, nonatomic) unsigned short audioHash; // @synthesize audioHash=_audioHash;
@property(readonly, nonatomic) double voiceTriggerEndTime; // @synthesize voiceTriggerEndTime=_voiceTriggerEndTime;
@property(readonly, nonatomic) unsigned long long session; // @synthesize session=_session;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) unsigned char version; // @synthesize version=_version;
- (id)description;	// IMP=0x00000000000fdda4
- (id)messageAsData;	// IMP=0x00000000000fdd66
- (id)initWithAccessoryMessageAsDictionary:(id)arg1 accessoryId:(id)arg2;	// IMP=0x00000000000fdcbe
- (id)initWithAccessoryMessage:(id)arg1 accessoryId:(id)arg2;	// IMP=0x00000000000fdc16
- (id)initResetMessageWithSessionId:(unsigned long long)arg1 accessoryId:(id)arg2;	// IMP=0x00000000000fdb64
- (id)initElectionDecisionMessageWithSessionId:(unsigned long long)arg1 decision:(_Bool)arg2 accessoryId:(id)arg3;	// IMP=0x00000000000fdaa9
- (id)initPreheatMessageWithSessionId:(unsigned long long)arg1 accessoryId:(id)arg2;	// IMP=0x00000000000fd9f7
- (id)initWithRequestType:(unsigned long long)arg1 session:(unsigned long long)arg2 voiceTriggerEndTime:(double)arg3 audioHash:(unsigned short)arg4 goodnessScore:(unsigned char)arg5 userConfidenceScore:(unsigned char)arg6 tieBreaker:(unsigned char)arg7 deviceClass:(unsigned char)arg8 deviceGroup:(unsigned char)arg9 productType:(unsigned char)arg10 electionDecision:(unsigned char)arg11 emergencyHandled:(unsigned char)arg12 ack:(unsigned char)arg13 accessoryId:(id)arg14;	// IMP=0x00000000000fd8de
- (void)_initWithMessage:(const struct myrAccessoryMessage *)arg1;	// IMP=0x00000000000fd876
- (void)_initializeMessageObjFromDictionary:(id)arg1;	// IMP=0x00000000000fd37e
- (void)_initializeMessageObj:(id)arg1;	// IMP=0x00000000000fd210
- (void)_copyRawBytesFromSource:(const void *)arg1 toDest:(void *)arg2 length:(unsigned long long)arg3;	// IMP=0x00000000000fd1fc

@end

