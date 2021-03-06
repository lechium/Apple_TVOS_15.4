//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface AKAttestationData : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_attestationHeaders;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000013a68
- (void).cxx_destruct;	// IMP=0x0000000000013d3b
@property(copy, nonatomic) NSDictionary *attestationHeaders; // @synthesize attestationHeaders=_attestationHeaders;
- (id)description;	// IMP=0x0000000000013c8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013c26
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000013c03
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000013ae3
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000013a70

@end

