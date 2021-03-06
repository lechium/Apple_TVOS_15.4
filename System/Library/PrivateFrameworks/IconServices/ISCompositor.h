//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIContext, NSMutableArray;
@protocol ISCompositorRecipe;

@interface ISCompositor : NSObject
{
    CIContext *_sharedCIContext;	// 8 = 0x8
    unsigned long long _renderingMode;	// 16 = 0x10
    NSMutableArray *_elements;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000013ea7
@property(retain) NSMutableArray *elements; // @synthesize elements=_elements;
@property unsigned long long renderingMode; // @synthesize renderingMode=_renderingMode;
- (void)reset;	// IMP=0x0000000000013e37
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0000000000013d6f
- (void)addElement:(id)arg1;	// IMP=0x0000000000013d59
- (void)addElementWithRecipe:(id)arg1 resources:(id)arg2;	// IMP=0x0000000000013cc7
@property(readonly) CIContext *sharedCIContext; // @synthesize sharedCIContext=_sharedCIContext;
- (void)dealloc;	// IMP=0x0000000000013c35
- (id)init;	// IMP=0x0000000000013bc7
- (void)clearResources;	// IMP=0x00000000000143a8
- (void)addResourcesFromDictionary:(id)arg1;	// IMP=0x00000000000142cd
- (void)setResource:(id)arg1 named:(id)arg2;	// IMP=0x000000000001414e
@property(retain) id <ISCompositorRecipe> recipe;
- (id)initWithRecipe:(id)arg1;	// IMP=0x0000000000013ecf
- (void)drawLayer:(id)arg1 resourceProvider:(id)arg2 inContext:(id)arg3;	// IMP=0x00000000000169e7
- (id)maskImageForLayer:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resourceProvider:(id)arg4;	// IMP=0x00000000000168fe
- (id)scaledImageFromContent:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 needsScaled:(_Bool *)arg4;	// IMP=0x0000000000016348
- (void)drawElement:(id)arg1 inContext:(id)arg2;	// IMP=0x0000000000015ed8
- (_Bool)canUseCoreImageForEffects;	// IMP=0x0000000000015e7e
@property(readonly) _Bool canUseCoreImage; // @dynamic canUseCoreImage;
- (id)filterForLayer:(id)arg1 scale:(double)arg2 resourceProvider:(id)arg3;	// IMP=0x0000000000014bde
- (void)drawInContext:(id)arg1;	// IMP=0x0000000000014464

@end

