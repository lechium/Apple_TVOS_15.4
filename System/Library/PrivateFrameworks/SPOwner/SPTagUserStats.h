//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@interface SPTagUserStats : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _overflowFlag;	// 8 = 0x8
    unsigned char _crashCount;	// 9 = 0x9
    unsigned short _multiTime;	// 10 = 0xa
    unsigned short _nearOwnerTime;	// 12 = 0xc
    unsigned short _wildTime;	// 14 = 0xe
    unsigned short _ownerPlaySoundCount;	// 16 = 0x10
    unsigned short _ownerPlaySoundTime;	// 18 = 0x12
    unsigned short _rangingCount;	// 20 = 0x14
    unsigned short _rangingTime;	// 22 = 0x16
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000169ec
@property(nonatomic) unsigned short rangingTime; // @synthesize rangingTime=_rangingTime;
@property(nonatomic) unsigned short rangingCount; // @synthesize rangingCount=_rangingCount;
@property(nonatomic) unsigned short ownerPlaySoundTime; // @synthesize ownerPlaySoundTime=_ownerPlaySoundTime;
@property(nonatomic) unsigned short ownerPlaySoundCount; // @synthesize ownerPlaySoundCount=_ownerPlaySoundCount;
@property(nonatomic) unsigned short wildTime; // @synthesize wildTime=_wildTime;
@property(nonatomic) unsigned short nearOwnerTime; // @synthesize nearOwnerTime=_nearOwnerTime;
@property(nonatomic) unsigned short multiTime; // @synthesize multiTime=_multiTime;
@property(nonatomic) unsigned char crashCount; // @synthesize crashCount=_crashCount;
@property(nonatomic) unsigned char overflowFlag; // @synthesize overflowFlag=_overflowFlag;
- (id)description;	// IMP=0x00000000000170e4
- (id)debugDescription;	// IMP=0x0000000000016d27
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016c2c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016b2a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000169f4

@end

