//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOXPCSerializable-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSData, NSString, geo_isolater;

@interface GEOApplicationAuditToken : NSObject <NSSecureCoding, GEOXPCSerializable>
{
    NSData *_tokenData;	// 8 = 0x8
    NSString *_proxiedBundleId;	// 16 = 0x10
    NSString *_resolvedBundleId;	// 24 = 0x18
    NSString *_resolvedNetworkAttributionBundleId;	// 32 = 0x20
    geo_isolater *_isolater;	// 40 = 0x28
    _Bool _proxiedExternalBundleId;	// 48 = 0x30
    NSString *_secondaryIdentifier;	// 56 = 0x38
}

+ (id)currentProcessAuditToken;	// IMP=0x00000000011cac28
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000011cac20
- (void).cxx_destruct;	// IMP=0x00000000011cba21
@property(readonly, copy, nonatomic, getter=_secondaryIdentifier) NSString *secondaryIdentifier; // @synthesize secondaryIdentifier=_secondaryIdentifier;
@property(readonly, nonatomic, getter=isProxiedExternalBundleId) _Bool proxiedExternalBundleId; // @synthesize proxiedExternalBundleId=_proxiedExternalBundleId;
@property(readonly, nonatomic) NSString *proxiedBundleId; // @synthesize proxiedBundleId=_proxiedBundleId;
- (id)_bundleIdForAuditToken;	// IMP=0x00000000011cb7c1
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011cb6ac
- (id)bundleIdForNetworkAttribution;	// IMP=0x00000000011cb5f0
- (id)bundleId;	// IMP=0x00000000011cb54e
- (id)backingTokenData;	// IMP=0x00000000011cb540
- (id)init;	// IMP=0x00000000011cb532
- (id)publicLogDescription;	// IMP=0x00000000011cb47a
@property(readonly, copy) NSString *description;
- (id)initWithSecondaryIdentifier:(id)arg1;	// IMP=0x00000000011cb2d3
- (id)initWithProxiedExternalApplicationBundleId:(id)arg1;	// IMP=0x00000000011cb1f3
- (id)initWithProxiedApplicationBundleId:(id)arg1;	// IMP=0x00000000011cb113
- (id)initWithAuditTokenData:(id)arg1;	// IMP=0x00000000011cb033
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x00000000011caf8d
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000011cae60
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000011caddd
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000011cacc7
- (id)initWithNSXPCConnection:(id)arg1;	// IMP=0x00000000011cbaed
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00000000011cba75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

