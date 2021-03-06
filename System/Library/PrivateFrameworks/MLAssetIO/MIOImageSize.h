//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MLAssetIO/NSCopying-Protocol.h>

@interface MIOImageSize : NSObject <NSCopying>
{
    struct ImageFeatureType_ImageSize _imageSizeParams;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000001a9d8
- (void).cxx_destruct;	// IMP=0x000000000001a9ca
@property(readonly, nonatomic) long long pixelsHigh;
@property(readonly, nonatomic) long long pixelsWide;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a9ab
- (long long)compare:(id)arg1;	// IMP=0x000000000001a801
- (unsigned long long)hash;	// IMP=0x000000000001a7c5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001a6dc
- (id)description;	// IMP=0x000000000001a67f
- (id)initWithSpecification:(const void *)arg1;	// IMP=0x000000000001a60f

@end

