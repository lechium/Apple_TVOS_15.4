//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _CDNetworkContext : NSObject
{
}

+ (long long)cellUploadCost:(id)arg1;	// IMP=0x0000000000013d74
+ (long long)cellDownloadCost:(id)arg1;	// IMP=0x0000000000013c95
+ (_Bool)cellInterfaceUp:(id)arg1;	// IMP=0x0000000000013bb6
+ (_Bool)networkingAvailable:(id)arg1;	// IMP=0x0000000000013b59
+ (_Bool)inexpensiveNetworkingAvailable:(id)arg1;	// IMP=0x0000000000013afb
+ (long long)cellInterfaceClass:(id)arg1;	// IMP=0x0000000000013a86
+ (long long)wifiInterfaceClass:(id)arg1;	// IMP=0x0000000000013a11
+ (long long)wiredInterfaceClass:(id)arg1;	// IMP=0x000000000001399c
+ (long long)interfaceClassForPath:(id)arg1 inContext:(id)arg2;	// IMP=0x00000000000138fe
+ (long long)cellQuality:(id)arg1;	// IMP=0x000000000001381f
+ (long long)wifiQuality:(id)arg1;	// IMP=0x0000000000013740
+ (long long)wiredQuality:(id)arg1;	// IMP=0x0000000000013661
+ (long long)qualityForPath:(id)arg1 inContext:(id)arg2;	// IMP=0x00000000000135c3
+ (id)interfaceClassKey;	// IMP=0x00000000000135b6
+ (id)predictionKey;	// IMP=0x00000000000135a9
+ (id)loiKey;	// IMP=0x000000000001359c
+ (id)uploadPowerCostKey;	// IMP=0x000000000001358f
+ (id)downloadPowerCostKey;	// IMP=0x0000000000013582
+ (id)interfaceUpKey;	// IMP=0x0000000000013575
+ (id)connectionQualityKey;	// IMP=0x0000000000013568
+ (id)keyPathForCellConnectionStatus;	// IMP=0x00000000000134fc
+ (id)keyPathForWiFiConnectionStatus;	// IMP=0x0000000000013490
+ (id)keyPathForWiredConnectionStatus;	// IMP=0x0000000000013424

@end

