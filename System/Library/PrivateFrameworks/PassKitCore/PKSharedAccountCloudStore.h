//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString;

@interface PKSharedAccountCloudStore : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _dirty;	// 8 = 0x8
    NSArray *_sharedAccountCloudStoreZones;	// 16 = 0x10
    NSDate *_lastUpdated;	// 24 = 0x18
    NSString *_accountIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003d585e
- (void).cxx_destruct;	// IMP=0x00000000003d5d27
@property(nonatomic, getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(copy, nonatomic) NSArray *sharedAccountCloudStoreZones; // @synthesize sharedAccountCloudStoreZones=_sharedAccountCloudStoreZones;
- (id)description;	// IMP=0x00000000003d5bd3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003d5b32
- (unsigned long long)hash;	// IMP=0x00000000003d5ae4
- (_Bool)isEqualToSharedAccountCloudStore:(id)arg1;	// IMP=0x00000000003d5ad2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003d5a6a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003d59d0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003d5866
- (id)allPossibleZonesForAccountUser:(id)arg1 access:(unsigned long long)arg2;	// IMP=0x00000000003d556f
- (id)primaryZoneForAccountUser:(id)arg1 access:(unsigned long long)arg2;	// IMP=0x00000000003d551f
- (id)sharedAccountZoneWithName:(id)arg1 access:(unsigned long long)arg2;	// IMP=0x00000000003d52af
- (id)sharedAccountCloudStoreZonesWithAccess:(unsigned long long)arg1 forAccountUser:(id)arg2;	// IMP=0x00000000003d5145
- (id)sharedAccountCloudStoreZonesWithAccess:(unsigned long long)arg1;	// IMP=0x00000000003d4f9c
- (id)initWithArray:(id)arg1 lastUpdated:(id)arg2;	// IMP=0x00000000003d4d3c

@end
