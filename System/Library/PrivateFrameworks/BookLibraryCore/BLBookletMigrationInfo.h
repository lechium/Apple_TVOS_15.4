//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookLibraryCore/NSCopying-Protocol.h>
#import <BookLibraryCore/NSSecureCoding-Protocol.h>

@interface BLBookletMigrationInfo : NSObject <NSCopying, NSSecureCoding>
{
    long long _migrationState;	// 8 = 0x8
    long long _storeID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001d531
@property(nonatomic) long long storeID; // @synthesize storeID=_storeID;
@property(nonatomic) long long migrationState; // @synthesize migrationState=_migrationState;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d778
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d69c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d539
- (id)description;	// IMP=0x000000000001d490
- (id)initWithStoreID:(long long)arg1 migrationState:(long long)arg2;	// IMP=0x000000000001d448

@end
