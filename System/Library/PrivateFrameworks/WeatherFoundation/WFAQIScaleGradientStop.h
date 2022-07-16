//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface WFAQIScaleGradientStop : NSObject <NSCopying, NSSecureCoding>
{
    float _location;	// 8 = 0x8
    NSString *_color;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000016557
- (void).cxx_destruct;	// IMP=0x0000000000016743
@property(readonly, nonatomic) NSString *color; // @synthesize color=_color;
@property(readonly, nonatomic) float location; // @synthesize location=_location;
- (id)description;	// IMP=0x00000000000166a4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000165f9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001655f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000164db
- (id)initWithLocation:(float)arg1 color:(id)arg2;	// IMP=0x0000000000016459

@end
