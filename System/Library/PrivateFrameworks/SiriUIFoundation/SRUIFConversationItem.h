//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriUIFoundation/NSCopying-Protocol.h>
#import <SiriUIFoundation/SRUIFConversationStorable-Protocol.h>

@class NSString, SRUIFMutableConversationItem;

@interface SRUIFConversationItem : NSObject <SRUIFConversationStorable, NSCopying>
{
    SRUIFMutableConversationItem *_delegateItem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000654e
- (id)associatedDataStore;	// IMP=0x0000000000006538
- (_Bool)isImmersiveExperience;	// IMP=0x0000000000006522
- (_Bool)isSupplemental;	// IMP=0x000000000000650c
- (_Bool)isTransient;	// IMP=0x00000000000064f6
- (_Bool)isVirgin;	// IMP=0x00000000000064e0
- (long long)presentationState;	// IMP=0x00000000000064ca
- (id)aceCommandIdentifier;	// IMP=0x00000000000064b4
- (id)dialogPhase;	// IMP=0x000000000000649e
- (id)aceObject;	// IMP=0x0000000000006488
- (long long)type;	// IMP=0x0000000000006472
- (id)revisionIdentifier;	// IMP=0x000000000000645c
- (id)identifier;	// IMP=0x0000000000006446
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006425
- (id)initWithType:(long long)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(long long)arg4 aceCommandIdentifier:(id)arg5 virgin:(_Bool)arg6 transient:(_Bool)arg7 supplemental:(_Bool)arg8 immersiveExperience:(_Bool)arg9 associatedDataStore:(id)arg10;	// IMP=0x0000000000006317
- (id)initWithIdentifier:(id)arg1 revisionIdentifier:(id)arg2 type:(long long)arg3 aceObject:(id)arg4 dialogPhase:(id)arg5 presentationState:(long long)arg6 aceCommandIdentifier:(id)arg7 virgin:(_Bool)arg8 transient:(_Bool)arg9 supplemental:(_Bool)arg10 immersiveExperience:(_Bool)arg11 associatedDataStore:(id)arg12;	// IMP=0x00000000000061d9
- (id)initWithDelegateItem:(id)arg1;	// IMP=0x000000000000616e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

