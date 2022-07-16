//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXGEntityManager, PXGKernel, PXGShader;
@protocol OS_dispatch_queue;

@interface PXGEffect : NSObject
{
    unsigned int _effectId;	// 8 = 0x8
    _Bool _didNotifyOfUse;	// 12 = 0xc
    PXGEntityManager *_entityManager;	// 16 = 0x10
    unsigned long long _numberOfSiblingSprites;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    double _scale;	// 40 = 0x28
    double _drawingScale;	// 48 = 0x30
}

+ (id)shaderSourceForFilename:(id)arg1;	// IMP=0x00000000003356cb
- (void).cxx_destruct;	// IMP=0x0000000000335654
@property(nonatomic) double drawingScale; // @synthesize drawingScale=_drawingScale;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long numberOfSiblingSprites; // @synthesize numberOfSiblingSprites=_numberOfSiblingSprites;
@property(readonly, nonatomic) __weak PXGEntityManager *entityManager; // @synthesize entityManager=_entityManager;
- (void)configureSiblingSprites:(CDStruct_d5f63e8f)arg1 siblingsSpriteIndexRange:(struct _PXGSpriteIndexRange)arg2 siblingsTexture:(id)arg3 forMainRenderSpriteRef:(CDStruct_d23a385d)arg4 mainPresentationSpriteRef:(CDStruct_d23a385d)arg5 mainSpriteIndex:(unsigned int)arg6 mainSpriteTexture:(id)arg7 screenScale:(double)arg8;	// IMP=0x0000000000335537
- (id)createSiblingsTextureForMainSpriteTexture:(id)arg1;	// IMP=0x000000000033552f
@property(readonly, nonatomic) PXGKernel *kernel;
@property(readonly, nonatomic) PXGShader *shader;
- (id)description;	// IMP=0x00000000003353c2
@property(readonly, nonatomic) unsigned int effectId;
- (void)dealloc;	// IMP=0x0000000000335298
- (id)initWithEntityManager:(id)arg1;	// IMP=0x0000000000335135
- (id)init;	// IMP=0x00000000003350bb

@end

