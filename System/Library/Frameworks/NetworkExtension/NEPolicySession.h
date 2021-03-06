//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NSData, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NEPolicySession : NSObject <NEPrettyDescription>
{
    unsigned int _lastSendMessageID;	// 8 = 0x8
    int _sessionFD;	// 12 = 0xc
    long long _internalPriority;	// 16 = 0x10
    NSMutableDictionary *_policies;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_ioQueue;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;	// 40 = 0x28
    NSData *_lastReceivedResponse;	// 48 = 0x30
}

+ (id)parseTLVResponseForDump:(id)arg1;	// IMP=0x0000000000167ad7
+ (id)readTLVOfType:(unsigned char)arg1 startCursor:(char *)arg2 currentCursor:(char **)arg3 totalLength:(unsigned long long)arg4 readTLVInstance:(unsigned int)arg5;	// IMP=0x0000000000167a3b
+ (_Bool)isTLVValid:(char *)arg1 cursorCurrent:(char *)arg2 totalLength:(unsigned long long)arg3;	// IMP=0x00000000001678f0
+ (id)policyDumpFromData:(id)arg1;	// IMP=0x00000000001668a6
+ (unsigned int)messageIDForMessage:(id)arg1;	// IMP=0x0000000000165c6e
+ (unsigned int)policyIDFromMessage:(id)arg1;	// IMP=0x0000000000165b88
+ (id)errorFromMessage:(id)arg1;	// IMP=0x0000000000165a04
+ (unsigned char)getTLVtypeForBytes:(const char *)arg1 includeHeaderOffset:(_Bool)arg2 nextTLVOffset:(unsigned int *)arg3;	// IMP=0x00000000001659d4
+ (id)copyTLVForBytes:(const char *)arg1 messageLength:(unsigned long long)arg2 type:(unsigned char)arg3 includeHeaderOffset:(_Bool)arg4 n:(int)arg5;	// IMP=0x0000000000165966
+ (void)addTLVToMessage:(id)arg1 type:(unsigned char)arg2 length:(unsigned long long)arg3 value:(const void *)arg4;	// IMP=0x00000000001658df
- (void).cxx_destruct;	// IMP=0x00000000001684c6
@property int sessionFD; // @synthesize sessionFD=_sessionFD;
@property unsigned int lastSendMessageID; // @synthesize lastSendMessageID=_lastSendMessageID;
@property(retain) NSData *lastReceivedResponse; // @synthesize lastReceivedResponse=_lastReceivedResponse;
@property(retain) NSObject<OS_dispatch_semaphore> *responseSemaphore; // @synthesize responseSemaphore=_responseSemaphore;
@property(retain) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain) NSMutableDictionary *policies; // @synthesize policies=_policies;
@property long long internalPriority; // @synthesize internalPriority=_internalPriority;
- (_Bool)removeAllPolicies;	// IMP=0x00000000001682fd
- (_Bool)removePolicyWithID:(unsigned long long)arg1;	// IMP=0x0000000000168161
- (id)policyWithID:(unsigned long long)arg1;	// IMP=0x00000000001680da
- (_Bool)apply;	// IMP=0x0000000000168004
- (id)dumpKernelPolicies;	// IMP=0x0000000000167c81
- (unsigned long long)addPolicy:(id)arg1;	// IMP=0x0000000000166892
- (unsigned long long)addPolicy:(id)arg1 storeLocally:(_Bool)arg2;	// IMP=0x000000000016658e
- (_Bool)removeAllDomainFilters;	// IMP=0x00000000001664b8
- (_Bool)removeDomainFilterWithID:(unsigned long long)arg1;	// IMP=0x0000000000166393
- (unsigned long long)addDomainFilterWithData:(id)arg1;	// IMP=0x000000000016617a
- (_Bool)unregisterServiceUUID:(id)arg1;	// IMP=0x0000000000166082
- (_Bool)registerServiceUUID:(id)arg1;	// IMP=0x0000000000165f8a
- (_Bool)lockSessionToCurrentProcess;	// IMP=0x0000000000165eb4
@property long long priority;
- (id)createTLVMessage:(unsigned char)arg1;	// IMP=0x0000000000165857
- (int)dupSocket;	// IMP=0x0000000000165818
- (id)priorityString;	// IMP=0x0000000000165765
- (id)description;	// IMP=0x000000000016574f
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000165641
- (void)dealloc;	// IMP=0x00000000001655e5
- (id)initWithSessionName:(id)arg1;	// IMP=0x00000000001651ea
- (id)init;	// IMP=0x00000000001651d3
- (id)initFromPrivilegedProcess;	// IMP=0x00000000001650ea
- (id)initWithSocket:(int)arg1;	// IMP=0x0000000000164f49

@end

