//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSXPCCoding-Protocol.h>

@class FBSSceneSettings, NSString;
@protocol FBSSceneSnapshotRequestDelegate;

@interface FBSSceneSnapshotRequest : NSObject <BSXPCCoding>
{
    NSString *_sceneID;	// 8 = 0x8
    FBSSceneSettings *_settings;	// 16 = 0x10
    _Bool _handled;	// 24 = 0x18
    id <FBSSceneSnapshotRequestDelegate> _delegate;	// 32 = 0x20
    _Bool _allowsProtectedContent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000267f
@property(readonly, nonatomic) _Bool allowsProtectedContent; // @synthesize allowsProtectedContent=_allowsProtectedContent;
@property(readonly, copy, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(nonatomic) __weak id <FBSSceneSnapshotRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x00000000000025a2
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x00000000000024da
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000023d7
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000002387
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000002302
- (id)succinctDescription;	// IMP=0x00000000000022b2
@property(readonly, copy) NSString *description;
- (_Bool)performSnapshotWithContext:(id)arg1;	// IMP=0x0000000000002162
- (id)initWithSettings:(id)arg1;	// IMP=0x000000000000214e
- (id)initWithSettings:(id)arg1 allowsProtectedContent:(_Bool)arg2;	// IMP=0x00000000000020d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

