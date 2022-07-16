//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface IDSSessionEndedMetric : NSObject <CUTCoreAnalyticsMetric>
{
    _Bool _isNetworkEnabled;	// 8 = 0x8
    _Bool _isNetworkActive;	// 9 = 0x9
    _Bool _isNetworkReachable;	// 10 = 0xa
    _Bool _usesRelay;	// 11 = 0xb
    _Bool _isInitiator;	// 12 = 0xc
    unsigned int _endedReason;	// 16 = 0x10
    unsigned int _genericError;	// 20 = 0x14
    unsigned int _gameKitError;	// 24 = 0x18
    unsigned int _conferenceMiscError;	// 28 = 0x1c
    unsigned int _networkCheckResult;	// 32 = 0x20
    unsigned int _remoteNetworkConnection;	// 36 = 0x24
    unsigned int _localNetworkConnection;	// 40 = 0x28
    unsigned int _connectionType;	// 44 = 0x2c
    NSString *_guid;	// 48 = 0x30
    NSNumber *_callDuration;	// 56 = 0x38
    NSNumber *_dataRate;	// 64 = 0x40
    NSNumber *_gksError;	// 72 = 0x48
    NSNumber *_connectDuration;	// 80 = 0x50
    NSNumber *_currentNATType;	// 88 = 0x58
    NSNumber *_remoteNATType;	// 96 = 0x60
    NSNumber *_relayConnectDuration;	// 104 = 0x68
    NSNumber *_linkQuality;	// 112 = 0x70
    NSNumber *_gksReturnCode;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000bce3d
@property(readonly, nonatomic) NSNumber *gksReturnCode; // @synthesize gksReturnCode=_gksReturnCode;
@property(readonly, nonatomic) NSNumber *linkQuality; // @synthesize linkQuality=_linkQuality;
@property(readonly, nonatomic) _Bool isInitiator; // @synthesize isInitiator=_isInitiator;
@property(readonly, nonatomic) NSNumber *relayConnectDuration; // @synthesize relayConnectDuration=_relayConnectDuration;
@property(readonly, nonatomic) NSNumber *remoteNATType; // @synthesize remoteNATType=_remoteNATType;
@property(readonly, nonatomic) NSNumber *currentNATType; // @synthesize currentNATType=_currentNATType;
@property(readonly, nonatomic) _Bool usesRelay; // @synthesize usesRelay=_usesRelay;
@property(readonly, nonatomic) unsigned int connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) unsigned int localNetworkConnection; // @synthesize localNetworkConnection=_localNetworkConnection;
@property(readonly, nonatomic) unsigned int remoteNetworkConnection; // @synthesize remoteNetworkConnection=_remoteNetworkConnection;
@property(readonly, nonatomic) NSNumber *connectDuration; // @synthesize connectDuration=_connectDuration;
@property(readonly, nonatomic) NSNumber *gksError; // @synthesize gksError=_gksError;
@property(readonly, nonatomic) NSNumber *dataRate; // @synthesize dataRate=_dataRate;
@property(readonly, nonatomic) unsigned int networkCheckResult; // @synthesize networkCheckResult=_networkCheckResult;
@property(readonly, nonatomic) _Bool isNetworkReachable; // @synthesize isNetworkReachable=_isNetworkReachable;
@property(readonly, nonatomic) _Bool isNetworkActive; // @synthesize isNetworkActive=_isNetworkActive;
@property(readonly, nonatomic) _Bool isNetworkEnabled; // @synthesize isNetworkEnabled=_isNetworkEnabled;
@property(readonly, nonatomic) NSNumber *callDuration; // @synthesize callDuration=_callDuration;
@property(readonly, nonatomic) unsigned int conferenceMiscError; // @synthesize conferenceMiscError=_conferenceMiscError;
@property(readonly, nonatomic) unsigned int gameKitError; // @synthesize gameKitError=_gameKitError;
@property(readonly, nonatomic) unsigned int genericError; // @synthesize genericError=_genericError;
@property(readonly, nonatomic) unsigned int endedReason; // @synthesize endedReason=_endedReason;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (id)initWithGuid:(id)arg1 endedReason:(unsigned int)arg2 genericError:(unsigned int)arg3 gameKitError:(unsigned int)arg4 conferenceMiscError:(unsigned int)arg5 callDuration:(id)arg6 isNetworkEnabled:(_Bool)arg7 isNetworkActive:(_Bool)arg8 isNetworkReachable:(_Bool)arg9 networkCheckResult:(unsigned int)arg10 dataRate:(id)arg11 gksError:(id)arg12 connectDuration:(id)arg13 remoteNetworkConnection:(unsigned int)arg14 localNetworkConnection:(unsigned int)arg15 connectionType:(unsigned int)arg16 usesRelay:(_Bool)arg17 currentNATType:(id)arg18 remoteNATType:(id)arg19 relayConnectDuration:(id)arg20 isInitiator:(_Bool)arg21 linkQuality:(id)arg22 gksReturnCode:(id)arg23;	// IMP=0x00000000000bcb4f
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
