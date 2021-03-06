//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/NSSecureCoding-Protocol.h>

@class DDSAttributeFilter, NSString;
@protocol OS_dispatch_queue;

@interface DDSAssetQuery : NSObject <NSSecureCoding>
{
    _Bool _localOnly;	// 8 = 0x8
    _Bool _installedOnly;	// 9 = 0x9
    _Bool _latestOnly;	// 10 = 0xa
    _Bool _cachedOnly;	// 11 = 0xb
    NSString *_description;	// 16 = 0x10
    NSString *_assetType;	// 24 = 0x18
    DDSAttributeFilter *_filter;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a803
- (void).cxx_destruct;	// IMP=0x000000000000b085
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property(nonatomic) _Bool latestOnly; // @synthesize latestOnly=_latestOnly;
@property(nonatomic) _Bool installedOnly; // @synthesize installedOnly=_installedOnly;
@property(nonatomic) _Bool localOnly; // @synthesize localOnly=_localOnly;
@property(readonly, nonatomic) DDSAttributeFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000af35
- (unsigned long long)hash;	// IMP=0x000000000000ae20
- (_Bool)isEqualToAssetQuery:(id)arg1;	// IMP=0x000000000000ac95
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ac3c
@property(readonly, nonatomic) NSString *cacheKey;
- (void)invalidateDescription;	// IMP=0x000000000000aaab
- (id)dumpDescription;	// IMP=0x000000000000a98f
- (id)description;	// IMP=0x000000000000a80b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a541
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a296
- (id)init;	// IMP=0x000000000000a0b4
- (id)initWithAssetType:(id)arg1 filter:(id)arg2 localOnly:(_Bool)arg3 installedOnly:(_Bool)arg4 latestOnly:(_Bool)arg5 cachedOnly:(_Bool)arg6;	// IMP=0x0000000000009fe0
- (id)initWithAssetType:(id)arg1 filter:(id)arg2;	// IMP=0x0000000000009fb9
- (id)assetType:(id)arg1;	// IMP=0x0000000000009f87

@end

