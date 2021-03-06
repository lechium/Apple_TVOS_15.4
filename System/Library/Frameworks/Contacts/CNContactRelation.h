//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNObjectValidation-Protocol.h>
#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNContactRelation : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>
{
    NSString *_name;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000085385
+ (id)contactRelationWithName:(id)arg1;	// IMP=0x000000000008533c
- (void).cxx_destruct;	// IMP=0x0000000000085994
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isValid:(id *)arg1;	// IMP=0x000000000008571e
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000855b3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000085466
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000085443
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008538d
- (id)initWithName:(id)arg1;	// IMP=0x00000000000852ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

