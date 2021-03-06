//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Catalyst/NSCopying-Protocol.h>
#import <Catalyst/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CATIDSMessageOptions : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _fireAndForget;	// 8 = 0x8
    NSNumber *_deliveryTimeout;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000009408
- (void).cxx_destruct;	// IMP=0x00000000000096b3
@property(retain, nonatomic) NSNumber *deliveryTimeout; // @synthesize deliveryTimeout=_deliveryTimeout;
@property(nonatomic, getter=shouldFireAndForget) _Bool fireAndForget; // @synthesize fireAndForget=_fireAndForget;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000095ef
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000094d5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009410

@end

