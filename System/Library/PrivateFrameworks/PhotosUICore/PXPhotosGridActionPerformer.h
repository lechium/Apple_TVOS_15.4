//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXContentFilterState, PXPhotosViewModel;

@interface PXPhotosGridActionPerformer
{
    PXPhotosViewModel *_viewModel;	// 8 = 0x8
}

+ (_Bool)canPerformActionType:(id)arg1 withViewModel:(id)arg2;	// IMP=0x000000000056d192
- (void).cxx_destruct;	// IMP=0x000000000056d17f
@property(readonly, nonatomic) PXPhotosViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;	// IMP=0x000000000056d004
@property(readonly, nonatomic) PXContentFilterState *currentFilterState;
@property(readonly, nonatomic) long long libraryType;
- (id)initWithActionType:(id)arg1;	// IMP=0x000000000056ce1e
- (id)initWithViewModel:(id)arg1 actionType:(id)arg2;	// IMP=0x000000000056cda6

@end

