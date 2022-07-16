//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLAssetResolver-Protocol.h>

@class MDLAsset, NSString;

@interface MDLRelativeAssetResolver : NSObject <MDLAssetResolver>
{
    MDLAsset *_asset;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000303e00
@property(nonatomic) __weak MDLAsset *asset; // @synthesize asset=_asset;
- (id)resolveAssetNamed:(id)arg1;	// IMP=0x0000000000303ca2
- (_Bool)canResolveAssetNamed:(id)arg1;	// IMP=0x0000000000303c05
- (id)initWithAsset:(id)arg1;	// IMP=0x0000000000303b76

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

