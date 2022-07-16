//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _TVSUIOffscreenRendererFormat;

@interface _TVSUIOffscreenRenderer : NSObject
{
    _TVSUIOffscreenRendererFormat *_format;	// 8 = 0x8
    _Bool _cachesResources;	// 16 = 0x10
    _Bool _useSoftwareRenderer;	// 17 = 0x11
    struct CGSize _size;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000003958
@property(nonatomic) _Bool useSoftwareRenderer; // @synthesize useSoftwareRenderer=_useSoftwareRenderer;
@property(readonly, nonatomic) _Bool cachesResources; // @synthesize cachesResources=_cachesResources;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void)_purgeResources;	// IMP=0x0000000000003927
- (void)_createResourcesIfNeeded;	// IMP=0x0000000000003921
- (id)_imageWithLayerTree:(id)arg1;	// IMP=0x0000000000003790
- (void)preheatResources;	// IMP=0x0000000000003740
- (id)imageWithLayerTree:(id)arg1;	// IMP=0x000000000000372e
- (id)imageWithViewHierarchy:(CDUnknownBlockType)arg1;	// IMP=0x000000000000361a
@property(readonly, copy, nonatomic) _TVSUIOffscreenRendererFormat *format;
- (id)initWithSize:(struct CGSize)arg1 format:(id)arg2 cachesResources:(_Bool)arg3;	// IMP=0x000000000000354b
- (void)dealloc;	// IMP=0x000000000000350d
- (id)init;	// IMP=0x00000000000034ff

@end
