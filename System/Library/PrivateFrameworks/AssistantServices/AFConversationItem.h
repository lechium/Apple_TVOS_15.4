//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFConversationStorable-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>

@class AFMutableConversationItem, NSString;

@interface AFConversationItem : NSObject <AFConversationStorable, NSCopying>
{
    AFMutableConversationItem *_delegateItem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000013f0bc
- (id)associatedDataStore;	// IMP=0x000000000013f0a6
- (_Bool)isImmersiveExperience;	// IMP=0x000000000013f090
- (_Bool)isSupplemental;	// IMP=0x000000000013f07a
- (_Bool)isTransient;	// IMP=0x000000000013f064
- (_Bool)isVirgin;	// IMP=0x000000000013f04e
- (long long)presentationState;	// IMP=0x000000000013f038
- (id)aceCommandIdentifier;	// IMP=0x000000000013f022
- (id)dialogPhase;	// IMP=0x000000000013f00c
- (id)aceObject;	// IMP=0x000000000013eff6
- (long long)type;	// IMP=0x000000000013efe0
- (id)revisionIdentifier;	// IMP=0x000000000013efca
- (id)identifier;	// IMP=0x000000000013efb4
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013ef93
- (id)initWithType:(long long)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(long long)arg4 aceCommandIdentifier:(id)arg5 virgin:(_Bool)arg6 transient:(_Bool)arg7 supplemental:(_Bool)arg8 immersiveExperience:(_Bool)arg9 associatedDataStore:(id)arg10;	// IMP=0x000000000013ee85
- (id)initWithIdentifier:(id)arg1 revisionIdentifier:(id)arg2 type:(long long)arg3 aceObject:(id)arg4 dialogPhase:(id)arg5 presentationState:(long long)arg6 aceCommandIdentifier:(id)arg7 virgin:(_Bool)arg8 transient:(_Bool)arg9 supplemental:(_Bool)arg10 immersiveExperience:(_Bool)arg11 associatedDataStore:(id)arg12;	// IMP=0x000000000013ed47
- (id)initWithDelegateItem:(id)arg1;	// IMP=0x000000000013ecdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

