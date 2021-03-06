//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBBulletinUpdate;

@interface BBBulletinUpdateTransaction : NSObject <NSCopying, NSSecureCoding>
{
    BBBulletinUpdate *_bulletinUpdate;	// 8 = 0x8
    unsigned long long _transactionID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000063485
+ (id)transactionWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2;	// IMP=0x00000000000630d0
- (void).cxx_destruct;	// IMP=0x00000000000635e7
@property(readonly, nonatomic) unsigned long long transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, copy, nonatomic) BBBulletinUpdate *bulletinUpdate; // @synthesize bulletinUpdate=_bulletinUpdate;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006352a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006348d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006347a
- (id)description;	// IMP=0x000000000006339f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000063283
- (unsigned long long)hash;	// IMP=0x0000000000063221
- (id)_initWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2;	// IMP=0x0000000000063128

@end

