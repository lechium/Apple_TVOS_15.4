//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXMagazineFrame : NSObject
{
    long long _width;	// 8 = 0x8
    long long _height;	// 16 = 0x10
    double _aspectRatio;	// 24 = 0x18
    double _minAspectRatio;	// 32 = 0x20
    double _maxAspectRatio;	// 40 = 0x28
}

@property(nonatomic) double maxAspectRatio; // @synthesize maxAspectRatio=_maxAspectRatio;
@property(nonatomic) double minAspectRatio; // @synthesize minAspectRatio=_minAspectRatio;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
- (id)description;	// IMP=0x000000000035fa08
@property(readonly, nonatomic) long long numberOfTiles;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2;	// IMP=0x000000000035f9b1

@end
