//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>

@class NSString;

@interface CNReputationHandle : NSObject <NSCopying>
{
    NSString *_stringValue;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

+ (id)descriptionForType:(long long)arg1;	// IMP=0x00000000000b0bff
+ (id)handleWithPhoneNumber:(id)arg1;	// IMP=0x00000000000b0a15
+ (id)handleWithEmailAddress:(id)arg1;	// IMP=0x00000000000b09c3
+ (id)handleWithStringValue:(id)arg1;	// IMP=0x00000000000b0974
- (void).cxx_destruct;	// IMP=0x00000000000b10db
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)configureBuilder:(id)arg1;	// IMP=0x00000000000b1081
- (unsigned long long)hash;	// IMP=0x00000000000b0f4a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b0d53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b0d48
- (id)description;	// IMP=0x00000000000b0af8
- (id)initWithStringValue:(id)arg1 type:(long long)arg2;	// IMP=0x00000000000b0a67

@end

