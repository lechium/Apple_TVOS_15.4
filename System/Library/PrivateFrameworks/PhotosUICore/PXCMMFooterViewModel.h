//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXMomentShareStatusPresentation;

@interface PXCMMFooterViewModel <PXChangeObserver>
{
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;	// 8 = 0x8
    long long _mode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000059c8a6
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000059c7e9
- (void)_updateAllProperties;	// IMP=0x000000000059c614
- (id)initWithMomentShareStatusPresentation:(id)arg1 mode:(long long)arg2;	// IMP=0x000000000059c4e8
- (id)init;	// IMP=0x000000000059c46e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

