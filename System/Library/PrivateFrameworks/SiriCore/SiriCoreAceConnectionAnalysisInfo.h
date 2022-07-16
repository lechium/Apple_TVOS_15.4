//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL, SiriCoreConnectionType;

@interface SiriCoreAceConnectionAnalysisInfo : NSObject
{
    _Bool _wwanPreferred;	// 8 = 0x8
    int _interfaceIndex;	// 12 = 0xc
    NSURL *_connectionURL;	// 16 = 0x10
    NSNumber *_sendBufferSize;	// 24 = 0x18
    SiriCoreConnectionType *_connectionType;	// 32 = 0x20
    NSString *_policyId;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000003fb1
@property(copy, nonatomic) NSString *policyId; // @synthesize policyId=_policyId;
@property(readonly, nonatomic) SiriCoreConnectionType *connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) _Bool wwanPreferred; // @synthesize wwanPreferred=_wwanPreferred;
@property(readonly, copy, nonatomic) NSNumber *sendBufferSize; // @synthesize sendBufferSize=_sendBufferSize;
@property(readonly, nonatomic) int interfaceIndex; // @synthesize interfaceIndex=_interfaceIndex;
@property(readonly, nonatomic) NSURL *connectionURL; // @synthesize connectionURL=_connectionURL;
- (id)initWithConnectionURL:(id)arg1 interfaceIndex:(int)arg2 sendBufferSize:(id)arg3 wwanPreferred:(_Bool)arg4 connectionType:(id)arg5 policyId:(id)arg6;	// IMP=0x0000000000003e55

@end

