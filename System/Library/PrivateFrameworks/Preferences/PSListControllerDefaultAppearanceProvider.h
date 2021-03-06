//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Preferences/PSListControllerAppearanceProvider-Protocol.h>

@class NSString;

@interface PSListControllerDefaultAppearanceProvider : NSObject <PSListControllerAppearanceProvider>
{
}

- (void)listController:(id)arg1 updateSectionContentInsetAnimated:(_Bool)arg2 isRegularWidth:(_Bool)arg3 contentInsetInitialized:(_Bool)arg4 contentInsetInitializedApplicator:(CDUnknownBlockType)arg5;	// IMP=0x0000000000094386
- (double)estimatedHeightOfRowForCellWithIndexPath:(id)arg1 inController:(id)arg2;	// IMP=0x00000000000941ae
- (id)cellForSpecifier:(id)arg1 inController:(id)arg2;	// IMP=0x00000000000940bd
- (void)customizeTableView:(id)arg1 inContainerView:(id)arg2 hostedInSetupController:(_Bool)arg3 forListController:(id)arg4;	// IMP=0x0000000000093b14
- (long long)tableViewStyleForListController:(id)arg1;	// IMP=0x0000000000093b09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

