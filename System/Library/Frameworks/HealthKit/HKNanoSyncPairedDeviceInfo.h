//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKNanoSyncPairedDeviceInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_sourceBundleIdentifier;	// 8 = 0x8
    NSString *_systemBuildVersion;	// 16 = 0x10
    NSString *_productType;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
    int _protocolVersion;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001f7654
- (void).cxx_destruct;	// IMP=0x000000000000d7db
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001f779b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f765c
- (id)description;	// IMP=0x00000000001f75b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f75a7
- (unsigned long long)hash;	// IMP=0x00000000001f752a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000d6cf
@property(readonly) int protocolVersion;
@property(readonly, getter=isRestoreComplete) _Bool restoreComplete;
@property(readonly, getter=isActive) _Bool active;
@property(readonly, copy) NSString *productType;
@property(readonly, copy) NSString *systemBuildVersion;
@property(readonly, copy) NSString *sourceBundleIdentifier;
- (id)initWithSourceBundleIdentifier:(id)arg1 systemBuildVersion:(id)arg2 productType:(id)arg3 active:(_Bool)arg4 restoreComplete:(_Bool)arg5 protocolVersion:(int)arg6;	// IMP=0x000000000000d2c1

@end
