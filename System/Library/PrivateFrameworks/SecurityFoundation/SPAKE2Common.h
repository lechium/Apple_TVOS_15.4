//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SPAKE2Protocol-Protocol.h>

@class NSData, NSString, _SFAESKey;

@interface SPAKE2Common : NSObject <SPAKE2Protocol>
{
    _Bool _verified;	// 8 = 0x8
    struct ccrng_state *_rng;	// 16 = 0x10
    struct ccspake_ctx *_spake_ctx;	// 24 = 0x18
    NSString *_code;	// 32 = 0x20
    NSData *_salt;	// 40 = 0x28
    const struct ccspake_cp *_cp;	// 48 = 0x30
    const struct ccspake_mac *_mac;	// 56 = 0x38
    NSData *_w0;	// 64 = 0x40
    NSData *_w1;	// 72 = 0x48
    unsigned long long _w_size;	// 80 = 0x50
    unsigned long long _point_size;	// 88 = 0x58
    _SFAESKey *_session_key;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000000261a
@property _Bool verified; // @synthesize verified=_verified;
@property(retain) _SFAESKey *session_key; // @synthesize session_key=_session_key;
@property unsigned long long point_size; // @synthesize point_size=_point_size;
@property unsigned long long w_size; // @synthesize w_size=_w_size;
@property(retain) NSData *w1; // @synthesize w1=_w1;
@property(retain) NSData *w0; // @synthesize w0=_w0;
@property const struct ccspake_mac *mac; // @synthesize mac=_mac;
@property const struct ccspake_cp *cp; // @synthesize cp=_cp;
@property(retain) NSData *salt; // @synthesize salt=_salt;
@property(retain) NSString *code; // @synthesize code=_code;
@property struct ccspake_ctx *spake_ctx; // @synthesize spake_ctx=_spake_ctx;
@property struct ccrng_state *rng; // @synthesize rng=_rng;
- (id)decryptMessage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000233f
- (id)encryptMessage:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000021d2
- (id)getKey;	// IMP=0x00000000000021c0
- (_Bool)isVerified;	// IMP=0x00000000000021ae
- (_Bool)processMsg2:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001f3b
- (id)getMsg2WithError:(id *)arg1;	// IMP=0x0000000000001dd0
- (_Bool)processMsg1:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001c4d
- (id)getMsg1WithError:(id *)arg1;	// IMP=0x0000000000001aa8
- (void)dealloc;	// IMP=0x0000000000001a62
- (_Bool)setupVerifier:(id *)arg1;	// IMP=0x0000000000001760
- (_Bool)setupProver:(id *)arg1;	// IMP=0x000000000000154e
- (_Bool)generateStateWithError:(id *)arg1;	// IMP=0x000000000000119d
- (id)initWithSalt:(id)arg1 code:(id)arg2;	// IMP=0x0000000000001044

@end

