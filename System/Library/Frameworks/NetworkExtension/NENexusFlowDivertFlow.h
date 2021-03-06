//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow
{
    NSUUID *_clientID;	// 8 = 0x8
    NWEndpoint *_internalEndpoint;	// 16 = 0x10
    NWParameters *_internalParameters;	// 24 = 0x18
    struct _NEFlow *_flowDivertFlow;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000741b4
@property struct _NEFlow *flowDivertFlow; // @synthesize flowDivertFlow=_flowDivertFlow;
@property(retain) NWParameters *internalParameters; // @synthesize internalParameters=_internalParameters;
@property(retain) NWEndpoint *internalEndpoint; // @synthesize internalEndpoint=_internalEndpoint;
@property(retain) NSUUID *clientID; // @synthesize clientID=_clientID;
- (id)clientIdentifier;	// IMP=0x000000000007410b
- (id)parameters;	// IMP=0x00000000000740f9
- (id)endpoint;	// IMP=0x00000000000740e7
- (void)dealloc;	// IMP=0x0000000000074072
- (id)initWithFlowDivertFlow:(struct _NEFlow *)arg1;	// IMP=0x0000000000073da3

@end

