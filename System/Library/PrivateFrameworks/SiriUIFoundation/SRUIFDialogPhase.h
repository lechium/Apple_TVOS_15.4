//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriUIFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface SRUIFDialogPhase : NSObject <NSSecureCoding>
{
    long long _type;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004021
+ (id)_dialogPhaseWithType:(long long)arg1;	// IMP=0x0000000000003fae
+ (id)userRequestDialogPhase;	// IMP=0x0000000000003f97
+ (id)cancelledDialogPhase;	// IMP=0x0000000000003f80
+ (id)confirmedDialogPhase;	// IMP=0x0000000000003f69
+ (id)errorDialogPhase;	// IMP=0x0000000000003f52
+ (id)completionDialogPhase;	// IMP=0x0000000000003f3b
+ (id)confirmationDialogPhase;	// IMP=0x0000000000003f24
+ (id)summaryDialogPhase;	// IMP=0x0000000000003f0d
+ (id)clarificationDialogPhase;	// IMP=0x0000000000003ef6
+ (id)statusDialogPhase;	// IMP=0x0000000000003edf
+ (id)reflectionDialogPhase;	// IMP=0x0000000000003ec8
+ (id)acknowledgementDialogPhase;	// IMP=0x0000000000003eb1
+ (id)dialogPhaseForAceDialogPhase:(id)arg1;	// IMP=0x0000000000003cec
@property(readonly, nonatomic, getter=_type) long long type; // @synthesize type=_type;
- (unsigned long long)hash;	// IMP=0x00000000000047fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004797
- (id)description;	// IMP=0x0000000000004444
- (_Bool)isPossiblyPartOfMultiTurnRequest;	// IMP=0x0000000000004419
@property(readonly, nonatomic, getter=isSummaryDialogPhase) _Bool summaryDialogPhase;
@property(readonly, nonatomic, getter=isCompletionDialogPhase) _Bool completionDialogPhase;
@property(readonly, nonatomic, getter=isErrorDialogPhase) _Bool errorDialogPhase;
@property(readonly, nonatomic, getter=isUserRequestDialogPhase) _Bool userRequestDialogPhase;
@property(readonly, nonatomic, getter=isCancelledDialogPhase) _Bool cancelledDialogPhase;
@property(readonly, nonatomic, getter=isConfirmedDialogPhase) _Bool confirmedDialogPhase;
@property(readonly, nonatomic, getter=isClarificationDialogPhase) _Bool clarificationDialogPhase;
@property(readonly, nonatomic, getter=isReflectionDialogPhase) _Bool reflectionDialogPhase;
@property(readonly, nonatomic, getter=isConfirmationDialogPhase) _Bool confirmationDialogPhase;
@property(readonly, nonatomic, getter=isExpository) _Bool expository;
@property(readonly, nonatomic, getter=isTemporary) _Bool temporary;
- (_Bool)replacesPreviousSnippetContents;	// IMP=0x00000000000042b8
@property(readonly, nonatomic) NSString *aceDialogPhaseValue;
- (_Bool)isEqualToDialogPhase:(id)arg1;	// IMP=0x00000000000040f2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004082
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004029
- (id)_initWithType:(long long)arg1;	// IMP=0x0000000000003fe4

@end

