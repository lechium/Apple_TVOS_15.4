//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HMCameraActivityZone : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_points;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000017340d
- (void).cxx_destruct;	// IMP=0x00000000001733fd
@property(readonly, copy) NSArray *points; // @synthesize points=_points;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017322c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001731b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001731a8
- (unsigned long long)hash;	// IMP=0x0000000000173164
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017309b
- (id)description;	// IMP=0x0000000000172eeb
- (id)initWithPoints:(id)arg1;	// IMP=0x0000000000172e51

@end

