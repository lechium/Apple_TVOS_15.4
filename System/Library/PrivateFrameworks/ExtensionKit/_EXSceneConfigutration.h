//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExtensionKit/_EXSceneConfigurationProviding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EXSceneConfigutration : NSObject <_EXSceneConfigurationProviding>
{
    NSString *_sceneIdentifier;	// 8 = 0x8
    NSString *_storyboardName;	// 16 = 0x10
    NSString *_viewControllerClassName;	// 24 = 0x18
    NSString *_extensionPointViewControllerClassName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000491a
@property(retain) NSString *extensionPointViewControllerClassName; // @synthesize extensionPointViewControllerClassName=_extensionPointViewControllerClassName;
@property(retain) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_viewControllerClassName;
@property(retain) NSString *storyboardName; // @synthesize storyboardName=_storyboardName;
@property(retain) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(readonly) Class extensionPointViewControllerClass; // @dynamic extensionPointViewControllerClass;
@property(readonly) Class viewControllerClass; // @dynamic viewControllerClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

