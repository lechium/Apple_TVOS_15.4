//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/NSCopying-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@interface GCColor : NSObject <NSCopying, NSSecureCoding>
{
    float _red;	// 8 = 0x8
    float _green;	// 12 = 0xc
    float _blue;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a58fd
@property(readonly) float blue; // @synthesize blue=_blue;
@property(readonly) float green; // @synthesize green=_green;
@property(readonly) float red; // @synthesize red=_red;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a5a8b
- (id)description;	// IMP=0x00000000000a5a3b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a5991
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a5905
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;	// IMP=0x00000000000a589c

@end

