//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSNumber;

@interface PKCatalogGroup : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isUbiquitous;	// 8 = 0x8
    NSNumber *_groupID;	// 16 = 0x10
    NSMutableArray *_uniqueIDs;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000033f393
- (void).cxx_destruct;	// IMP=0x000000000033f60a
@property(nonatomic) _Bool isUbiquitous; // @synthesize isUbiquitous=_isUbiquitous;
@property(retain, nonatomic) NSMutableArray *uniqueIDs; // @synthesize uniqueIDs=_uniqueIDs;
@property(retain, nonatomic) NSNumber *groupID; // @synthesize groupID=_groupID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000033f511
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000033f39b
- (id)description;	// IMP=0x000000000033f366
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000033f2d2
- (_Bool)isEqualToGroup:(id)arg1;	// IMP=0x000000000033f250
- (id)init;	// IMP=0x000000000033f1dd

@end

