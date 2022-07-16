//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLXSchemaCDMDelegatedUserDialogAct, NLXSchemaCDMUserAccepted, NLXSchemaCDMUserAcknowledged, NLXSchemaCDMUserCancelled, NLXSchemaCDMUserRejected, NLXSchemaCDMUserStatedTask, NLXSchemaCDMUserWantedToPause, NLXSchemaCDMUserWantedToProceed, NLXSchemaCDMUserWantedToRepeat, NSData, USOSchemaUSOGraph, USOSchemaUSOUtteranceAlignment;

@interface NLXSchemaCDMUserDialogAct
{
    USOSchemaUSOUtteranceAlignment *_alignment;	// 8 = 0x8
    USOSchemaUSOGraph *_reference;	// 16 = 0x10
    NLXSchemaCDMUserAccepted *_accepted;	// 24 = 0x18
    NLXSchemaCDMUserRejected *_rejected;	// 32 = 0x20
    NLXSchemaCDMUserCancelled *_cancelled;	// 40 = 0x28
    NLXSchemaCDMUserWantedToRepeat *_wantedToRepeat;	// 48 = 0x30
    NLXSchemaCDMUserAcknowledged *_acknowledged;	// 56 = 0x38
    NLXSchemaCDMUserWantedToProceed *_wantedToProceed;	// 64 = 0x40
    NLXSchemaCDMUserWantedToPause *_wantedToPause;	// 72 = 0x48
    NLXSchemaCDMDelegatedUserDialogAct *_delegated;	// 80 = 0x50
    NLXSchemaCDMUserStatedTask *_userStatedTask;	// 88 = 0x58
    _Bool _hasAlignment;	// 96 = 0x60
    _Bool _hasReference;	// 97 = 0x61
    _Bool _hasAccepted;	// 98 = 0x62
    _Bool _hasRejected;	// 99 = 0x63
    _Bool _hasCancelled;	// 100 = 0x64
    _Bool _hasWantedToRepeat;	// 101 = 0x65
    _Bool _hasAcknowledged;	// 102 = 0x66
    _Bool _hasWantedToProceed;	// 103 = 0x67
    _Bool _hasWantedToPause;	// 104 = 0x68
    _Bool _hasDelegated;	// 105 = 0x69
    _Bool _hasUserStatedTask;	// 106 = 0x6a
    unsigned long long _whichUserdialogacttype;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000009a784
@property(nonatomic) _Bool hasUserStatedTask; // @synthesize hasUserStatedTask=_hasUserStatedTask;
@property(nonatomic) _Bool hasDelegated; // @synthesize hasDelegated=_hasDelegated;
@property(nonatomic) _Bool hasWantedToPause; // @synthesize hasWantedToPause=_hasWantedToPause;
@property(nonatomic) _Bool hasWantedToProceed; // @synthesize hasWantedToProceed=_hasWantedToProceed;
@property(nonatomic) _Bool hasAcknowledged; // @synthesize hasAcknowledged=_hasAcknowledged;
@property(nonatomic) _Bool hasWantedToRepeat; // @synthesize hasWantedToRepeat=_hasWantedToRepeat;
@property(nonatomic) _Bool hasCancelled; // @synthesize hasCancelled=_hasCancelled;
@property(nonatomic) _Bool hasRejected; // @synthesize hasRejected=_hasRejected;
@property(nonatomic) _Bool hasAccepted; // @synthesize hasAccepted=_hasAccepted;
@property(nonatomic) _Bool hasReference; // @synthesize hasReference=_hasReference;
@property(nonatomic) _Bool hasAlignment; // @synthesize hasAlignment=_hasAlignment;
@property(retain, nonatomic) USOSchemaUSOGraph *reference; // @synthesize reference=_reference;
@property(retain, nonatomic) USOSchemaUSOUtteranceAlignment *alignment; // @synthesize alignment=_alignment;
@property(readonly, nonatomic) unsigned long long whichUserdialogacttype; // @synthesize whichUserdialogacttype=_whichUserdialogacttype;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000099fac
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000099eee
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000099689
- (unsigned long long)hash;	// IMP=0x0000000000099544
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000098995
- (void)writeTo:(id)arg1;	// IMP=0x0000000000098576
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000009798e
- (void)deleteUserStatedTask;	// IMP=0x000000000009795b
@property(retain, nonatomic) NLXSchemaCDMUserStatedTask *userStatedTask; // @synthesize userStatedTask=_userStatedTask;
- (void)deleteDelegated;	// IMP=0x0000000000097811
@property(retain, nonatomic) NLXSchemaCDMDelegatedUserDialogAct *delegated; // @synthesize delegated=_delegated;
- (void)deleteWantedToPause;	// IMP=0x00000000000976c7
@property(retain, nonatomic) NLXSchemaCDMUserWantedToPause *wantedToPause; // @synthesize wantedToPause=_wantedToPause;
- (void)deleteWantedToProceed;	// IMP=0x000000000009757d
@property(retain, nonatomic) NLXSchemaCDMUserWantedToProceed *wantedToProceed; // @synthesize wantedToProceed=_wantedToProceed;
- (void)deleteAcknowledged;	// IMP=0x0000000000097428
@property(retain, nonatomic) NLXSchemaCDMUserAcknowledged *acknowledged; // @synthesize acknowledged=_acknowledged;
- (void)deleteWantedToRepeat;	// IMP=0x00000000000972de
@property(retain, nonatomic) NLXSchemaCDMUserWantedToRepeat *wantedToRepeat; // @synthesize wantedToRepeat=_wantedToRepeat;
- (void)deleteCancelled;	// IMP=0x0000000000097194
@property(retain, nonatomic) NLXSchemaCDMUserCancelled *cancelled; // @synthesize cancelled=_cancelled;
- (void)deleteRejected;	// IMP=0x000000000009704a
@property(retain, nonatomic) NLXSchemaCDMUserRejected *rejected; // @synthesize rejected=_rejected;
- (void)deleteAccepted;	// IMP=0x0000000000096ef5
@property(retain, nonatomic) NLXSchemaCDMUserAccepted *accepted; // @synthesize accepted=_accepted;
- (void)deleteReference;	// IMP=0x0000000000096dca
- (void)deleteAlignment;	// IMP=0x0000000000096da1
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000316d00
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000316cc8

@end

