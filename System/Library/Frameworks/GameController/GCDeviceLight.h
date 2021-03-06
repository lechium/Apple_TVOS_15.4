//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>

@class GCColor;

@interface GCDeviceLight : NSObject <NSSecureCoding>
{
    GCColor *_color;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007e8db
- (void).cxx_destruct;	// IMP=0x000000000007e8cb
@property(copy, nonatomic) GCColor *color; // @synthesize color=_color;
- (id)description;	// IMP=0x000000000007e871
- (id)initWithColor:(id)arg1;	// IMP=0x000000000007e806
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007e974
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007e8e3

@end

