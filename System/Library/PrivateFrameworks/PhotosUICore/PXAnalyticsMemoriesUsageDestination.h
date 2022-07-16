//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/CPAnalyticsDestinationProtocol-Protocol.h>

@class NSString;
@protocol PXDisplayAssetCollection;

@interface PXAnalyticsMemoriesUsageDestination : NSObject <CPAnalyticsDestinationProtocol>
{
    long long _defaultNavigationKind;	// 8 = 0x8
    long long _currentURLNavigationKind;	// 16 = 0x10
    long long _sessionInitialNavigationKind;	// 24 = 0x18
    id <PXDisplayAssetCollection> _lastAppearedAssetCollection;	// 32 = 0x20
    long long _lastAppearedAssetCollectionNavigationKind;	// 40 = 0x28
    _Bool _isPXStoryEnabled;	// 48 = 0x30
}

+ (id)payloadSessionStartTypeKey;	// IMP=0x000000000012c996
+ (id)payloadLaunchTypeKey;	// IMP=0x000000000012c989
+ (id)forYouTabOpenedAppEventNameWithNavigationKind:(long long)arg1;	// IMP=0x000000000012c929
+ (id)forYouTabOpenedEventName;	// IMP=0x000000000012c91c
+ (id)memoryPlayedAppEventNameWithNavigationKind:(long long)arg1;	// IMP=0x000000000012c8bc
+ (id)memoryPlayedEventName;	// IMP=0x000000000012c8af
+ (id)memoryOpenedAppEventNameWithNavigationKind:(long long)arg1;	// IMP=0x000000000012c84f
+ (id)memoryOpenedEventName;	// IMP=0x000000000012c842
- (void).cxx_destruct;	// IMP=0x000000000012c378
- (void)processEvent:(id)arg1;	// IMP=0x000000000012ba92
- (void)_userDidPlayMovieOfAssetCollection:(id)arg1;	// IMP=0x000000000012b94c
- (void)_userDidViewContentsOfAssetCollection:(id)arg1;	// IMP=0x000000000012b761
- (id)init;	// IMP=0x000000000012b6d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

