//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, PBSAppInfoConfiguration, PBSAppInfoController;
@protocol HBAppInfoControllerDelegate;

@interface HBAppInfoController : NSObject
{
    id <HBAppInfoControllerDelegate> _delegate;	// 8 = 0x8
    PBSAppInfoConfiguration *_configuration;	// 16 = 0x10
    PBSAppInfoController *_appInfoController;	// 24 = 0x18
    NSMutableDictionary *_mutableAppInfos;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001abb2
@property(readonly, nonatomic, getter=_mutableAppInfos) NSMutableDictionary *mutableAppInfos; // @synthesize mutableAppInfos=_mutableAppInfos;
@property(readonly, nonatomic, getter=_appInfoController) PBSAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(retain, nonatomic, setter=_setConfiguration:) PBSAppInfoConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <HBAppInfoControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x001000000001a8ba
- (void)_notifyDelegateDidUpdateAlternateAppIconsForAppInfos:(id)arg1;	// IMP=0x001000000001a83f
- (void)_notifyDelegateDidRemoveAppInfos:(id)arg1;	// IMP=0x001000000001a7c4
- (void)_notifyDelegateDidAddAppInfos:(id)arg1;	// IMP=0x001000000001a749
- (void)_didUpdateConfiguration:(id)arg1;	// IMP=0x001000000001a5b7
- (void)_didUpdateAppInfos:(id)arg1;	// IMP=0x001000000001a290
- (void)_didRemoveAppInfos:(id)arg1;	// IMP=0x0010000000019eab
- (void)_didAddAppInfos:(id)arg1;	// IMP=0x0010000000019b1b
- (id)appInfoWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000019a98
- (void)enumerateAppInfosUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000199cd
@property(readonly, nonatomic) NSDictionary *appInfos;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x001000000001969e
- (id)_initWithAppInfoController:(id)arg1;	// IMP=0x00100000000193bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

