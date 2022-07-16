//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@interface WFHandleInteractionDialogResponse <NSSecureCoding>
{
    unsigned long long _interactionResponseCode;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002360dd
@property(readonly, nonatomic) unsigned long long interactionResponseCode; // @synthesize interactionResponseCode=_interactionResponseCode;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000236046
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000235fb5
- (id)description;	// IMP=0x0000000000235f1e
- (id)initWithInteractionResponseCode:(unsigned long long)arg1;	// IMP=0x0000000000235ebc

@end

