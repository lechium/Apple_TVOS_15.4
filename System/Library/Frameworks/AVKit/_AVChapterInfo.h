//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVNavigationMarkersGroup;

__attribute__((visibility("hidden")))
@interface _AVChapterInfo : NSObject
{
    AVAsset *_asset;	// 8 = 0x8
    AVNavigationMarkersGroup *_navigationMarkersGroup;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000038d32
@property(readonly, nonatomic) AVNavigationMarkersGroup *navigationMarkersGroup; // @synthesize navigationMarkersGroup=_navigationMarkersGroup;
@property __weak AVAsset *asset; // @synthesize asset=_asset;
- (id)initWithAsset:(id)arg1;	// IMP=0x0000000000038c29

@end

