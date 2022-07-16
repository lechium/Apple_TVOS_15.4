//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcutClient/NSSecureCoding-Protocol.h>

@class WFContentCollection, WFContextualActionContext;

@interface WFContextualActionRunRequest <NSSecureCoding>
{
    WFContextualActionContext *_actionContext;	// 8 = 0x8
    WFContentCollection *_input;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000e000
- (void).cxx_destruct;	// IMP=0x000000000000dbe1
@property(readonly, nonatomic) WFContentCollection *input; // @synthesize input=_input;
@property(readonly, nonatomic) WFContextualActionContext *actionContext; // @synthesize actionContext=_actionContext;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000db24
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000da25
- (void)runRequestByPopulatingMissingParameterStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000da12
- (id)queueIdentifier;	// IMP=0x000000000000d7e8
- (void)getInputWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cf8b
- (id)initWithDescriptor:(id)arg1 presentationMode:(unsigned long long)arg2 actionContext:(id)arg3;	// IMP=0x000000000000cd81

@end

