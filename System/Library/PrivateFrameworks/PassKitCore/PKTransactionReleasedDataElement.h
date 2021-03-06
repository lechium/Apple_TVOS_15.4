//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKTransactionReleasedDataElement : NSObject <NSSecureCoding>
{
    NSString *_elementNamespace;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    unsigned long long _retentionIntent;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000177188
- (void).cxx_destruct;	// IMP=0x00000000001775f2
@property(nonatomic) unsigned long long retentionIntent; // @synthesize retentionIntent=_retentionIntent;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *elementNamespace; // @synthesize elementNamespace=_elementNamespace;
- (id)dictionaryRepresentation;	// IMP=0x0000000000177501
- (id)description;	// IMP=0x000000000017744e
- (_Bool)isEqualToReleasedDataElement:(id)arg1;	// IMP=0x00000000001773f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017738c
- (unsigned long long)hash;	// IMP=0x000000000017730d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000177286
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000177190

@end

