//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKPeerPaymentPreferencesRestriction : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_altDSID;	// 8 = 0x8
    unsigned long long _restrictionType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000043b75c
- (void).cxx_destruct;	// IMP=0x000000000043bba5
@property(nonatomic) unsigned long long restrictionType; // @synthesize restrictionType=_restrictionType;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (id)description;	// IMP=0x000000000043ba7e
- (unsigned long long)hash;	// IMP=0x000000000043ba0d
- (_Bool)isEqualToPreferencesRestriction:(id)arg1;	// IMP=0x000000000043b9c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000043b95a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000043b8ee
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000043b851
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000043b764
- (id)dictionaryRepresentation;	// IMP=0x000000000043b683
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000043b5bd

@end

