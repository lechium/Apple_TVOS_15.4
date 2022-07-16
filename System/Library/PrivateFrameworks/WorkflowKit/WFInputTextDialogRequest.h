//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSString, WFDialogButton, WFTextFieldConfiguration;

@interface WFInputTextDialogRequest <NSSecureCoding>
{
    WFTextFieldConfiguration *_textFieldConfiguration;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    WFDialogButton *_cancelButton;	// 24 = 0x18
    WFDialogButton *_doneButton;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000149dc
- (void).cxx_destruct;	// IMP=0x0000000000014989
@property(readonly, copy, nonatomic) WFDialogButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, copy, nonatomic) WFDialogButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) WFTextFieldConfiguration *textFieldConfiguration; // @synthesize textFieldConfiguration=_textFieldConfiguration;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000147ff
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001468b
- (id)description;	// IMP=0x0000000000014504
- (id)initWithTextFieldConfiguration:(id)arg1 message:(id)arg2 attribution:(id)arg3 prompt:(id)arg4;	// IMP=0x00000000000143c6

@end
