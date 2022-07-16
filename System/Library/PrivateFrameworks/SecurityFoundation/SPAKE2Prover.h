//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SPAKE2Protocol-Protocol.h>

@class SPAKE2Common;

@interface SPAKE2Prover : NSObject <SPAKE2Protocol>
{
    SPAKE2Common *_common;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002b4f
@property(retain) SPAKE2Common *common; // @synthesize common=_common;
- (id)decryptMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002aa3
- (id)encryptMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002a1a
- (id)getKey;	// IMP=0x00000000000029ca
- (_Bool)isVerified;	// IMP=0x0000000000002986
- (_Bool)processMsg2:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002909
- (id)getMsg2WithError:(id *)arg1;	// IMP=0x00000000000028aa
- (_Bool)processMsg1:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000282d
- (id)getMsg1WithError:(id *)arg1;	// IMP=0x00000000000027ce
- (id)initWithSalt:(id)arg1 code:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000002663

@end
