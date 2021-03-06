//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, VKCamera;

@interface VKMapSnapshot : NSObject <NSSecureCoding>
{
    NSArray *_images;	// 8 = 0x8
    unsigned long long _width;	// 16 = 0x10
    unsigned long long _height;	// 24 = 0x18
    double _scale;	// 32 = 0x20
    VKCamera *_vkCamera;	// 40 = 0x28
    CDStruct_80aa614a *_displayStyles;	// 48 = 0x30
    unsigned long long _displayStylesCount;	// 56 = 0x38
    NSDictionary *_memoryStats;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000053516e
@property(retain, nonatomic) NSDictionary *memoryStats; // @synthesize memoryStats=_memoryStats;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) NSArray *images; // @synthesize images=_images;
- (void)enumerateImagesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000535f8e
- (id)imageDataInFormat:(unsigned long long)arg1;	// IMP=0x0000000000535d7a
- (CDStruct_c3b9c2ee)coordinateForPoint:(struct CGPoint)arg1;	// IMP=0x0000000000535c6d
- (struct CGPoint)pointForCoordinate:(CDStruct_c3b9c2ee)arg1;	// IMP=0x0000000000535b11
- (id)description;	// IMP=0x0000000000535ab1
- (void)dealloc;	// IMP=0x0000000000535923
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005357f1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000535334
- (id)_initWithImages:(id)arg1 displayStyles:(CDStruct_80aa614a *)arg2 displayStylesCount:(unsigned long long)arg3 scale:(double)arg4 camera:(id)arg5;	// IMP=0x0000000000535176

@end

