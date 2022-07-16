//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, WFDialogButton;

@interface WFAskParameterDialogRequest <NSSecureCoding>
{
    _Bool _focusImmediatelyWhenPresented;	// 8 = 0x8
    NSString *_actionIdentifier;	// 16 = 0x10
    NSString *_parameterKey;	// 24 = 0x18
    NSDictionary *_serializedParameterStates;	// 32 = 0x20
    long long _style;	// 40 = 0x28
    WFDialogButton *_cancelButton;	// 48 = 0x30
    WFDialogButton *_doneButton;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000024abe3
- (void).cxx_destruct;	// IMP=0x000000000024ab7f
@property(readonly, nonatomic) _Bool focusImmediatelyWhenPresented; // @synthesize focusImmediatelyWhenPresented=_focusImmediatelyWhenPresented;
@property(readonly, copy, nonatomic) WFDialogButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, copy, nonatomic) WFDialogButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSDictionary *serializedParameterStates; // @synthesize serializedParameterStates=_serializedParameterStates;
@property(readonly, copy, nonatomic) NSString *parameterKey; // @synthesize parameterKey=_parameterKey;
@property(readonly, copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000024a94d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000024a6af
- (id)requestBySettingFocusImmediatelyWhenPresented:(_Bool)arg1;	// IMP=0x000000000024a57f
- (id)description;	// IMP=0x000000000024a39e
- (id)initWithActionIdentifier:(id)arg1 parameterKey:(id)arg2 serializedParameterStates:(id)arg3 style:(long long)arg4 attribution:(id)arg5 prompt:(id)arg6 focusImmediatelyWhenPresented:(_Bool)arg7;	// IMP=0x000000000024a216

@end
