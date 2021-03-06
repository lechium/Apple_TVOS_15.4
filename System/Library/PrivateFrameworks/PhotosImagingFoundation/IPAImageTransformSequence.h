//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/IPAImageTransform-Protocol.h>

@class NSArray;

@interface IPAImageTransformSequence : NSObject <IPAImageTransform>
{
    NSArray *_transforms;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000024248
- (id)description;	// IMP=0x00000000000241bf
- (id)inverseTransform;	// IMP=0x0000000000023faf
- (struct CGPoint)mapPoint:(struct CGPoint)arg1;	// IMP=0x0000000000023e24
- (id)intrinsicGeometry;	// IMP=0x0000000000023dbc
- (id)inputGeometry;	// IMP=0x0000000000023d54
- (_Bool)canAlignToPixelsExactly;	// IMP=0x0000000000023bfd
- (id)initWithTransforms:(id)arg1;	// IMP=0x0000000000023b1f

@end

