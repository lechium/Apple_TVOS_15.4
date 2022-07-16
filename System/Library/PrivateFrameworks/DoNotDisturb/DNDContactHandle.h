//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class NSString;

@interface DNDContactHandle : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_contactIdentifier;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSString *_value;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002959e
- (void).cxx_destruct;	// IMP=0x000000000002972d
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000029688
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000295a6
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029567
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002955c
- (id)_descriptionForRedacted:(_Bool)arg1;	// IMP=0x0000000000029484
- (id)redactedDescription;	// IMP=0x000000000002946d
- (id)description;	// IMP=0x0000000000029459
- (_Bool)matchesContactHandle:(id)arg1;	// IMP=0x00000000000291fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000028fb3
- (unsigned long long)hash;	// IMP=0x0000000000028f18
- (id)_initWithContactIdentifier:(id)arg1 type:(unsigned long long)arg2 value:(id)arg3;	// IMP=0x0000000000028e59

@end

