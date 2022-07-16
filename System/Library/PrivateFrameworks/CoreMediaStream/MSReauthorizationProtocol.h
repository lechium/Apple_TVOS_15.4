//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MSReauthorizationProtocol
{
    struct __MSRPCContext {
        struct __MSSPCContext _super;
        CDUnknownFunctionPointerType finishedCallback;
        CDUnknownFunctionPointerType authFailedCallback;
        CDUnknownFunctionPointerType didReceiveRetryAfterCallback;
        CDUnknownFunctionPointerType didReceiveServerSideConfigurationVersionCallback;
    } _context;	// 24 = 0x18
    NSArray *_assetsInFlight;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000035403
- (void)_coreProtocolDidFailAuthenticationError:(id)arg1;	// IMP=0x0000000000035282
- (void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2;	// IMP=0x0000000000034c2a
- (void)abort;	// IMP=0x0000000000034bf3
- (void)requestReauthorizationForAssets:(id)arg1;	// IMP=0x000000000003484e
- (void)dealloc;	// IMP=0x00000000000347f7
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;	// IMP=0x000000000003471a
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000346eb
- (id)delegate;	// IMP=0x00000000000346ad

@end
