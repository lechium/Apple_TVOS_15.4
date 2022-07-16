//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface PXBarAnimationOptions : NSObject <NSCopying>
{
    long long _type;	// 8 = 0x8
    double _duration;	// 16 = 0x10
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004ffbda
- (id)description;	// IMP=0x00000000004ffb94
- (id)initWithType:(long long)arg1 duration:(double)arg2;	// IMP=0x00000000004ffb48
- (id)initWithType:(long long)arg1;	// IMP=0x00000000004ffb23
- (id)init;	// IMP=0x00000000004ffb0f

@end

