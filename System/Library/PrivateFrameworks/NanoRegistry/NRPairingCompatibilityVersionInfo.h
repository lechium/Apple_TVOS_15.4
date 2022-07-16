//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NRPairingCompatibilityVersionInfo : NSObject
{
    _Bool _isOverrideActive;	// 8 = 0x8
    long long _pairingCompatibilityVersion;	// 16 = 0x10
    long long _maxPairingCompatibilityVersion;	// 24 = 0x18
    long long _minPairingCompatibilityVersion;	// 32 = 0x20
    long long _minPairingCompatibilityVersionWithChipID;	// 40 = 0x28
    long long _minQuickSwitchCompatibilityVersion;	// 48 = 0x30
}

+ (unsigned long long)valueForToken:(int)arg1;	// IMP=0x0000000000020277
+ (id)systemVersions;	// IMP=0x000000000001fee3
+ (id)stringFromCFPrefs:(id)arg1;	// IMP=0x000000000001fe75
+ (id)numberFromCFPrefs:(id)arg1;	// IMP=0x000000000001fdb4
@property(nonatomic) _Bool isOverrideActive; // @synthesize isOverrideActive=_isOverrideActive;
@property(nonatomic) long long minQuickSwitchCompatibilityVersion; // @synthesize minQuickSwitchCompatibilityVersion=_minQuickSwitchCompatibilityVersion;
@property(nonatomic) long long minPairingCompatibilityVersionWithChipID; // @synthesize minPairingCompatibilityVersionWithChipID=_minPairingCompatibilityVersionWithChipID;
@property(nonatomic) long long minPairingCompatibilityVersion; // @synthesize minPairingCompatibilityVersion=_minPairingCompatibilityVersion;
@property(nonatomic) long long maxPairingCompatibilityVersion; // @synthesize maxPairingCompatibilityVersion=_maxPairingCompatibilityVersion;
@property(nonatomic) long long pairingCompatibilityVersion; // @synthesize pairingCompatibilityVersion=_pairingCompatibilityVersion;
- (id)initInternal;	// IMP=0x000000000001fd85
- (long long)minPairingCompatibilityVersionForChipID:(id)arg1 name:(id)arg2 defaultVersion:(long long)arg3;	// IMP=0x000000000001fa4c
- (long long)minQuickSwitchPairingCompatibilityVersionForChipID:(id)arg1;	// IMP=0x000000000001fa2c
- (long long)minPairingCompatibilityVersionForChipID:(id)arg1;	// IMP=0x000000000001fa0c

@end

