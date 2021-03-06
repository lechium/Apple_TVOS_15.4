//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICStoreRequestContext, NSUUID;

@interface ICMusicSubscriptionStatusRequest : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _shouldIgnoreCache;	// 8 = 0x8
    _Bool _allowsFallbackToExpiredStatus;	// 9 = 0x9
    _Bool _allowsFallbackToStatusNeedingReload;	// 10 = 0xa
    _Bool _shouldReturnLastKnownStatusOnly;	// 11 = 0xb
    _Bool _shouldBypassEnforcementOfPrivacyAcknowledgement;	// 12 = 0xc
    ICStoreRequestContext *_storeRequestContext;	// 16 = 0x10
    long long _reason;	// 24 = 0x18
    long long _carrierBundleProvisioningStyle;	// 32 = 0x20
    NSUUID *_requestIdentifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000109115
- (void).cxx_destruct;	// IMP=0x00000000001090ed
@property(nonatomic) _Bool shouldBypassEnforcementOfPrivacyAcknowledgement; // @synthesize shouldBypassEnforcementOfPrivacyAcknowledgement=_shouldBypassEnforcementOfPrivacyAcknowledgement;
@property(readonly, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(nonatomic) long long carrierBundleProvisioningStyle; // @synthesize carrierBundleProvisioningStyle=_carrierBundleProvisioningStyle;
@property(nonatomic) _Bool shouldReturnLastKnownStatusOnly; // @synthesize shouldReturnLastKnownStatusOnly=_shouldReturnLastKnownStatusOnly;
@property(nonatomic) _Bool allowsFallbackToStatusNeedingReload; // @synthesize allowsFallbackToStatusNeedingReload=_allowsFallbackToStatusNeedingReload;
@property(nonatomic) _Bool allowsFallbackToExpiredStatus; // @synthesize allowsFallbackToExpiredStatus=_allowsFallbackToExpiredStatus;
@property(nonatomic) _Bool shouldIgnoreCache; // @synthesize shouldIgnoreCache=_shouldIgnoreCache;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(copy, nonatomic) ICStoreRequestContext *storeRequestContext; // @synthesize storeRequestContext=_storeRequestContext;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000108f3c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000108dd4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000108d70
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000108c24
- (unsigned long long)hash;	// IMP=0x00000000001045dc
- (id)description;	// IMP=0x000000000010441a
- (id)initWithStoreRequestContext:(id)arg1;	// IMP=0x0000000000104366

@end

