//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _PXMomentShareMockMomentShare;
@protocol PXDisplayMomentShare;

@interface PXMomentShareStatusMock
{
    id <PXDisplayMomentShare> _originalMomentShare;	// 8 = 0x8
    _PXMomentShareMockMomentShare *_mockMomentShare;	// 16 = 0x10
}

+ (_Bool)shouldUseMockStatus;	// IMP=0x0000000000541616
- (void).cxx_destruct;	// IMP=0x00000000005407ea
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000054075f
- (id)_actionManager;	// IMP=0x0000000000540559
- (id)owner;	// IMP=0x0000000000540500
- (void)_updateStatus;	// IMP=0x000000000053fe2d
- (void)dealloc;	// IMP=0x000000000053fdbe
- (id)initWithMomentShare:(id)arg1;	// IMP=0x000000000053fcfb

@end

