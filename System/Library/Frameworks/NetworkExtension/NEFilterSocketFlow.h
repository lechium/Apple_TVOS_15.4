//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSString, NSUUID, NWEndpoint;

@interface NEFilterSocketFlow <NSSecureCoding, NSCopying>
{
    long long _generateIdentifierOnce;	// 136 = 0x88
    int _socketFamily;	// 144 = 0x90
    int _socketType;	// 148 = 0x94
    int _socketProtocol;	// 152 = 0x98
    NWEndpoint *_remoteEndpoint;	// 160 = 0xa0
    NSString *_remoteHostname;	// 168 = 0xa8
    NWEndpoint *_localEndpoint;	// 176 = 0xb0
    NSUUID *_uuid;	// 184 = 0xb8
    NSUUID *_euuid;	// 192 = 0xc0
    unsigned long long _socketID;	// 200 = 0xc8
    NSUUID *_socketUUID;	// 208 = 0xd0
}

+ (_Bool)writeMessageWithControlSocket:(int)arg1 drop:(_Bool)arg2 socketID:(unsigned long long)arg3 inboundPassOffset:(unsigned long long)arg4 inboundPeekOffset:(unsigned long long)arg5 outboundPassOffset:(unsigned long long)arg6 outboundPeekOffset:(unsigned long long)arg7 statsReportFrequency:(long long)arg8;	// IMP=0x0000000000060d4c
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005f65c
- (void).cxx_destruct;	// IMP=0x0000000000060fc6
@property(readonly) NSUUID *socketUUID; // @synthesize socketUUID=_socketUUID;
@property unsigned long long socketID; // @synthesize socketID=_socketID;
@property(copy, nonatomic) NSUUID *euuid; // @synthesize euuid=_euuid;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property int socketProtocol; // @synthesize socketProtocol=_socketProtocol;
@property int socketType; // @synthesize socketType=_socketType;
@property int socketFamily; // @synthesize socketFamily=_socketFamily;
@property(copy) NWEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
@property(copy) NSString *remoteHostname; // @synthesize remoteHostname=_remoteHostname;
@property(copy) NWEndpoint *remoteEndpoint; // @synthesize remoteEndpoint=_remoteEndpoint;
- (void)writeXPCMessage:(id)arg1 drop:(_Bool)arg2 inboundPassOffset:(unsigned long long)arg3 inboundPeekOffset:(unsigned long long)arg4 outboundPassOffset:(unsigned long long)arg5 outboundPeekOffset:(unsigned long long)arg6 statsReportFrequency:(long long)arg7;	// IMP=0x0000000000060aed
- (void)writeCurrentVerdictWithMessage:(id)arg1 controlSocket:(int)arg2;	// IMP=0x0000000000060813
- (_Bool)createDataCompleteReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;	// IMP=0x000000000006074a
- (_Bool)createDataReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;	// IMP=0x00000000000606d9
- (_Bool)createNewFlowReply:(id)arg1 controlSocket:(int)arg2 verdict:(id)arg3 context:(id)arg4;	// IMP=0x00000000000601eb
- (id)identifierString;	// IMP=0x000000000006014f
- (id)identifier;	// IMP=0x0000000000060007
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000005fd2c
- (void)setLocalAddress:(struct sockaddr *)arg1;	// IMP=0x000000000005fcc9
- (void)setRemoteAddress:(struct sockaddr *)arg1;	// IMP=0x000000000005fc66
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005faba
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005f8be
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005f664
- (id)initWithSocketFamily:(int)arg1 socketType:(int)arg2 socketProtocol:(int)arg3 pid:(int)arg4 epid:(int)arg5 uuid:(unsigned char [16])arg6 euuid:(unsigned char [16])arg7 socketID:(unsigned long long)arg8;	// IMP=0x000000000005f513

@end

