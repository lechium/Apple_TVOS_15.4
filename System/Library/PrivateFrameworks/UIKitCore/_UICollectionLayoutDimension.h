//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting-Protocol.h>

@interface _UICollectionLayoutDimension : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting>
{
    long long _semantic;	// 8 = 0x8
    double _dimension;	// 16 = 0x10
}

+ (id)estimated:(double)arg1;	// IMP=0x0000000000fc01fd
+ (id)absolute:(double)arg1;	// IMP=0x0000000000fc01bf
+ (id)fractionalHeight:(double)arg1;	// IMP=0x0000000000fc017e
+ (id)fractionalWidth:(double)arg1;	// IMP=0x0000000000fc013d
- (id)_apiRepresentation;	// IMP=0x0000000000fc02b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fc0281
@property(readonly, nonatomic) _Bool isFractionalHeight;
@property(readonly, nonatomic) _Bool isFractionalWidth;
@property(readonly, nonatomic) _Bool isEstimated;
@property(readonly, nonatomic) _Bool isAbsolute;
@property(readonly, nonatomic) double dimension;
- (id)initWithSemantic:(long long)arg1 dimension:(double)arg2;	// IMP=0x0000000000fc00f1

@end

