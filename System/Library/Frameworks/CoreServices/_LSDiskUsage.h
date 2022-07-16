//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/NSCopying-Protocol.h>
#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSMutableDictionary *_usage;	// 16 = 0x10
    id _validationToken;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009b529
+ (id)_serverQueue;	// IMP=0x000000000009b809
+ (id)ODRUsageForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009c535
+ (id)ODRConnection;	// IMP=0x000000000009c3d9
+ (id)usageFromMobileInstallationForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009be7b
+ (id)mobileInstallationQueue;	// IMP=0x000000000009bdee
+ (id)propertyQueue;	// IMP=0x000000000009bd68
- (void).cxx_destruct;	// IMP=0x000000000009b7d6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009b670
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009b531
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009b51e
- (id)debugDescription;	// IMP=0x000000000009b377
- (void)removeAllCachedUsageValues;	// IMP=0x000000000009b269
@property(readonly, nonatomic) NSNumber *sharedUsage; // @dynamic sharedUsage;
@property(readonly, nonatomic) NSNumber *onDemandResourcesUsage; // @dynamic onDemandResourcesUsage;
@property(readonly, nonatomic) NSNumber *dynamicUsage; // @dynamic dynamicUsage;
@property(readonly, nonatomic) NSNumber *staticUsage; // @dynamic staticUsage;
- (id)init;	// IMP=0x000000000009ab8e
- (_Bool)_fetchWithXPCConnection:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009b9e5
- (id)_initWithBundleIdentifier:(id)arg1 alreadyKnownUsage:(id)arg2 validationToken:(id)arg3;	// IMP=0x000000000009b89b
- (_Bool)fetchClientSideWithError:(id *)arg1;	// IMP=0x000000000009cdec
- (_Bool)fetchServerSideWithConnection:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009ca6a

@end
