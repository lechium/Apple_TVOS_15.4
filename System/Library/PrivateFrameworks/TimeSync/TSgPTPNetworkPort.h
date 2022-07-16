//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IOKConnection, NSMutableArray, NSString;

@interface TSgPTPNetworkPort
{
    IOKConnection *_connection;	// 80 = 0x50
    NSMutableArray *_clients;	// 88 = 0x58
    _Bool _remoteIsSameDevice;	// 96 = 0x60
    _Bool _asCapable;	// 97 = 0x61
    BOOL _localSyncLogMeanInterval;	// 98 = 0x62
    BOOL _remoteSyncLogMeanInterval;	// 99 = 0x63
    BOOL _localAnnounceLogMeanInterval;	// 100 = 0x64
    BOOL _remoteAnnounceLogMeanInterval;	// 101 = 0x65
    unsigned char _localLinkType;	// 102 = 0x66
    unsigned char _remoteLinkType;	// 103 = 0x67
    unsigned char _localTimestampingMode;	// 104 = 0x68
    unsigned char _remoteTimestampingMode;	// 105 = 0x69
    unsigned char _localOscillatorType;	// 106 = 0x6a
    unsigned char _remoteOscillatorType;	// 107 = 0x6b
    _Bool _hasLocalFrequencyToleranceLower;	// 108 = 0x6c
    _Bool _hasLocalFrequencyToleranceUpper;	// 109 = 0x6d
    _Bool _hasRemoteFrequencyToleranceLower;	// 110 = 0x6e
    _Bool _hasRemoteFrequencyToleranceUpper;	// 111 = 0x6f
    _Bool _hasLocalFrequencyStabilityLower;	// 112 = 0x70
    _Bool _hasLocalFrequencyStabilityUpper;	// 113 = 0x71
    _Bool _hasRemoteFrequencyStabilityLower;	// 114 = 0x72
    _Bool _hasRemoteFrequencyStabilityUpper;	// 115 = 0x73
    _Bool _enabled;	// 116 = 0x74
    _Bool _overridenReceiveMatching;	// 117 = 0x75
    unsigned short _remotePortNumber;	// 118 = 0x76
    unsigned short _overridenReceivePortNumber;	// 120 = 0x78
    unsigned int _propagationDelay;	// 124 = 0x7c
    unsigned int _maximumPropagationDelay;	// 128 = 0x80
    unsigned int _minimumPropagationDelay;	// 132 = 0x84
    unsigned int _propagationDelayLimit;	// 136 = 0x88
    unsigned int _maximumRawDelay;	// 140 = 0x8c
    unsigned int _minimumRawDelay;	// 144 = 0x90
    int _localFrequencyToleranceLower;	// 148 = 0x94
    int _localFrequencyToleranceUpper;	// 152 = 0x98
    int _remoteFrequencyToleranceLower;	// 156 = 0x9c
    int _remoteFrequencyToleranceUpper;	// 160 = 0xa0
    int _localFrequencyStabilityLower;	// 164 = 0xa4
    int _localFrequencyStabilityUpper;	// 168 = 0xa8
    int _remoteFrequencyStabilityLower;	// 172 = 0xac
    int _remoteFrequencyStabilityUpper;	// 176 = 0xb0
    unsigned long long _remoteClockIdentity;	// 184 = 0xb8
    NSString *_sourceAddressString;	// 192 = 0xc0
    NSString *_destinationAddressString;	// 200 = 0xc8
    NSString *_interfaceName;	// 208 = 0xd0
    unsigned long long _overridenReceiveClockIdentity;	// 216 = 0xd8
}

