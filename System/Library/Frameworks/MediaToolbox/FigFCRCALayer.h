//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface FigFCRCALayer
{
    struct OpaqueFigCaptionRendererCALayerInternal *layerInternal;	// 16 = 0x10
}

- (void)layoutSublayers;	// IMP=0x0000000000009d41
- (void)compose;	// IMP=0x0000000000009d25
- (void)setCallbacks:(id)arg1 userEvent:(CDUnknownFunctionPointerType)arg2 viewportChanged:(CDUnknownFunctionPointerType)arg3 drawInContext:(CDUnknownFunctionPointerType)arg4;	// IMP=0x0000000000009cf8
- (void)clear:(struct CGRect)arg1;	// IMP=0x0000000000009cf2
- (void)setVideoBounds:(struct CGRect)arg1;	// IMP=0x0000000000009cd1
- (void)dealloc;	// IMP=0x0000000000009c6a
- (id)init;	// IMP=0x0000000000009b9b
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000009b82

@end

