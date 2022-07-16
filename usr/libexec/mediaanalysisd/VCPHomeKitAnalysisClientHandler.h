//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, VCPHomeKitAnalysisClientProtocol;

@interface VCPHomeKitAnalysisClientHandler
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <VCPHomeKitAnalysisClientProtocol> _clientProxy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_managementQueue;	// 24 = 0x18
    NSMutableDictionary *_taskIDMapping;	// 32 = 0x20
}

+ (id)errorForStatus:(int)arg1;	// IMP=0x002000000000e916
+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x001000000000e8b1
- (void).cxx_destruct;	// IMP=0x002000000001150d
- (void)cancelAllRequests;	// IMP=0x00100000000111be
- (void)cancelRequest:(int)arg1;	// IMP=0x0010000000010f1d
- (void)requestResidentMaintenance:(int)arg1 withOptions:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010782
- (void)requestIdentification:(int)arg1 forFaceCrop:(id)arg2 withOptions:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000ffe7
- (void)requestAnalysis:(unsigned long long)arg1 ofFragmentSurface:(id)arg2 withRequestID:(int)arg3 properties:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000000f638
- (void)requestAnalysis:(unsigned long long)arg1 ofFragmentData:(id)arg2 withRequestID:(int)arg3 properties:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000000ebe2
- (void)logStatusForRequest:(int)arg1 withError:(id)arg2;	// IMP=0x001000000000ea09
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x001000000000e16a
- (id)init;	// IMP=0x001000000000e15c

@end
