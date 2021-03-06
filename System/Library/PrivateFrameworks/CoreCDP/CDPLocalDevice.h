//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CDPLocalDeviceSecretProxy;

@interface CDPLocalDevice : NSObject
{
    id <CDPLocalDeviceSecretProxy> _localSecretProxy;	// 8 = 0x8
}

+ (_Bool)hasLocalSecret;	// IMP=0x0000000000019830
+ (id)sharedInstance;	// IMP=0x0000000000019750
- (void).cxx_destruct;	// IMP=0x0000000000019b45
- (_Bool)_isHomePod;	// IMP=0x0000000000019b28
- (_Bool)_currentProcessHasEntitlement:(id)arg1;	// IMP=0x00000000000199d7
- (_Bool)_currentProcessCreatesDaemonTypeProxy;	// IMP=0x00000000000199be
- (id)deviceName;	// IMP=0x00000000000199a3
- (id)serialNumber;	// IMP=0x0000000000019948
- (id)deviceClass;	// IMP=0x000000000001992d
- (id)osVersion;	// IMP=0x00000000000198d4
- (id)modelVersion;	// IMP=0x00000000000198b9
- (id)hardwareModel;	// IMP=0x000000000001989e
- (id)marketingModel;	// IMP=0x0000000000019883
- (_Bool)supportsSecureBackupRecovery;	// IMP=0x000000000001987b
- (_Bool)hasLocalSecret;	// IMP=0x000000000001981a
- (id)init;	// IMP=0x00000000000197a5

@end

