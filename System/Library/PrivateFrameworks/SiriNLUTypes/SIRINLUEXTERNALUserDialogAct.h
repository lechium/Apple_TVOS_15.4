//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRINLUEXTERNALDelegatedUserDialogAct, SIRINLUEXTERNALUserAccepted, SIRINLUEXTERNALUserAcknowledged, SIRINLUEXTERNALUserCancelled, SIRINLUEXTERNALUserRejected, SIRINLUEXTERNALUserStatedTask, SIRINLUEXTERNALUserWantedToPause, SIRINLUEXTERNALUserWantedToProceed, SIRINLUEXTERNALUserWantedToRepeat, SIRINLUEXTERNALUtteranceAlignment;

@interface SIRINLUEXTERNALUserDialogAct : PBCodable <NSCopying>
{
    SIRINLUEXTERNALUserAccepted *_accepted;	// 8 = 0x8
    SIRINLUEXTERNALUserAcknowledged *_acknowledged;	// 16 = 0x10
    SIRINLUEXTERNALUtteranceAlignment *_alignment;	// 24 = 0x18
    SIRINLUEXTERNALUserCancelled *_cancelled;	// 32 = 0x20
    SIRINLUEXTERNALDelegatedUserDialogAct *_delegated;	// 40 = 0x28
    SIRINLUEXTERNALUserRejected *_rejected;	// 48 = 0x30
    SIRINLUEXTERNALUserStatedTask *_userStatedTask;	// 56 = 0x38
    SIRINLUEXTERNALUserWantedToPause *_wantedToPause;	// 64 = 0x40
    SIRINLUEXTERNALUserWantedToProceed *_wantedToProceed;	// 72 = 0x48
    SIRINLUEXTERNALUserWantedToRepeat *_wantedToRepeat;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000060ae9
@property(retain, nonatomic) SIRINLUEXTERNALUtteranceAlignment *alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) SIRINLUEXTERNALUserStatedTask *userStatedTask; // @synthesize userStatedTask=_userStatedTask;
@property(retain, nonatomic) SIRINLUEXTERNALDelegatedUserDialogAct *delegated; // @synthesize delegated=_delegated;
@property(retain, nonatomic) SIRINLUEXTERNALUserWantedToPause *wantedToPause; // @synthesize wantedToPause=_wantedToPause;
@property(retain, nonatomic) SIRINLUEXTERNALUserWantedToProceed *wantedToProceed; // @synthesize wantedToProceed=_wantedToProceed;
@property(retain, nonatomic) SIRINLUEXTERNALUserAcknowledged *acknowledged; // @synthesize acknowledged=_acknowledged;
@property(retain, nonatomic) SIRINLUEXTERNALUserWantedToRepeat *wantedToRepeat; // @synthesize wantedToRepeat=_wantedToRepeat;
@property(retain, nonatomic) SIRINLUEXTERNALUserCancelled *cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) SIRINLUEXTERNALUserRejected *rejected; // @synthesize rejected=_rejected;
@property(retain, nonatomic) SIRINLUEXTERNALUserAccepted *accepted; // @synthesize accepted=_accepted;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006072e
- (unsigned long long)hash;	// IMP=0x0000000000060605
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000603a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000601c1
- (void)copyTo:(id)arg1;	// IMP=0x000000000006005e
- (void)writeTo:(id)arg1;	// IMP=0x000000000005ff19
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005ff0c
- (id)dictionaryRepresentation;	// IMP=0x000000000005f761
- (id)description;	// IMP=0x000000000005f6b2
@property(readonly, nonatomic) _Bool hasAlignment;
@property(readonly, nonatomic) _Bool hasUserStatedTask;
@property(readonly, nonatomic) _Bool hasDelegated;
@property(readonly, nonatomic) _Bool hasWantedToPause;
@property(readonly, nonatomic) _Bool hasWantedToProceed;
@property(readonly, nonatomic) _Bool hasAcknowledged;
@property(readonly, nonatomic) _Bool hasWantedToRepeat;
@property(readonly, nonatomic) _Bool hasCancelled;
@property(readonly, nonatomic) _Bool hasRejected;
@property(readonly, nonatomic) _Bool hasAccepted;

@end

