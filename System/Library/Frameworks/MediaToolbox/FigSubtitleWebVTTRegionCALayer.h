//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface FigSubtitleWebVTTRegionCALayer
{
    struct OpaqueFigSubtitleWebVTTRegionCALayerInternal *layerInternal;	// 16 = 0x10
}

- (void)handleNeedsLayoutNotification;	// IMP=0x0000000000024ad4
- (void)layoutSublayers;	// IMP=0x00000000000245af
- (void)setReLayout;	// IMP=0x0000000000024528
- (void)setNeedsDisplay;	// IMP=0x000000000002440d
- (void)setViewport:(struct CGRect)arg1;	// IMP=0x000000000002437b
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;	// IMP=0x0000000000024308
- (void)setContent:(struct __CFDictionary *)arg1;	// IMP=0x0000000000023f97
- (struct __CFString *)getContentID;	// IMP=0x0000000000023f1d
- (void)dealloc;	// IMP=0x0000000000023e3a
- (id)init;	// IMP=0x0000000000023c9c

@end

