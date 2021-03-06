//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/IDSLink-Protocol.h>

@class NSIndexSet, NSString;
@protocol IDSLinkDelegate;

@interface IDSTCPLink : NSObject <IDSLink>
{
    int _addressFamily;	// 8 = 0x8
    _Bool _isSSL;	// 12 = 0xc
    struct IDSTCPConnection_ *_conns;	// 16 = 0x10
    CDUnknownBlockType _getPacketLength;	// 24 = 0x18
    struct IDSTCPLinkCounter_ _counters;	// 32 = 0x20
    struct IDSTCPLinkCounter_ _previousCounters;	// 64 = 0x40
    double _previousReportTime;	// 96 = 0x60
    NSString *_cbuuid;	// 104 = 0x68
    NSString *_deviceUniqueID;	// 112 = 0x70
    id <IDSLinkDelegate> _delegate;	// 120 = 0x78
    id <IDSLinkDelegate> _alternateDelegate;	// 128 = 0x80
    unsigned long long _state;	// 136 = 0x88
    NSIndexSet *_cellularInterfaceIndices;	// 144 = 0x90
    _Bool _wifiAssistEnabled;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000013f9b
@property(nonatomic) _Bool wifiAssistEnabled; // @synthesize wifiAssistEnabled=_wifiAssistEnabled;
@property(retain, nonatomic) NSIndexSet *cellularInterfaceIndices; // @synthesize cellularInterfaceIndices=_cellularInterfaceIndices;
@property __weak id <IDSLinkDelegate> alternateDelegate; // @synthesize alternateDelegate=_alternateDelegate;
@property(readonly) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool isSSL; // @synthesize isSSL=_isSSL;
@property __weak id <IDSLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(retain) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
- (void)setWiFiAssistState:(_Bool)arg1;	// IMP=0x0000000000013c7c
- (id)generateLinkReport:(double)arg1 isCurrentLink:(_Bool)arg2;	// IMP=0x0000000000013a3c
- (unsigned long long)sendPacketBufferArray:(CDStruct_183601bc **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x0000000000012d3a
- (unsigned long long)sendPacketBuffer:(CDStruct_727fadec *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x0000000000012d0a
- (void)processIncomingPacket:(CDStruct_727fadec *)arg1;	// IMP=0x0000000000012cbd
- (_Bool)disconnect:(struct sockaddr_in *)arg1 remoteAddress:(struct sockaddr_in *)arg2;	// IMP=0x00000000000129d8
- (_Bool)connect:(int)arg1 localAddress:(struct sockaddr *)arg2 portRange:(unsigned short)arg3 remoteAddress:(struct sockaddr *)arg4 clientUUID:(unsigned char [16])arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000116dc
- (struct IDSTCPConnection_ *)_getIDSTCPConnection:(CDStruct_727fadec *)arg1;	// IMP=0x00000000000114bb
- (long long)getPacketLength:(CDStruct_727fadec *)arg1 isChannelData:(_Bool *)arg2;	// IMP=0x00000000000114a6
- (id)copyLinkStatsDict;	// IMP=0x0000000000011384
@property(readonly, getter=linkTypeString) NSString *linkTypeString;
@property(readonly) unsigned long long headerOverhead;
- (void)invalidate;	// IMP=0x0000000000011221
- (void)dealloc;	// IMP=0x000000000001110d
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 isSSL:(_Bool)arg3 getPacketLength:(CDUnknownBlockType)arg4;	// IMP=0x0000000000011028

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

