//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSString;

@interface CPLContainerRelation : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _keyAsset;	// 8 = 0x8
    NSString *_containerIdentifier;	// 16 = 0x10
    long long _position;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005b353
- (void).cxx_destruct;	// IMP=0x00000000000dcda3
@property(nonatomic, getter=isKeyAsset) _Bool keyAsset; // @synthesize keyAsset=_keyAsset;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (id)description;	// IMP=0x00000000000dcd03
- (id)proposedIdentifierForItemIdentifier:(id)arg1;	// IMP=0x00000000000dcb6a
- (id)proposedScopedIdentifierForItemScopedIdentifier:(id)arg1;	// IMP=0x00000000000dca5e
- (unsigned long long)hash;	// IMP=0x00000000000dca4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dca3a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a665
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005a5fd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005a5eb

@end