+ (id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2;	// IMP=0x000000000001be49
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000018824
- (void).cxx_destruct;	// IMP=0x000000000001dbe0
@property(nonatomic) unsigned short overridenReceivePortNumber; // @synthesize overridenReceivePortNumber=_overridenReceivePortNumber;
@property(nonatomic) unsigned long long overridenReceiveClockIdentity; // @synthesize overridenReceiveClockIdentity=_overridenReceiveClockIdentity;
@property(nonatomic) _Bool overridenReceiveMatching; // @synthesize overridenReceiveMatching=_overridenReceiveMatching;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(copy, nonatomic) NSString *destinationAddressString; // @synthesize destinationAddressString=_destinationAddressString;
@property(copy, nonatomic) NSString *sourceAddressString; // @synthesize sourceAddressString=_sourceAddressString;
@property(nonatomic) int remoteFrequencyStabilityUpper; // @synthesize remoteFrequencyStabilityUpper=_remoteFrequencyStabilityUpper;
@property(nonatomic) _Bool hasRemoteFrequencyStabilityUpper; // @synthesize hasRemoteFrequencyStabilityUpper=_hasRemoteFrequencyStabilityUpper;
@property(nonatomic) int remoteFrequencyStabilityLower; // @synthesize remoteFrequencyStabilityLower=_remoteFrequencyStabilityLower;
@property(nonatomic) _Bool hasRemoteFrequencyStabilityLower; // @synthesize hasRemoteFrequencyStabilityLower=_hasRemoteFrequencyStabilityLower;
@property(nonatomic) int localFrequencyStabilityUpper; // @synthesize localFrequencyStabilityUpper=_localFrequencyStabilityUpper;
@property(nonatomic) _Bool hasLocalFrequencyStabilityUpper; // @synthesize hasLocalFrequencyStabilityUpper=_hasLocalFrequencyStabilityUpper;
@property(nonatomic) int localFrequencyStabilityLower; // @synthesize localFrequencyStabilityLower=_localFrequencyStabilityLower;
@property(nonatomic) _Bool hasLocalFrequencyStabilityLower; // @synthesize hasLocalFrequencyStabilityLower=_hasLocalFrequencyStabilityLower;
@property(nonatomic) int remoteFrequencyToleranceUpper; // @synthesize remoteFrequencyToleranceUpper=_remoteFrequencyToleranceUpper;
@property(nonatomic) _Bool hasRemoteFrequencyToleranceUpper; // @synthesize hasRemoteFrequencyToleranceUpper=_hasRemoteFrequencyToleranceUpper;
@property(nonatomic) int remoteFrequencyToleranceLower; // @synthesize remoteFrequencyToleranceLower=_remoteFrequencyToleranceLower;
@property(nonatomic) _Bool hasRemoteFrequencyToleranceLower; // @synthesize hasRemoteFrequencyToleranceLower=_hasRemoteFrequencyToleranceLower;
@property(nonatomic) int localFrequencyToleranceUpper; // @synthesize localFrequencyToleranceUpper=_localFrequencyToleranceUpper;
@property(nonatomic) _Bool hasLocalFrequencyToleranceUpper; // @synthesize hasLocalFrequencyToleranceUpper=_hasLocalFrequencyToleranceUpper;
@property(nonatomic) int localFrequencyToleranceLower; // @synthesize localFrequencyToleranceLower=_localFrequencyToleranceLower;
@property(nonatomic) _Bool hasLocalFrequencyToleranceLower; // @synthesize hasLocalFrequencyToleranceLower=_hasLocalFrequencyToleranceLower;
@property(nonatomic) unsigned char remoteOscillatorType; // @synthesize remoteOscillatorType=_remoteOscillatorType;
@property(nonatomic) unsigned char localOscillatorType; // @synthesize localOscillatorType=_localOscillatorType;
@property(nonatomic) unsigned char remoteTimestampingMode; // @synthesize remoteTimestampingMode=_remoteTimestampingMode;
@property(nonatomic) unsigned char localTimestampingMode; // @synthesize localTimestampingMode=_localTimestampingMode;
@property(nonatomic) unsigned char remoteLinkType; // @synthesize remoteLinkType=_remoteLinkType;
@property(nonatomic) unsigned char localLinkType; // @synthesize localLinkType=_localLinkType;
@property(nonatomic) BOOL remoteAnnounceLogMeanInterval; // @synthesize remoteAnnounceLogMeanInterval=_remoteAnnounceLogMeanInterval;
@property(nonatomic) BOOL localAnnounceLogMeanInterval; // @synthesize localAnnounceLogMeanInterval=_localAnnounceLogMeanInterval;
@property(nonatomic) BOOL remoteSyncLogMeanInterval; // @synthesize remoteSyncLogMeanInterval=_remoteSyncLogMeanInterval;
@property(nonatomic) BOOL localSyncLogMeanInterval; // @synthesize localSyncLogMeanInterval=_localSyncLogMeanInterval;
@property(nonatomic) unsigned int minimumRawDelay; // @synthesize minimumRawDelay=_minimumRawDelay;
@property(nonatomic) unsigned int maximumRawDelay; // @synthesize maximumRawDelay=_maximumRawDelay;
@property(nonatomic) unsigned int propagationDelayLimit; // @synthesize propagationDelayLimit=_propagationDelayLimit;
@property(nonatomic) unsigned int minimumPropagationDelay; // @synthesize minimumPropagationDelay=_minimumPropagationDelay;
@property(nonatomic) unsigned int maximumPropagationDelay; // @synthesize maximumPropagationDelay=_maximumPropagationDelay;
@property(nonatomic) unsigned int propagationDelay; // @synthesize propagationDelay=_propagationDelay;
@property(nonatomic, getter=isASCapable) _Bool asCapable; // @synthesize asCapable=_asCapable;
@property(nonatomic) _Bool remoteIsSameDevice; // @synthesize remoteIsSameDevice=_remoteIsSameDevice;
@property(nonatomic) unsigned short remotePortNumber; // @synthesize remotePortNumber=_remotePortNumber;
@property(nonatomic) unsigned long long remoteClockIdentity; // @synthesize remoteClockIdentity=_remoteClockIdentity;
- (void)serviceTerminated;	// IMP=0x000000000001bcce
- (void)removeClient:(id)arg1;	// IMP=0x000000000001bbf7
- (void)addClient:(id)arg1;	// IMP=0x000000000001bacf
- (_Bool)deregisterAsyncCallbackError:(id *)arg1;	// IMP=0x000000000001ba8f
- (_Bool)registerAsyncCallbackError:(id *)arg1;	// IMP=0x000000000001b8f4
- (void)_handleNotification:(int)arg1 withArg1:(unsigned long long)arg2 arg2:(unsigned long long)arg3 arg3:(unsigned long long)arg4 arg4:(unsigned long long)arg5 arg5:(unsigned long long)arg6 arg6:(unsigned long long)arg7;	// IMP=0x000000000001b3f3
- (_Bool)getCurrentPortInfo:(CDStruct_57c52001 *)arg1 error:(id *)arg2;	// IMP=0x000000000001b264
- (_Bool)disablePortError:(id *)arg1;	// IMP=0x000000000001b224
- (_Bool)enablePortError:(id *)arg1;	// IMP=0x000000000001b1e4
- (_Bool)restoreReceiveMatchingError:(id *)arg1;	// IMP=0x000000000001b1a4
- (_Bool)overrideReceiveMatchingWithRemoteClockIdentity:(unsigned long long)arg1 remotePortNumber:(unsigned short)arg2 error:(id *)arg3;	// IMP=0x000000000001b12a
- (_Bool)requestRemoteMessageIntervalsWithPDelayMessageInterval:(BOOL)arg1 syncMessageInterval:(BOOL)arg2 announceMessageInterval:(BOOL)arg3 error:(id *)arg4;	// IMP=0x000000000001b0a8
- (_Bool)_enabled;	// IMP=0x000000000001b026
- (unsigned short)_overridenReceivePortNumber;	// IMP=0x000000000001afa1
- (unsigned long long)_overridenReceiveClockIdentity;	// IMP=0x000000000001af18
- (_Bool)_overridenReceiveMatching;	// IMP=0x000000000001ae96
- (int)_remoteFrequencyStabilityUpper;	// IMP=0x000000000001ae14
- (_Bool)_hasRemoteFrequencyStabilityUpper;	// IMP=0x000000000001ada9
- (int)_remoteFrequencyStabilityLower;	// IMP=0x000000000001ad27
- (_Bool)_hasRemoteFrequencyStabilityLower;	// IMP=0x000000000001acbc
- (int)_localFrequencyStabilityUpper;	// IMP=0x000000000001ac3a
- (_Bool)_hasLocalFrequencyStabilityUpper;	// IMP=0x000000000001abcf
- (int)_localFrequencyStabilityLower;	// IMP=0x000000000001ab4d
- (_Bool)_hasLocalFrequencyStabilityLower;	// IMP=0x000000000001aae2
- (int)_remoteFrequencyToleranceUpper;	// IMP=0x000000000001aa60
- (_Bool)_hasRemoteFrequencyToleranceUpper;	// IMP=0x000000000001a9f5
- (int)_remoteFrequencyToleranceLower;	// IMP=0x000000000001a973
- (_Bool)_hasRemoteFrequencyToleranceLower;	// IMP=0x000000000001a908
- (int)_localFrequencyToleranceUpper;	// IMP=0x000000000001a886
- (_Bool)_hasLocalFrequencyToleranceUpper;	// IMP=0x000000000001a81b
- (int)_localFrequencyToleranceLower;	// IMP=0x000000000001a799
- (_Bool)_hasLocalFrequencyToleranceLower;	// IMP=0x000000000001a72e
- (unsigned char)_remoteOscillatorType;	// IMP=0x000000000001a6ab
- (unsigned char)_localOscillatorType;	// IMP=0x000000000001a628
- (unsigned char)_remoteTimestampingMode;	// IMP=0x000000000001a5a5
- (unsigned char)_localTimestampingMode;	// IMP=0x000000000001a522
- (unsigned char)_remoteLinkType;	// IMP=0x000000000001a49f
- (unsigned char)_localLinkType;	// IMP=0x000000000001a41c
- (BOOL)_remoteAnnounceLogMeanInterval;	// IMP=0x000000000001a399
- (BOOL)_localAnnounceLogMeanInterval;	// IMP=0x000000000001a316
- (BOOL)_remoteSyncLogMeanInterval;	// IMP=0x000000000001a293
- (BOOL)_localSyncLogMeanInterval;	// IMP=0x000000000001a210
- (id)_destinationAddressString;	// IMP=0x000000000001a203
- (id)_sourceAddressString;	// IMP=0x000000000001a1f6
- (unsigned int)_minimumRawDelay;	// IMP=0x000000000001a171
- (unsigned int)_maximumRawDelay;	// IMP=0x000000000001a0ef
- (unsigned int)_propagationDelayLimit;	// IMP=0x000000000001a06d
- (unsigned int)_minimumPropagationDelay;	// IMP=0x0000000000019fe8
- (unsigned int)_maximumPropagationDelay;	// IMP=0x0000000000019f66
- (unsigned int)_propagationDelay;	// IMP=0x0000000000019ee4
- (_Bool)_isASCapable;	// IMP=0x0000000000019e62
- (_Bool)_remoteIsSameDevice;	// IMP=0x0000000000019de0
- (unsigned short)_remotePortNumber;	// IMP=0x0000000000019d5d
- (unsigned long long)_remoteClockIdentity;	// IMP=0x0000000000019cdb
@property(readonly, nonatomic) IOKConnection *connection;
- (void)updateProperties;	// IMP=0x0000000000018fe9
- (_Bool)_commonInitWithService:(id)arg1;	// IMP=0x0000000000018933

@end

