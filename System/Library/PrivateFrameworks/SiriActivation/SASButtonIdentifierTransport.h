//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriActivation/NSCopying-Protocol.h>
#import <SiriActivation/NSSecureCoding-Protocol.h>

@class NSString;

@interface SASButtonIdentifierTransport : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000252e0
- (void).cxx_destruct;	// IMP=0x000000000002540d
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025379
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000252e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000025293
- (long long)siriButtonIdentifier;	// IMP=0x00000000000250d5
- (_Bool)_identifierMatchesSiriButtonIdentifier:(long long)arg1;	// IMP=0x000000000002505a
- (id)description;	// IMP=0x0000000000024fee
- (id)initWithString:(id)arg1;	// IMP=0x0000000000024f86
- (id)initWithSiriButtonIdentifier:(long long)arg1;	// IMP=0x0000000000024f00

@end
