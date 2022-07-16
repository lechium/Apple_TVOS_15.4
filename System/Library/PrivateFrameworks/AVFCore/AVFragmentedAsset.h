//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCore/AVFragmentMinding-Protocol.h>

@class AVFragmentedAssetInternal, NSArray;

@interface AVFragmentedAsset <AVFragmentMinding>
{
    AVFragmentedAssetInternal *_fragmentedAsset;	// 24 = 0x18
}

+ (id)fragmentedAssetWithURL:(id)arg1 options:(id)arg2;	// IMP=0x0000000000113ce6
+ (_Bool)expectsPropertyRevisedNotifications;	// IMP=0x0000000000113cde
- (void)_setIsAssociatedWithFragmentMinder:(_Bool)arg1;	// IMP=0x0000000000113eb3
@property(readonly, nonatomic, getter=isAssociatedWithFragmentMinder) _Bool associatedWithFragmentMinder;
- (id)tracksWithMediaCharacteristic:(id)arg1;	// IMP=0x0000000000113e59
- (id)tracksWithMediaType:(id)arg1;	// IMP=0x0000000000113e2a
- (id)trackWithTrackID:(int)arg1;	// IMP=0x0000000000113dfb
@property(readonly, nonatomic) NSArray *tracks;
- (Class)_classForAssetTracks;	// IMP=0x0000000000113dbb
- (_Bool)_mindsFragments;	// IMP=0x0000000000113db3
- (id)initWithURL:(id)arg1 options:(id)arg2;	// IMP=0x0000000000113d1a

@end
