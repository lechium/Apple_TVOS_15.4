//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _TtC16CryptoKitPrivate9TDMClient;

@interface TDMToken : NSObject
{
    _TtC16CryptoKitPrivate9TDMClient *_tdmClient;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002aee
@property(readonly, nonatomic) _TtC16CryptoKitPrivate9TDMClient *tdmClient; // @synthesize tdmClient=_tdmClient;
- (id)finalizeWithEvaluatedElement:(id)arg1 proof:(id)arg2 publicKey:(id)arg3 fsr:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000002abf
- (id)blindedElement;	// IMP=0x0000000000002aa9
- (id)initWithTID:(id)arg1;	// IMP=0x0000000000002a27

@end
