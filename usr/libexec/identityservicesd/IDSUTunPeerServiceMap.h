//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

@interface IDSUTunPeerServiceMap : NSObject
{
    NSString *_name;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    unsigned char _remoteInstanceID[16];	// 20 = 0x14
    NSMapTable *_serviceNameToStreamIDMap;	// 40 = 0x28
    NSMapTable *_streamIDToServiceNameMap;	// 48 = 0x30
    unsigned short _nextStreamID;	// 56 = 0x38
    unsigned char _previousRemoteInstanceIDs[8][16];	// 58 = 0x3a
    int _nextRemoteInstanceIDIndex;	// 188 = 0xbc
}

- (void).cxx_destruct;	// IMP=0x002000000001aff0
- (void)_simulateCrashWithErrorString:(id)arg1;	// IMP=0x001000000001aed0
- (void)dumpServiceMap;	// IMP=0x001000000001add0
- (void)_dumpServiceMap;	// IMP=0x001000000001aa10
@property(readonly) unsigned long long count;
- (_Bool)translateServiceName:(id)arg1 toStreamID:(unsigned short *)arg2 createIfNotFound:(_Bool)arg3 mappingCreated:(_Bool *)arg4 remoteInstanceID:(unsigned char (*)[16])arg5 remoteInstanceIDChanged:(_Bool *)arg6;	// IMP=0x0010000000019f90
- (_Bool)translateStreamID:(unsigned short)arg1 toServiceName:(id *)arg2 remoteInstanceID:(unsigned char (*)[16])arg3 remoteInstanceIDChanged:(_Bool *)arg4;	// IMP=0x0010000000019aa0
- (_Bool)associateServiceName:(id)arg1 withStreamID:(unsigned short)arg2 remoteInstanceID:(unsigned char (*)[16])arg3 remoteInstanceIDChanged:(_Bool *)arg4;	// IMP=0x0010000000018dc0
- (_Bool)setRemoteInstanceID:(unsigned char (*)[16])arg1;	// IMP=0x0010000000018530
- (id)description;	// IMP=0x0010000000018460
- (id)initWithName:(id)arg1;	// IMP=0x0010000000018260

@end

