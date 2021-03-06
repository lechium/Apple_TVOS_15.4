//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/NSSecureCoding-Protocol.h>

@interface HMIPoint : HMFObject <NSSecureCoding>
{
    struct CGPoint _point;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000097532
@property(readonly) struct CGPoint point; // @synthesize point=_point;
- (id)description;	// IMP=0x00000000000567c8
- (id)initWithPoint:(struct CGPoint)arg1;	// IMP=0x000000000005676e
@property(readonly) double y;
@property(readonly) double x;
- (unsigned long long)hash;	// IMP=0x00000000000976de
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000097634
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000975be
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009753a

@end

