//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CryptoTokenKit/NSSecureCoding-Protocol.h>

@class NSString, TKSmartCardSlot;

@interface TKSmartCardUserInteractionForStringEntry <NSSecureCoding>
{
    NSString *_result;	// 32 = 0x20
    TKSmartCardSlot *_slot;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011c9a
- (void).cxx_destruct;	// IMP=0x0000000000011f81
@property __weak TKSmartCardSlot *slot; // @synthesize slot=_slot;
@property(retain) NSString *result; // @synthesize result=_result;
- (void)runWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011de0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011d63
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011ca2

@end

