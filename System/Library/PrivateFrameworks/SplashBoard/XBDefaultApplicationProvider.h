//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SplashBoard/XBApplicationProviding-Protocol.h>

@class NSString;

@interface XBDefaultApplicationProvider : NSObject <XBApplicationProviding>
{
}

- (id)_allApplicationsFilteredBySystem:(_Bool)arg1 bySplashBoard:(_Bool)arg2;	// IMP=0x00000000000088ca
- (id)recentlyUsedBundleIDs;	// IMP=0x00000000000088bd
- (id)allInstalledApplications;	// IMP=0x00000000000088a7
- (id)splashBoardSystemApplications;	// IMP=0x000000000000888b
- (id)allSplashBoardApplications;	// IMP=0x0000000000008872

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
