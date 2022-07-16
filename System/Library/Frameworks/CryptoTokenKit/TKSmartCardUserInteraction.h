//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/NSSecureCoding-Protocol.h>

@protocol TKSmartCardUserInteractionDelegate;

@interface TKSmartCardUserInteraction : NSObject <NSSecureCoding>
{
    id <TKSmartCardUserInteractionDelegate> _delegate;	// 8 = 0x8
    double _initialTimeout;	// 16 = 0x10
    double _interactionTimeout;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000104d2
- (void).cxx_destruct;	// IMP=0x0000000000010725
@property double interactionTimeout; // @synthesize interactionTimeout=_interactionTimeout;
@property double initialTimeout; // @synthesize initialTimeout=_initialTimeout;
@property __weak id <TKSmartCardUserInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)cancel;	// IMP=0x00000000000106ca
- (void)runWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000106b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000105ea
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000104da
- (id)init;	// IMP=0x0000000000010497

@end

