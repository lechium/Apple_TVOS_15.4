//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface IDSSessionCompleted : NSObject <CUTCoreAnalyticsMetric>
{
    _Bool _isQREnabled;	// 8 = 0x8
    _Bool _isUsingQRDirectly;	// 9 = 0x9
    _Bool _isInitiator;	// 10 = 0xa
    _Bool _isScreenSharingSessionType;	// 11 = 0xb
    _Bool _isWithDefaultPairedDevice;	// 12 = 0xc
    _Bool _isNetworkEnabled;	// 13 = 0xd
    _Bool _isNetworkActive;	// 14 = 0xe
    _Bool _isNetworkReachable;	// 15 = 0xf
    _Bool _isWifiInterfaceDisallowed;	// 16 = 0x10
    _Bool _isCellularInterfaceDisallowed;	// 17 = 0x11
    unsigned int _clientType;	// 20 = 0x14
    unsigned int _transportType;	// 24 = 0x18
    unsigned int _linkType;	// 28 = 0x1c
    unsigned int _linkProtocol;	// 32 = 0x20
    unsigned int _endedReason;	// 36 = 0x24
    unsigned int _destinationType;	// 40 = 0x28
    NSString *_guid;	// 48 = 0x30
    NSNumber *_protocolVersionNumber;	// 56 = 0x38
    NSString *_serviceName;	// 64 = 0x40
    NSNumber *_durationOfSession;	// 72 = 0x48
    NSNumber *_durationToConnect;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000f709a
@property(readonly, nonatomic) _Bool isCellularInterfaceDisallowed; // @synthesize isCellularInterfaceDisallowed=_isCellularInterfaceDisallowed;
@property(readonly, nonatomic) _Bool isWifiInterfaceDisallowed; // @synthesize isWifiInterfaceDisallowed=_isWifiInterfaceDisallowed;
@property(readonly, nonatomic) _Bool isNetworkReachable; // @synthesize isNetworkReachable=_isNetworkReachable;
@property(readonly, nonatomic) _Bool isNetworkActive; // @synthesize isNetworkActive=_isNetworkActive;
@property(readonly, nonatomic) _Bool isNetworkEnabled; // @synthesize isNetworkEnabled=_isNetworkEnabled;
@property(readonly, nonatomic) NSNumber *durationToConnect; // @synthesize durationToConnect=_durationToConnect;
@property(readonly, nonatomic) NSNumber *durationOfSession; // @synthesize durationOfSession=_durationOfSession;
@property(readonly, nonatomic) unsigned int destinationType; // @synthesize destinationType=_destinationType;
@property(readonly, nonatomic) unsigned int endedReason; // @synthesize endedReason=_endedReason;
@property(readonly, nonatomic) unsigned int linkProtocol; // @synthesize linkProtocol=_linkProtocol;
@property(readonly, nonatomic) unsigned int linkType; // @synthesize linkType=_linkType;
@property(readonly, nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) _Bool isWithDefaultPairedDevice; // @synthesize isWithDefaultPairedDevice=_isWithDefaultPairedDevice;
@property(readonly, nonatomic) _Bool isScreenSharingSessionType; // @synthesize isScreenSharingSessionType=_isScreenSharingSessionType;
@property(readonly, nonatomic) _Bool isInitiator; // @synthesize isInitiator=_isInitiator;
@property(readonly, nonatomic) _Bool isUsingQRDirectly; // @synthesize isUsingQRDirectly=_isUsingQRDirectly;
@property(readonly, nonatomic) _Bool isQREnabled; // @synthesize isQREnabled=_isQREnabled;
@property(readonly, nonatomic) unsigned int clientType; // @synthesize clientType=_clientType;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, nonatomic) NSNumber *protocolVersionNumber; // @synthesize protocolVersionNumber=_protocolVersionNumber;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (id)initWithGuid:(id)arg1 protocolVersionNumber:(id)arg2 serviceName:(id)arg3 clientType:(unsigned int)arg4 isQREnabled:(_Bool)arg5 isUsingQRDirectly:(_Bool)arg6 isInitiator:(_Bool)arg7 isScreenSharingSessionType:(_Bool)arg8 isWithDefaultPairedDevice:(_Bool)arg9 transportType:(unsigned int)arg10 linkType:(unsigned int)arg11 linkProtocol:(unsigned int)arg12 endedReason:(unsigned int)arg13 destinationType:(unsigned int)arg14 durationOfSession:(id)arg15 durationToConnect:(id)arg16 isNetworkEnabled:(_Bool)arg17 isNetworkActive:(_Bool)arg18 isNetworkReachable:(_Bool)arg19 isWifiInterfaceDisallowed:(_Bool)arg20 isCellularInterfaceDisallowed:(_Bool)arg21;	// IMP=0x00000000000f6e5a
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

