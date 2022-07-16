//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKContainerID : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isTestContainer;	// 8 = 0x8
    _Bool _isAppleInternal;	// 9 = 0x9
    NSString *_containerIdentifier;	// 16 = 0x10
    long long _environment;	// 24 = 0x18
    long long _specialContainerType;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000053f8a
- (void).cxx_destruct;	// IMP=0x000000000005413e
@property(nonatomic) _Bool isAppleInternal; // @synthesize isAppleInternal=_isAppleInternal;
@property(nonatomic) _Bool isTestContainer; // @synthesize isTestContainer=_isTestContainer;
@property(nonatomic) long long specialContainerType; // @synthesize specialContainerType=_specialContainerType;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
@property(readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000054048
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000053f92
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000053f7f
- (unsigned long long)hash;	// IMP=0x0000000000053f1a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000053d9a
- (id)description;	// IMP=0x0000000000053d88
- (id)CKPropertiesDescription;	// IMP=0x0000000000053ce5
- (id)ckShortDescription;	// IMP=0x0000000000053c42
- (id)representativeDataclass;	// IMP=0x0000000000053c09
- (id)initWithSqliteRepresentation:(id)arg1;	// IMP=0x000000000005366d
- (id)sqliteRepresentation;	// IMP=0x00000000000535ef
- (id)initWithContainerIdentifier:(id)arg1 environment:(long long)arg2;	// IMP=0x0000000000052bd0
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000125607

@end

