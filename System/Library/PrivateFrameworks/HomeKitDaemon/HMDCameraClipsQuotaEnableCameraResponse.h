//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/CKCodeOperationMessageMutation-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HMDCameraClipsQuotaEnableCameraResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying>
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000496e53
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000496e06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000496dcd
- (void)copyTo:(id)arg1;	// IMP=0x0000000000496dc7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000496dc1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000496db4
- (id)dictionaryRepresentation;	// IMP=0x0000000000496d9b
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

