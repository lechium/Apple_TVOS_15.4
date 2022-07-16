//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCopying, NSSecureCoding>
{
    BBBulletin *_bulletin;	// 8 = 0x8
    unsigned long long _feeds;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007157d
- (void).cxx_destruct;	// IMP=0x00000000000716df
@property(readonly, nonatomic) unsigned long long feeds; // @synthesize feeds=_feeds;
@property(readonly, copy, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000071622
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000071585
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000071572
- (id)description;	// IMP=0x000000000007145a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007133e
- (unsigned long long)hash;	// IMP=0x00000000000712dc
- (id)typeDescription;	// IMP=0x00000000000712c4
- (id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2;	// IMP=0x0000000000071246

@end
