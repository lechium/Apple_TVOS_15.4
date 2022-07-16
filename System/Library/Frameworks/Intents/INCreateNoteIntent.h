//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCreateNoteIntentExport-Protocol.h>

@class INNoteContent, INSpeakableString, NSString;

@interface INCreateNoteIntent <INCreateNoteIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000003360bb
- (id)parametersByName;	// IMP=0x00000000003360a9
- (void)setVerb:(id)arg1;	// IMP=0x00000000003360a3
- (id)verb;	// IMP=0x0000000000336096
- (void)setDomain:(id)arg1;	// IMP=0x0000000000336090
- (id)domain;	// IMP=0x0000000000336083
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000033601c
- (id)_dictionaryRepresentation;	// IMP=0x0000000000335e63
- (void)setGroupName:(id)arg1;	// IMP=0x0000000000335dd8
@property(readonly, copy, nonatomic) INSpeakableString *groupName;
- (void)setContent:(id)arg1;	// IMP=0x0000000000335cda
@property(readonly, copy, nonatomic) INNoteContent *content;
- (void)setTitle:(id)arg1;	// IMP=0x0000000000335bdc
@property(readonly, copy, nonatomic) INSpeakableString *title;
- (id)initWithTitle:(id)arg1 content:(id)arg2 groupName:(id)arg3;	// IMP=0x0000000000335aa2
- (id)_categoryVerb;	// IMP=0x0000000000335a95
- (long long)_intentCategory;	// IMP=0x0000000000335a8a
- (void)_setMetadata:(id)arg1;	// IMP=0x0000000000335a18
- (id)_metadata;	// IMP=0x00000000003359c8
- (id)_typedBackingStore;	// IMP=0x0000000000335971

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

