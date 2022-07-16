//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSArray, NSString, SGDateComponents, SGName, SGRecordId, _PASCachedResult;

@interface SGContact : NSObject <NSCopying, NSSecureCoding>
{
    _PASCachedResult *_cachedDetailForRecordIdMap;	// 8 = 0x8
    int _updatedFields;	// 16 = 0x10
    SGRecordId *_recordId;	// 24 = 0x18
    SGName *_name;	// 32 = 0x20
    NSArray *_emailAddresses;	// 40 = 0x28
    NSArray *_phones;	// 48 = 0x30
    NSArray *_postalAddresses;	// 56 = 0x38
    NSArray *_socialProfiles;	// 64 = 0x40
    SGDateComponents *_birthday;	// 72 = 0x48
    NSString *_photoPath;	// 80 = 0x50
    unsigned long long _significance;	// 88 = 0x58
    unsigned long long _significanceOrigin;	// 96 = 0x60
}

+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5;	// IMP=0x0000000000050d68
+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 socialProfiles:(id)arg6 birthday:(id)arg7 photoPath:(id)arg8;	// IMP=0x0000000000050c3b
+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 socialProfiles:(id)arg6;	// IMP=0x0000000000050c10
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000050c08
- (void).cxx_destruct;	// IMP=0x0000000000050a61
@property(nonatomic) int updatedFields; // @synthesize updatedFields=_updatedFields;
@property(nonatomic) unsigned long long significanceOrigin; // @synthesize significanceOrigin=_significanceOrigin;
@property(nonatomic) unsigned long long significance; // @synthesize significance=_significance;
@property(readonly, copy, nonatomic) NSString *photoPath; // @synthesize photoPath=_photoPath;
@property(copy, nonatomic) SGDateComponents *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSArray *socialProfiles; // @synthesize socialProfiles=_socialProfiles;
@property(copy, nonatomic) NSArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(copy, nonatomic) NSArray *phones; // @synthesize phones=_phones;
@property(copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(copy, nonatomic) SGName *name; // @synthesize name=_name;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
- (_Bool)hasNonTrivialInfo;	// IMP=0x000000000005088e
- (id)cnContact;	// IMP=0x0000000000050872
- (void)enumerateDetailsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000050568
- (id)detailForRecordId:(id)arg1;	// IMP=0x00000000000504ad
- (_Bool)containsDetailSuggestions;	// IMP=0x000000000005033d
- (_Bool)containsSuggestions;	// IMP=0x00000000000502e6
- (id)description;	// IMP=0x0000000000050281
- (unsigned long long)richness;	// IMP=0x0000000000050205
- (id)addresses;	// IMP=0x00000000000501f7
- (unsigned long long)hash;	// IMP=0x00000000000501e1
- (_Bool)isEqualToContact:(id)arg1;	// IMP=0x000000000005008b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000050023
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004ff26
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004fb5d
- (id)initWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 socialProfiles:(id)arg6 birthday:(id)arg7 photoPath:(id)arg8;	// IMP=0x000000000004f999
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004f98e

@end
