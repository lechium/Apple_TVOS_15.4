//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIRingsGeometry : NSObject
{
    unsigned int _circleSegments;	// 8 = 0x8
    float _startingRadian;	// 12 = 0xc
    float _endingRadian;	// 16 = 0x10
}

@property(nonatomic) float endingRadian; // @synthesize endingRadian=_endingRadian;
@property(nonatomic) float startingRadian; // @synthesize startingRadian=_startingRadian;
@property(nonatomic) unsigned int circleSegments; // @synthesize circleSegments=_circleSegments;
- (unsigned short *)disconnectedIndiciesGeometry;	// IMP=0x000000000001cd68
- (unsigned int)disconnectedIndexCount;	// IMP=0x000000000001cd4d
- (unsigned short *)connectedIndiciesGeometry;	// IMP=0x000000000001cbeb
- (unsigned int)indexCount;	// IMP=0x000000000001cbd3
- (void)enumerateVertexGeometryWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001cab1
- (unsigned int)vertexCount;	// IMP=0x000000000001ca9c
- (id)init;	// IMP=0x000000000001ca5a

@end

