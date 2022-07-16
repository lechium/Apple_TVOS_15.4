//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>
#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@class NSData;

@interface CHEncodedStrokeIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _savedHash;	// 8 = 0x8
    NSData *_encodedStrokeIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000133b0
- (void).cxx_destruct;	// IMP=0x00000000000133d0
@property(readonly, nonatomic) NSData *encodedStrokeIdentifier; // @synthesize encodedStrokeIdentifier=_encodedStrokeIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000013320
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000132f0
- (_Bool)isEqualToCHEncodedStrokeIdentifier:(id)arg1;	// IMP=0x0000000000013230
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000131d0
- (unsigned long long)hash;	// IMP=0x0000000000013060
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013050
- (id)initWithData:(id)arg1;	// IMP=0x0000000000012fe0

@end

