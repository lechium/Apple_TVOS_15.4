//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSHashTable, NSNumber, NSString, NSUUID;

@interface CBClassicPeer
{
    unsigned char _deviceType;	// 8 = 0x8
    _Bool _isDevFused;	// 9 = 0x9
    unsigned char _colorID;	// 10 = 0xa
    _Bool _isConnectedOverUSB;	// 11 = 0xb
    _Bool _isAppleAccessoryServer;	// 12 = 0xc
    unsigned char _batteryPercentSingle;	// 13 = 0xd
    unsigned char _batteryPercentLeft;	// 14 = 0xe
    unsigned char _batteryPercentRight;	// 15 = 0xf
    unsigned char _batteryPercentCase;	// 16 = 0x10
    unsigned char _batteryPercentCombined;	// 17 = 0x11
    _Bool _panEnabled;	// 18 = 0x12
    _Bool _browsingEnabled;	// 19 = 0x13
    _Bool _objectPushEnabled;	// 20 = 0x14
    unsigned char _listeningMode;	// 21 = 0x15
    _Bool _LRDetectionEnabled;	// 22 = 0x16
    _Bool _EQConfigEnabled;	// 23 = 0x17
    unsigned char _EQConfigTreble;	// 24 = 0x18
    unsigned char _EQConfigMid;	// 25 = 0x19
    unsigned char _EQConfigBass;	// 26 = 0x1a
    _Bool _autoAnswerCalls;	// 27 = 0x1b
    unsigned char _crownRotationDirection;	// 28 = 0x1c
    unsigned char _singleClickMode;	// 29 = 0x1d
    unsigned char _doubleClickMode;	// 30 = 0x1e
    unsigned char _clickHoldModeLeft;	// 31 = 0x1f
    unsigned char _clickHoldModeRight;	// 32 = 0x20
    unsigned char _oneBudANCMode;	// 33 = 0x21
    unsigned char _switchControlMode;	// 34 = 0x22
    unsigned char _doubleTapCapability;	// 35 = 0x23
    unsigned char _micMode;	// 36 = 0x24
    _Bool _inEarDetectionEnabled;	// 37 = 0x25
    _Bool _smartRoutingSupported;	// 38 = 0x26
    unsigned char _smartRoutingEnabled;	// 39 = 0x27
    _Bool _remoteTimeSyncEnabled;	// 40 = 0x28
    unsigned char _primaryInEarStatus;	// 41 = 0x29
    unsigned char _secondaryInEarStatus;	// 42 = 0x2a
    _Bool _isIncoming;	// 43 = 0x2b
    unsigned char _modeSupported;	// 44 = 0x2c
    _Bool _traceLogging;	// 45 = 0x2d
    unsigned short _productID;	// 46 = 0x2e
    unsigned short _vendorID;	// 48 = 0x30
    unsigned short _vendorIDSource;	// 50 = 0x32
    unsigned short _version;	// 52 = 0x34
    unsigned short _syncSettings;	// 54 = 0x36
    unsigned short _doubleTapAction;	// 56 = 0x38
    unsigned short _doubleTapActionLeft;	// 58 = 0x3a
    unsigned short _doubleTapActionRight;	// 60 = 0x3c
    unsigned short _connectionHandle;	// 62 = 0x3e
    unsigned int _listeningModeConfigs;	// 64 = 0x40
    unsigned int _doubleClickInterval;	// 68 = 0x44
    unsigned int _clickHoldInterval;	// 72 = 0x48
    unsigned int _appleFeatureBitMask;	// 76 = 0x4c
    NSString *_name;	// 80 = 0x50
    CDUnknownBlockType _connectL2CAPCallback;	// 88 = 0x58
    CDUnknownBlockType _disconnectL2CAPCallback;	// 96 = 0x60
    CDUnknownBlockType _connectRFCOMMCallback;	// 104 = 0x68
    CDUnknownBlockType _disconnectRFCOMMCallback;	// 112 = 0x70
    NSString *_appleModelIdentifier;	// 120 = 0x78
    NSArray *_syncGroups;	// 128 = 0x80
    NSArray *_services;	// 136 = 0x88
    NSData *_sdpRecordData;	// 144 = 0x90
    NSData *_aacpCapabilityBits;	// 152 = 0x98
    unsigned long long _appleExtendedFeatureBitMask;	// 160 = 0xa0
    NSUUID *_trustedUID;	// 168 = 0xa8
    NSString *_serialNumber;	// 176 = 0xb0
    NSNumber *_RSSI;	// 184 = 0xb8
    NSHashTable *_L2CAPChannels;	// 192 = 0xc0
    NSHashTable *_RFCOMMChannels;	// 200 = 0xc8
    long long _state;	// 208 = 0xd0
    long long _internalState;	// 216 = 0xd8
    NSString *_addressString;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x000000000000a9f0
@property(nonatomic) _Bool traceLogging; // @synthesize traceLogging=_traceLogging;
@property(nonatomic) unsigned char modeSupported; // @synthesize modeSupported=_modeSupported;
@property(copy, nonatomic) NSString *addressString; // @synthesize addressString=_addressString;
@property(nonatomic) unsigned short connectionHandle; // @synthesize connectionHandle=_connectionHandle;
@property(nonatomic) long long internalState; // @synthesize internalState=_internalState;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool isIncoming; // @synthesize isIncoming=_isIncoming;
@property(retain, nonatomic) NSHashTable *RFCOMMChannels; // @synthesize RFCOMMChannels=_RFCOMMChannels;
@property(retain, nonatomic) NSHashTable *L2CAPChannels; // @synthesize L2CAPChannels=_L2CAPChannels;
@property(retain, nonatomic) NSNumber *RSSI; // @synthesize RSSI=_RSSI;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSUUID *trustedUID; // @synthesize trustedUID=_trustedUID;
@property(nonatomic) unsigned long long appleExtendedFeatureBitMask; // @synthesize appleExtendedFeatureBitMask=_appleExtendedFeatureBitMask;
@property(nonatomic) unsigned int appleFeatureBitMask; // @synthesize appleFeatureBitMask=_appleFeatureBitMask;
@property(retain, nonatomic) NSData *aacpCapabilityBits; // @synthesize aacpCapabilityBits=_aacpCapabilityBits;
@property(retain, nonatomic) NSData *sdpRecordData; // @synthesize sdpRecordData=_sdpRecordData;
@property(retain, nonatomic) NSArray *services; // @synthesize services=_services;
@property(nonatomic) unsigned char secondaryInEarStatus; // @synthesize secondaryInEarStatus=_secondaryInEarStatus;
@property(nonatomic) unsigned char primaryInEarStatus; // @synthesize primaryInEarStatus=_primaryInEarStatus;
@property(nonatomic) _Bool remoteTimeSyncEnabled; // @synthesize remoteTimeSyncEnabled=_remoteTimeSyncEnabled;
@property(nonatomic) unsigned char smartRoutingEnabled; // @synthesize smartRoutingEnabled=_smartRoutingEnabled;
@property(nonatomic) _Bool smartRoutingSupported; // @synthesize smartRoutingSupported=_smartRoutingSupported;
@property(nonatomic) _Bool inEarDetectionEnabled; // @synthesize inEarDetectionEnabled=_inEarDetectionEnabled;
@property(nonatomic) unsigned char micMode; // @synthesize micMode=_micMode;
@property(nonatomic) unsigned char doubleTapCapability; // @synthesize doubleTapCapability=_doubleTapCapability;
@property(nonatomic) unsigned short doubleTapActionRight; // @synthesize doubleTapActionRight=_doubleTapActionRight;
@property(nonatomic) unsigned short doubleTapActionLeft; // @synthesize doubleTapActionLeft=_doubleTapActionLeft;
@property(nonatomic) unsigned short doubleTapAction; // @synthesize doubleTapAction=_doubleTapAction;
@property(nonatomic) unsigned char switchControlMode; // @synthesize switchControlMode=_switchControlMode;
@property(nonatomic) unsigned char oneBudANCMode; // @synthesize oneBudANCMode=_oneBudANCMode;
@property(nonatomic) unsigned int clickHoldInterval; // @synthesize clickHoldInterval=_clickHoldInterval;
@property(nonatomic) unsigned int doubleClickInterval; // @synthesize doubleClickInterval=_doubleClickInterval;
@property(nonatomic) unsigned char clickHoldModeRight; // @synthesize clickHoldModeRight=_clickHoldModeRight;
@property(nonatomic) unsigned char clickHoldModeLeft; // @synthesize clickHoldModeLeft=_clickHoldModeLeft;
@property(nonatomic) unsigned char doubleClickMode; // @synthesize doubleClickMode=_doubleClickMode;
@property(nonatomic) unsigned char singleClickMode; // @synthesize singleClickMode=_singleClickMode;
@property(nonatomic) unsigned char crownRotationDirection; // @synthesize crownRotationDirection=_crownRotationDirection;
@property(nonatomic) _Bool autoAnswerCalls; // @synthesize autoAnswerCalls=_autoAnswerCalls;
@property(nonatomic) unsigned char EQConfigBass; // @synthesize EQConfigBass=_EQConfigBass;
@property(nonatomic) unsigned char EQConfigMid; // @synthesize EQConfigMid=_EQConfigMid;
@property(nonatomic) unsigned char EQConfigTreble; // @synthesize EQConfigTreble=_EQConfigTreble;
@property(nonatomic) _Bool EQConfigEnabled; // @synthesize EQConfigEnabled=_EQConfigEnabled;
@property(nonatomic) _Bool LRDetectionEnabled; // @synthesize LRDetectionEnabled=_LRDetectionEnabled;
@property(nonatomic) unsigned int listeningModeConfigs; // @synthesize listeningModeConfigs=_listeningModeConfigs;
@property(nonatomic) unsigned char listeningMode; // @synthesize listeningMode=_listeningMode;
@property(nonatomic) _Bool objectPushEnabled; // @synthesize objectPushEnabled=_objectPushEnabled;
@property(nonatomic) _Bool browsingEnabled; // @synthesize browsingEnabled=_browsingEnabled;
@property(nonatomic) _Bool panEnabled; // @synthesize panEnabled=_panEnabled;
@property(nonatomic) unsigned char batteryPercentCombined; // @synthesize batteryPercentCombined=_batteryPercentCombined;
@property(nonatomic) unsigned char batteryPercentCase; // @synthesize batteryPercentCase=_batteryPercentCase;
@property(nonatomic) unsigned char batteryPercentRight; // @synthesize batteryPercentRight=_batteryPercentRight;
@property(nonatomic) unsigned char batteryPercentLeft; // @synthesize batteryPercentLeft=_batteryPercentLeft;
@property(nonatomic) unsigned char batteryPercentSingle; // @synthesize batteryPercentSingle=_batteryPercentSingle;
@property(nonatomic) unsigned short syncSettings; // @synthesize syncSettings=_syncSettings;
@property(retain, nonatomic) NSArray *syncGroups; // @synthesize syncGroups=_syncGroups;
@property(nonatomic) _Bool isAppleAccessoryServer; // @synthesize isAppleAccessoryServer=_isAppleAccessoryServer;
@property(nonatomic) _Bool isConnectedOverUSB; // @synthesize isConnectedOverUSB=_isConnectedOverUSB;
@property(copy, nonatomic) NSString *appleModelIdentifier; // @synthesize appleModelIdentifier=_appleModelIdentifier;
@property(nonatomic) unsigned char colorID; // @synthesize colorID=_colorID;
@property(nonatomic) _Bool isDevFused; // @synthesize isDevFused=_isDevFused;
@property(nonatomic) unsigned short version; // @synthesize version=_version;
@property(nonatomic) unsigned short vendorIDSource; // @synthesize vendorIDSource=_vendorIDSource;
@property(nonatomic) unsigned short vendorID; // @synthesize vendorID=_vendorID;
@property(nonatomic) unsigned short productID; // @synthesize productID=_productID;
@property(copy) CDUnknownBlockType disconnectRFCOMMCallback; // @synthesize disconnectRFCOMMCallback=_disconnectRFCOMMCallback;
@property(copy) CDUnknownBlockType connectRFCOMMCallback; // @synthesize connectRFCOMMCallback=_connectRFCOMMCallback;
@property(copy) CDUnknownBlockType disconnectL2CAPCallback; // @synthesize disconnectL2CAPCallback=_disconnectL2CAPCallback;
@property(copy) CDUnknownBlockType connectL2CAPCallback; // @synthesize connectL2CAPCallback=_connectL2CAPCallback;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned char deviceType; // @synthesize deviceType=_deviceType;
- (_Bool)isRFCOMMServiceSupported:(id)arg1;	// IMP=0x0000000000009dc0
- (void)closeRFCOMMChannel:(unsigned char)arg1;	// IMP=0x0000000000009af0
- (void)openRFCOMMChannel:(unsigned char)arg1;	// IMP=0x0000000000009ad0
- (void)closeL2CAPChannel:(unsigned short)arg1;	// IMP=0x00000000000099d0
- (void)openL2CAPChannel:(unsigned short)arg1;	// IMP=0x0000000000009920
- (_Bool)isServiceSupported:(id)arg1;	// IMP=0x00000000000098b0
- (void)configureRFCOMMPortParams:(id)arg1;	// IMP=0x0000000000009890
- (void)openRFCOMMChannel:(unsigned char)arg1 options:(id)arg2;	// IMP=0x0000000000009760
- (_Bool)isAACPCapabilityBit:(unsigned int)arg1;	// IMP=0x00000000000094c0
- (_Bool)isAppleFeatureSupported:(unsigned int)arg1;	// IMP=0x0000000000009490
- (_Bool)isNintendoGameController;	// IMP=0x00000000000093f0
- (_Bool)isXboxGameController;	// IMP=0x0000000000009330
- (_Bool)isSonyGameController;	// IMP=0x0000000000009290
- (_Bool)isGameController;	// IMP=0x0000000000009240
- (_Bool)isReportingBatteryPercent;	// IMP=0x00000000000091d0
- (_Bool)isMultiBatteryDevice;	// IMP=0x0000000000009120
- (_Bool)isMac;	// IMP=0x00000000000090d0
- (_Bool)isiPad;	// IMP=0x0000000000009090
- (_Bool)isiPhone;	// IMP=0x0000000000009050
- (_Bool)isAppleDevice;	// IMP=0x0000000000008fc0
- (unsigned int)getConnectedServices;	// IMP=0x0000000000008dd0
- (unsigned char)rfcommChannelIDForService:(id)arg1;	// IMP=0x0000000000006c00
- (id)serviceForRFCOMMChannelID:(unsigned char)arg1;	// IMP=0x0000000000006a40
- (unsigned short)psmForService:(id)arg1;	// IMP=0x00000000000069b0
- (id)serviceForPSM:(unsigned short)arg1;	// IMP=0x00000000000067f0
- (id)service:(id)arg1;	// IMP=0x0000000000006610
- (void)setOrphan;	// IMP=0x00000000000065f0
- (id)channelWithID:(unsigned char)arg1;	// IMP=0x0000000000006410
- (void)handleRFCOMMChannelClosed:(id)arg1;	// IMP=0x00000000000061f0
- (void)handleRFCOMMChannelOpened:(id)arg1;	// IMP=0x0000000000005fa0
- (id)channelWithPSM:(unsigned short)arg1;	// IMP=0x0000000000005dc0
- (void)handleL2CAPChannelClosed:(id)arg1;	// IMP=0x0000000000005c00
- (void)handleL2CAPChannelOpened:(id)arg1;	// IMP=0x0000000000005910
- (void)handleDisconnection;	// IMP=0x00000000000058c0
- (void)handleFailedConnection;	// IMP=0x00000000000058a0
- (void)handleSuccessfulConnection:(id)arg1;	// IMP=0x00000000000056e0
- (void)handlePeerUpdated:(id)arg1;	// IMP=0x0000000000002a80
- (void)handleGetPeerState:(id)arg1;	// IMP=0x0000000000002a20
- (void)handleMsg:(int)arg1 args:(id)arg2;	// IMP=0x0000000000002860
- (void)sendMsg:(int)arg1 requiresConnected:(_Bool)arg2 args:(id)arg3;	// IMP=0x0000000000002670
- (void)sendMsg:(int)arg1 args:(id)arg2;	// IMP=0x0000000000002650
- (id)importServices:(id)arg1;	// IMP=0x00000000000021f0
- (id)description;	// IMP=0x0000000000002020
- (void)dealloc;	// IMP=0x0000000000001f00
- (unsigned long long)hash;	// IMP=0x0000000000001eb0
- (id)initWithInfo:(id)arg1 manager:(id)arg2;	// IMP=0x0000000000001d90

@end

