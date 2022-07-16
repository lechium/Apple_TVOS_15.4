//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotosGridFloatingHeaderInfo-Protocol.h>

@class NSAttributedString, NSString, PXAssetCollectionReference;

@interface PXPhotosGridFloatingHeaderSnapshot : NSObject <PXPhotosGridFloatingHeaderInfo>
{
    NSAttributedString *_title;	// 8 = 0x8
    NSAttributedString *_subtitle;	// 16 = 0x10
    PXAssetCollectionReference *_assetCollectionReference;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011080b
@property(readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference; // @synthesize assetCollectionReference=_assetCollectionReference;
@property(readonly, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSAttributedString *floatingSummarySubtitle;
@property(readonly, nonatomic) NSAttributedString *floatingSummaryTitle;
@property(readonly, nonatomic) _Bool floatingEnableOverview;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 assetCollectionReference:(id)arg3;	// IMP=0x0000000000110647

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

