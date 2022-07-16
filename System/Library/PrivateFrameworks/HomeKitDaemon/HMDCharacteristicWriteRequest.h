//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSUUID;

@interface HMDCharacteristicWriteRequest
{
    _Bool _includeResponseValue;	// 32 = 0x20
    id _value;	// 40 = 0x28
    NSData *_authorizationData;	// 48 = 0x30
    NSUUID *_identifier;	// 56 = 0x38
    unsigned long long _requestType;	// 64 = 0x40
    NSData *_contextData;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x0000000000b366dd
+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 type:(unsigned long long)arg5 includeResponseValue:(_Bool)arg6 contextData:(id)arg7;	// IMP=0x0000000000b36581
+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 type:(unsigned long long)arg5 includeResponseValue:(_Bool)arg6;	// IMP=0x0000000000b3643c
+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 type:(unsigned long long)arg5;	// IMP=0x0000000000b36420
+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 type:(unsigned long long)arg4;	// IMP=0x0000000000b363f7
+ (id)writeRequestForTransitionFetchWithLightProfile:(id)arg1;	// IMP=0x00000000001d6d2e
+ (id)writeRequestForTransitionStartWithLightProfile:(id)arg1 naturalLightingEnabled:(_Bool)arg2 startDate:(id)arg3 type:(unsigned long long)arg4 dataSource:(id)arg5;	// IMP=0x00000000001d6815
+ (id)writeRequestForTransitionStartWithLightProfile:(id)arg1 naturalLightingEnabled:(_Bool)arg2 startDate:(id)arg3 type:(unsigned long long)arg4;	// IMP=0x00000000001d676d
- (void).cxx_destruct;	// IMP=0x0000000000b363a4
@property(readonly, nonatomic) NSData *contextData; // @synthesize contextData=_contextData;
@property(readonly, nonatomic) _Bool includeResponseValue; // @synthesize includeResponseValue=_includeResponseValue;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSData *authorizationData; // @synthesize authorizationData=_authorizationData;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (id)attributeDescriptions;	// IMP=0x0000000000b36160
- (id)initWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 type:(unsigned long long)arg5 includeResponseValue:(_Bool)arg6 contextData:(id)arg7;	// IMP=0x0000000000b36048

@end

