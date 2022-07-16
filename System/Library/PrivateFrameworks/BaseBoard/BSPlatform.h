//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BSPlatform : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x000000000000c1ac
@property(readonly, nonatomic) _Bool hasOrbCapability;
@property(readonly, nonatomic) _Bool hasGasGauge;
@property(readonly, nonatomic, getter=isMultiCore) _Bool multiCore;
@property(readonly, nonatomic, getter=isCarrierInstall) _Bool carrierInstall;
@property(readonly, nonatomic, getter=isDeveloperInstall) _Bool developerInstall;
@property(readonly, nonatomic, getter=isInternalInstall) _Bool internalInstall;
@property(readonly, copy, nonatomic) NSString *uniqueDeviceIdentifier;
@property(readonly, copy, nonatomic) NSString *operatingSystemName;
@property(readonly, copy, nonatomic) NSString *localizedProductName;
@property(readonly, nonatomic) long long homeButtonType;
@property(readonly, nonatomic) int deviceClass;
@property(readonly, copy, nonatomic) NSString *productClass;
@property(readonly, copy, nonatomic) NSString *productHardwareModelName;
@property(readonly, copy, nonatomic) NSString *productHardwareModel;
@property(readonly, copy, nonatomic) NSString *productType;
@property(readonly, copy, nonatomic) NSString *productBuildVersion;
@property(readonly, copy, nonatomic) NSString *productVersion;

@end
