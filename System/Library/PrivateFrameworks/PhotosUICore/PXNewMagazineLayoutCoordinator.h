//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PXNewMagazineRectArray;

@interface PXNewMagazineLayoutCoordinator : NSObject
{
    PXNewMagazineRectArray *_fallbackLayout;	// 8 = 0x8
    double _currentBestScore;	// 16 = 0x10
    _Bool _stopIfAnyGoodLayout;	// 24 = 0x18
    _Bool _stop;	// 25 = 0x19
    NSArray *_paddingInputs;	// 32 = 0x20
    double _tileAspectRatio;	// 40 = 0x28
    NSMutableArray *_qualifiedLayouts;	// 48 = 0x30
    PXNewMagazineRectArray *_currentLayout;	// 56 = 0x38
    unsigned long long _currentIndex;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000121623
@property(nonatomic) _Bool stop; // @synthesize stop=_stop;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) PXNewMagazineRectArray *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(retain, nonatomic) NSMutableArray *qualifiedLayouts; // @synthesize qualifiedLayouts=_qualifiedLayouts;
@property(readonly, nonatomic) _Bool stopIfAnyGoodLayout; // @synthesize stopIfAnyGoodLayout=_stopIfAnyGoodLayout;
@property(readonly, nonatomic) double tileAspectRatio; // @synthesize tileAspectRatio=_tileAspectRatio;
@property(readonly, nonatomic) NSArray *paddingInputs; // @synthesize paddingInputs=_paddingInputs;
@property(readonly, nonatomic) PXNewMagazineRectArray *currentBestLayout;
@property(readonly, nonatomic) unsigned long long currentLayoutsCount;
- (double)scoreOfLayout:(id)arg1;	// IMP=0x00000000001211fd
- (void)validateCurrentLayoutAsFallback;	// IMP=0x000000000012119c
- (_Bool)validateCurrentLayout;	// IMP=0x0000000000120fc2
- (id)initWithPaddingInputs:(id)arg1 tileGrid:(id)arg2 tileAspectRatio:(double)arg3 stopIfAnyGoodLayout:(_Bool)arg4;	// IMP=0x0000000000120e9f

@end

