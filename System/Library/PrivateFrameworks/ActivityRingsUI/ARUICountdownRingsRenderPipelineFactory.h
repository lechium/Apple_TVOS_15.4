//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ARUIRingsAlphaReductionState, ARUIRingsCountdownState, ARUIRingsEmptyState;

__attribute__((visibility("hidden")))
@interface ARUICountdownRingsRenderPipelineFactory
{
    ARUIRingsEmptyState *_emptyState;	// 8 = 0x8
    ARUIRingsCountdownState *_countdownState;	// 16 = 0x10
    ARUIRingsAlphaReductionState *_alphaReductionState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000135be
- (id)pipelineForConfiguration:(id)arg1;	// IMP=0x00000000000134e8
- (id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2;	// IMP=0x00000000000133e7
- (id)initWithDevice:(id)arg1 library:(id)arg2;	// IMP=0x00000000000132c8

@end

