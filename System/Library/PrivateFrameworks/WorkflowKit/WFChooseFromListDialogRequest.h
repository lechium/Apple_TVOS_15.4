//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString, WFDialogButton;

@interface WFChooseFromListDialogRequest <NSSecureCoding>
{
    _Bool _allowsMultipleSelection;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
    NSString *_message;	// 24 = 0x18
    WFDialogButton *_doneButton;	// 32 = 0x20
    WFDialogButton *_cancelButton;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b5e8d
- (void).cxx_destruct;	// IMP=0x00000000001b5e3a
@property(readonly, copy, nonatomic) WFDialogButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, copy, nonatomic) WFDialogButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b5c7c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b5aa7
- (id)description;	// IMP=0x00000000001b58ee
@property(readonly, copy, nonatomic) NSString *emptyStateMessage;
- (id)initWithItems:(id)arg1 allowsMultipleSelection:(_Bool)arg2 message:(id)arg3 attribution:(id)arg4 prompt:(id)arg5;	// IMP=0x00000000001b5725

@end
