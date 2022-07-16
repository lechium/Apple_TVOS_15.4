//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NSArray, NSSet, NSString, NWAddressEndpoint, NWEndpoint;

@interface NEIKEv2IKESAConfiguration : NSObject <NSCopying>
{
    NSArray *_proposals;	// 8 = 0x8
    _Bool _randomizeLocalPort;	// 16 = 0x10
    _Bool _serverMode;	// 17 = 0x11
    _Bool _allowRedirect;	// 18 = 0x12
    _Bool _disableSwitchToNATTPorts;	// 19 = 0x13
    _Bool _allowTCPEncapsulation;	// 20 = 0x14
    _Bool _useTLSForTCPEncapsulation;	// 21 = 0x15
    _Bool _forceUDPEncapsulation;	// 22 = 0x16
    _Bool _preferInitiatorProposalOrder;	// 23 = 0x17
    unsigned short _tcpEncapsulationPort;	// 24 = 0x18
    unsigned int _nonceSize;	// 28 = 0x1c
    NWEndpoint *_localEndpoint;	// 32 = 0x20
    NWEndpoint *_remoteEndpoint;	// 40 = 0x28
    NSString *_outgoingInterfaceName;	// 48 = 0x30
    NWAddressEndpoint *_redirectedFromServer;	// 56 = 0x38
    NSArray *_customIKESAInitPayloads;	// 64 = 0x40
    NSArray *_customIKESAInitVendorPayloads;	// 72 = 0x48
    NSSet *_extraSupportedSignatureHashes;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000094f6f
@property(retain) NSSet *extraSupportedSignatureHashes; // @synthesize extraSupportedSignatureHashes=_extraSupportedSignatureHashes;
@property(retain) NSArray *customIKESAInitVendorPayloads; // @synthesize customIKESAInitVendorPayloads=_customIKESAInitVendorPayloads;
@property(retain) NSArray *customIKESAInitPayloads; // @synthesize customIKESAInitPayloads=_customIKESAInitPayloads;
@property(retain) NWAddressEndpoint *redirectedFromServer; // @synthesize redirectedFromServer=_redirectedFromServer;
@property unsigned int nonceSize; // @synthesize nonceSize=_nonceSize;
@property unsigned short tcpEncapsulationPort; // @synthesize tcpEncapsulationPort=_tcpEncapsulationPort;
@property _Bool preferInitiatorProposalOrder; // @synthesize preferInitiatorProposalOrder=_preferInitiatorProposalOrder;
@property _Bool forceUDPEncapsulation; // @synthesize forceUDPEncapsulation=_forceUDPEncapsulation;
@property _Bool useTLSForTCPEncapsulation; // @synthesize useTLSForTCPEncapsulation=_useTLSForTCPEncapsulation;
@property _Bool allowTCPEncapsulation; // @synthesize allowTCPEncapsulation=_allowTCPEncapsulation;
@property _Bool disableSwitchToNATTPorts; // @synthesize disableSwitchToNATTPorts=_disableSwitchToNATTPorts;
@property _Bool allowRedirect; // @synthesize allowRedirect=_allowRedirect;
@property _Bool serverMode; // @synthesize serverMode=_serverMode;
@property _Bool randomizeLocalPort; // @synthesize randomizeLocalPort=_randomizeLocalPort;
@property(retain) NSString *outgoingInterfaceName; // @synthesize outgoingInterfaceName=_outgoingInterfaceName;
@property(retain) NWEndpoint *remoteEndpoint; // @synthesize remoteEndpoint=_remoteEndpoint;
@property(retain) NWEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
@property(copy, nonatomic) NSArray *proposals;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009481a
- (id)description;	// IMP=0x0000000000094801
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000094427
- (id)init;	// IMP=0x000000000009438a

@end

