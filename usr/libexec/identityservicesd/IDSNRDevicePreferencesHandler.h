//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSNRDevicePreferences, NSMutableSet;

@interface IDSNRDevicePreferencesHandler : NSObject
{
    unsigned int _quickRelayRequestsCount;	// 8 = 0x8
    IDSNRDevicePreferences *_nrDevicePreferences;	// 16 = 0x10
    NSMutableSet *_servicesPreferringInfraWiFi;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000473010
@property(nonatomic) unsigned int quickRelayRequestsCount; // @synthesize quickRelayRequestsCount=_quickRelayRequestsCount;
@property(retain, nonatomic) NSMutableSet *servicesPreferringInfraWiFi; // @synthesize servicesPreferringInfraWiFi=_servicesPreferringInfraWiFi;
@property(retain, nonatomic) IDSNRDevicePreferences *nrDevicePreferences; // @synthesize nrDevicePreferences=_nrDevicePreferences;
- (void)cancel;	// IMP=0x0010000000472dc0
- (void)setQuickRelayRequest:(_Bool)arg1;	// IMP=0x0010000000472be0
- (void)setAllowedTrafficClasses:(id)arg1;	// IMP=0x0010000000472b60
- (void)_reportPreferInfraWiFiToPowerLogs:(_Bool)arg1;	// IMP=0x0010000000472a40
- (void)localSetUpCompleted;	// IMP=0x0010000000472990
- (void)localSetUpStarted;	// IMP=0x00100000004728e0
- (void)setPreferInfraWiFiRequest:(_Bool)arg1 services:(id)arg2;	// IMP=0x0010000000472340
- (void)setBluetoothLinkPreferences:(id)arg1 inputbps:(id)arg2 outputbps:(id)arg3;	// IMP=0x0010000000472210
- (id)initWithDeviceIdentifier:(id)arg1;	// IMP=0x0010000000471d20

@end

