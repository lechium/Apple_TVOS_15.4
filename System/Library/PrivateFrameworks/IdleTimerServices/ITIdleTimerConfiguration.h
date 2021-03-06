//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IdleTimerServices/BSDescriptionProviding-Protocol.h>
#import <IdleTimerServices/BSXPCSecureCoding-Protocol.h>
#import <IdleTimerServices/NSCopying-Protocol.h>

@class NSString;

@interface ITIdleTimerConfiguration : NSObject <NSCopying, BSXPCSecureCoding, BSDescriptionProviding>
{
    _Bool _disablesTimer;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    unsigned long long _idleEventMask;	// 24 = 0x18
    CDUnknownBlockType _idleEventHandlerBlock;	// 32 = 0x20
}

+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x0000000000003c08
+ (id)configurationToDisableIdleTimer;	// IMP=0x0000000000003a34
- (void).cxx_destruct;	// IMP=0x0000000000003ebd
@property(copy, nonatomic, getter=_idleEventHandlerBlock, setter=_setIdleEventHandlerBlock:) CDUnknownBlockType idleEventHandlerBlock; // @synthesize idleEventHandlerBlock=_idleEventHandlerBlock;
@property(nonatomic, getter=_idleEventMask, setter=_setIdleEventMask:) unsigned long long idleEventMask; // @synthesize idleEventMask=_idleEventMask;
@property(readonly, copy, nonatomic, getter=_identifier) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool disablesTimer; // @synthesize disablesTimer=_disablesTimer;
- (id)_uniquedReason:(id)arg1;	// IMP=0x0000000000003dde
- (id)_copyWithNewIdentifier;	// IMP=0x0000000000003d69
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000003cc9
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000003c10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003bd9
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000003bc7
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000003b77
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000003ac9
- (id)succinctDescription;	// IMP=0x0000000000003a79
@property(readonly, copy) NSString *description;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000000394a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

