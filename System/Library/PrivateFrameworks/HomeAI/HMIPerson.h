//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/NSCopying-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class NSSet, NSString, NSUUID;

@interface HMIPerson : HMFObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSSet *_personLinks;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006db43
+ (id)personFromHomePerson:(id)arg1;	// IMP=0x000000000006d82d
- (void).cxx_destruct;	// IMP=0x000000000006dec4
@property(readonly, copy) NSSet *personLinks; // @synthesize personLinks=_personLinks;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006dc2e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006db4b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006db38
- (unsigned long long)hash;	// IMP=0x000000000006daf4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006d94d
- (id)attributeDescriptions;	// IMP=0x000000000006d686
- (id)initWithUUID:(id)arg1 name:(id)arg2 personLinks:(id)arg3;	// IMP=0x000000000006d56e
- (id)initWithUUID:(id)arg1 name:(id)arg2;	// IMP=0x000000000006d4d7

@end
