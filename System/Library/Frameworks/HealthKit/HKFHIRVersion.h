//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKFHIRVersion : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_invalidVersionString;	// 8 = 0x8
    long long _majorVersion;	// 16 = 0x10
    long long _minorVersion;	// 24 = 0x18
    long long _patchVersion;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c37f0
+ (id)primaryR4Version;	// IMP=0x00000000001c37af
+ (id)primaryDSTU2Version;	// IMP=0x00000000001c376e
+ (id)versionFromVersionString:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c35fe
+ (id)versionFromVersionString:(id)arg1;	// IMP=0x00000000001c351c
- (void).cxx_destruct;	// IMP=0x00000000001c3b69
@property(readonly, nonatomic) long long patchVersion; // @synthesize patchVersion=_patchVersion;
@property(readonly, nonatomic) long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property(readonly, nonatomic) long long majorVersion; // @synthesize majorVersion=_majorVersion;
- (id)description;	// IMP=0x00000000001c3b39
@property(readonly, copy, nonatomic) NSString *stringRepresentation;
- (unsigned long long)hash;	// IMP=0x00000000001c3ab4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c39d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c39ce
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c3899
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c37f8
@property(readonly, nonatomic) NSString *FHIRRelease;
- (id)initWithInvalidVersionString:(id)arg1;	// IMP=0x00000000001c34a0
- (id)initWithSemanticVersion:(CDStruct_f6aba300)arg1;	// IMP=0x00000000001c3459
- (id)init;	// IMP=0x00000000001c33df

@end

