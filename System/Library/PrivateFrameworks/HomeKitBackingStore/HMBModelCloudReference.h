//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModelNativeCKWrapper-Protocol.h>
#import <HomeKitBackingStore/NSSecureCoding-Protocol.h>

@class CKReference, HMBCloudZone, NSString;

@interface HMBModelCloudReference <HMBModelNativeCKWrapper, NSSecureCoding>
{
    CKReference *_reference;	// 8 = 0x8
    HMBCloudZone *_cloudZone;	// 16 = 0x10
    unsigned long long _action;	// 24 = 0x18
}

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000061b85
+ (void)applyNativeCKValue:(id)arg1 fromSource:(unsigned long long)arg2 associatingWith:(id)arg3 toModel:(id)arg4 propertyNamed:(id)arg5;	// IMP=0x0000000000061519
+ (_Bool)includeInModelEncoding;	// IMP=0x0000000000061511
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000061509
- (void).cxx_destruct;	// IMP=0x00000000000614da
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(nonatomic) __weak HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain, nonatomic) CKReference *reference; // @synthesize reference=_reference;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000061453
- (id)nativeCKValueWithEncodingContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000060f6a
- (id)attributeDescriptions;	// IMP=0x0000000000060db7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000060cd6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000060bc7
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000609df
- (id)referencedModelFromCloudZone:(id)arg1 allowExternalFetch:(_Bool)arg2;	// IMP=0x0000000000060418
- (void)associateWithContainer:(id)arg1;	// IMP=0x0000000000060330
- (id)initWithModelID:(id)arg1 action:(unsigned long long)arg2;	// IMP=0x0000000000060268

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

