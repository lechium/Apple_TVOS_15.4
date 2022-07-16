//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDistributedSync/NSCopying-Protocol.h>
#import <CloudKitDistributedSync/NSSecureCoding-Protocol.h>

@class CKDistributedSiteIdentifier, NSData;

@interface CKDistributedTimestamp : NSObject <NSSecureCoding, NSCopying>
{
    CKDistributedSiteIdentifier *_siteIdentifierObject;	// 8 = 0x8
    unsigned long long _clockValue;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000fbeae
- (void).cxx_destruct;	// IMP=0x00000000000fc73c
@property(readonly, nonatomic) unsigned long long clockValue; // @synthesize clockValue=_clockValue;
@property(readonly, nonatomic) CKDistributedSiteIdentifier *siteIdentifierObject; // @synthesize siteIdentifierObject=_siteIdentifierObject;
- (id)descriptionWithStringSiteIdentifiers;	// IMP=0x00000000000fc5ee
- (id)description;	// IMP=0x00000000000fc4b4
- (unsigned long long)hash;	// IMP=0x00000000000fc3e6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fc31a
- (long long)compareToTimestamp:(id)arg1;	// IMP=0x00000000000fc1e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fc1dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fc08d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fbeb6
@property(readonly, nonatomic) _Bool unordered;
@property(readonly, nonatomic) unsigned char modifier;
@property(readonly, nonatomic) NSData *siteIdentifier;
- (id)initWithSiteIdentifierObject:(id)arg1 clockValue:(unsigned long long)arg2;	// IMP=0x00000000000fbd67
- (id)initWithSiteIdentifier:(id)arg1 clockValue:(unsigned long long)arg2 modifier:(unsigned char)arg3 unordered:(_Bool)arg4;	// IMP=0x00000000000fbd55
- (id)initWithSiteIdentifier:(id)arg1 clockValue:(unsigned long long)arg2;	// IMP=0x00000000000fbcb1

@end
