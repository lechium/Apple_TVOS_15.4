//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEOComposedRouteLaneDirectionInfo : NSObject <NSSecureCoding>
{
    int _direction;	// 8 = 0x8
    float _angle;	// 12 = 0xc
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000006e8beb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006e8d45
- (unsigned long long)hash;	// IMP=0x00000000006e8d30
@property(readonly, nonatomic) float angle;
@property(readonly, nonatomic) int direction;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006e8cad
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006e8bf3
- (id)initWithLaneArrowHead:(id)arg1;	// IMP=0x00000000006e8b3b

@end

