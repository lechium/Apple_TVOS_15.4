//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HBTopShelfInstallApplicationAction, HBTopShelfInstallingApplicationAction, NSString, PBSAppInfoController;

@interface HBTopShelfAppStoreParadeItem
{
    _Bool _observingApplicationInstalls;	// 8 = 0x8
    HBTopShelfInstallApplicationAction *_installApplicationAction;	// 16 = 0x10
    HBTopShelfInstallingApplicationAction *_installingApplicationAction;	// 24 = 0x18
    PBSAppInfoController *_appInfoController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002e8ef
@property(nonatomic, getter=isObservingApplicationInstalls) _Bool observingApplicationInstalls; // @synthesize observingApplicationInstalls=_observingApplicationInstalls;
@property(retain, nonatomic) PBSAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(retain, nonatomic) HBTopShelfInstallingApplicationAction *installingApplicationAction; // @synthesize installingApplicationAction=_installingApplicationAction;
@property(retain, nonatomic) HBTopShelfInstallApplicationAction *installApplicationAction; // @synthesize installApplicationAction=_installApplicationAction;
- (id)_lazyInstallingApplicationAction;	// IMP=0x001000000002e7cb
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000002e6c4
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x001000000002e15a
- (void)_updatePrimaryAction;	// IMP=0x001000000002da91
- (void)_didPerformAction:(id)arg1 withSuccess:(_Bool)arg2;	// IMP=0x001000000002d9e4
- (void)_willPerformAction:(id)arg1;	// IMP=0x001000000002d65f
- (void)stopObservingApplicationInstalls;	// IMP=0x001000000002d53b
- (void)startObservingApplicationInstalls;	// IMP=0x001000000002d414
- (void)dealloc;	// IMP=0x000000000002d3a6
- (id)initWithTopShelfAppStoreCarouselItem:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000002d224

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

