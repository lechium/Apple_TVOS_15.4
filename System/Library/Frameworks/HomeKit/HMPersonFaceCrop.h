//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSMutableCopying-Protocol.h>

@class NSUUID;

@interface HMPersonFaceCrop <NSMutableCopying>
{
    NSUUID *_personUUID;	// 8 = 0x8
    NSUUID *_unassociatedFaceCropUUID;	// 16 = 0x10
    long long _source;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000092fee
- (void).cxx_destruct;	// IMP=0x0000000000092dc6
@property long long source; // @synthesize source=_source;
@property(copy) NSUUID *unassociatedFaceCropUUID; // @synthesize unassociatedFaceCropUUID=_unassociatedFaceCropUUID;
@property(readonly, copy) NSUUID *personUUID; // @synthesize personUUID=_personUUID;
- (id)attributeDescriptions;	// IMP=0x0000000000092b61
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009286a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000092772
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000092608
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000925fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009246b
- (id)initWithUUID:(id)arg1 dataRepresentation:(id)arg2 dateCreated:(id)arg3 faceBoundingBox:(struct CGRect)arg4 personUUID:(id)arg5;	// IMP=0x0000000000092328

@end

