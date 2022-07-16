//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class HMDCameraSnapshotSessionID, HMDProcessInfo;

@interface HMDSnapshotSessionApplicationID : HMFObject <NSCopying>
{
    HMDCameraSnapshotSessionID *_sessionID;	// 8 = 0x8
    HMDProcessInfo *_processInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000523690
@property(readonly, nonatomic) HMDProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (unsigned long long)hash;	// IMP=0x000000000052362a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005234a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000523413
- (id)description;	// IMP=0x0000000000523359
- (id)initWithSessionID:(id)arg1 processInfo:(id)arg2;	// IMP=0x00000000005232b7

@end
