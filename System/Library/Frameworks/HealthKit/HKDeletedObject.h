//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSUUID;

@interface HKDeletedObject : NSObject <NSSecureCoding>
{
    NSUUID *_UUID;	// 8 = 0x8
    NSDictionary *_metadata;	// 16 = 0x10
    long long _externalSyncObjectCode;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003419f
+ (id)_metadataWithSyncIdentifier:(id)arg1 syncVersion:(id)arg2;	// IMP=0x000000000001d402
+ (id)_deletedObjectWithUUID:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000001c5de
- (void).cxx_destruct;	// IMP=0x000000000001c955
@property(nonatomic) long long externalSyncObjectCode; // @synthesize externalSyncObjectCode=_externalSyncObjectCode;
@property(copy) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000034215
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000341a7
- (id)description;	// IMP=0x00000000000340b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003402b
- (unsigned long long)hash;	// IMP=0x0000000000034015
- (id)_init;	// IMP=0x000000000001c8fe

@end

