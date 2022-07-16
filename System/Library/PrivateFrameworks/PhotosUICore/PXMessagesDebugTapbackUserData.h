//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTapbackUserData-Protocol.h>

@class NSString;
@protocol PXDisplayAsset;

@interface PXMessagesDebugTapbackUserData : NSObject <PXTapbackUserData>
{
    _Bool _shouldAnimate;	// 8 = 0x8
    id <PXDisplayAsset> _asset;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006b4992
@property(nonatomic) _Bool shouldAnimate; // @synthesize shouldAnimate=_shouldAnimate;
@property(retain, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006b495a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

