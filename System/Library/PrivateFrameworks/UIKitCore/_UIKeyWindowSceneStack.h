//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDebugDescriptionProviding-Protocol.h>

@class NSMapTable, NSMutableOrderedSet, NSString, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UIKeyWindowSceneStack : NSObject <BSDebugDescriptionProviding>
{
    NSMapTable *_recordsByWindowScene;	// 8 = 0x8
    NSMutableOrderedSet *_orderedRecords;	// 16 = 0x10
    UIWindowScene *_keyWindowSceneInStack;	// 24 = 0x18
    struct {
        unsigned int affectsApplicationKeyWindow:1;
        unsigned int hasViewServiceEntitlement:1;
    } _sceneStackFlags;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000028736
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000026f80
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000026f30
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000026ee0
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000026e07
- (id)succinctDescription;	// IMP=0x0000000000026db7
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000000026c8b

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

