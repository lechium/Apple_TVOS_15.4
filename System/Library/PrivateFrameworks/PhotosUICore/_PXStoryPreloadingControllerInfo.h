//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXObservable;
@protocol PXStoryResourcesPreloadingCoordinatable;

@interface _PXStoryPreloadingControllerInfo : NSObject
{
    PXObservable<PXStoryResourcesPreloadingCoordinatable> *_preloadingController;	// 8 = 0x8
    long long _priority;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000037d663
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PXObservable<PXStoryResourcesPreloadingCoordinatable> *preloadingController; // @synthesize preloadingController=_preloadingController;

@end

