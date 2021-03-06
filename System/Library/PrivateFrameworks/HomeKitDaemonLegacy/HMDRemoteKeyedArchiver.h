//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSKeyedArchiver, NSString;

@interface HMDRemoteKeyedArchiver : HMFObject
{
    NSKeyedArchiver *_archiver;	// 8 = 0x8
    NSString *_transportType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d42b7
@property(retain, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) NSKeyedArchiver *archiver; // @synthesize archiver=_archiver;
- (id)encodedData;	// IMP=0x00000000002d421d
- (void)finishEncoding;	// IMP=0x00000000002d41e0
- (void)encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002d415a
- (void)setClassName:(id)arg1 forClass:(Class)arg2;	// IMP=0x00000000002d40e2
- (void)dealloc;	// IMP=0x00000000002d4084
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(_Bool)arg1 remoteGateway:(_Bool)arg2 remoteUserIsAdministrator:(_Bool)arg3 user:(id)arg4 supportedFeatures:(id)arg5;	// IMP=0x00000000002d4068
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(_Bool)arg1 remoteGateway:(_Bool)arg2 remoteUserIsAdministrator:(_Bool)arg3 user:(id)arg4 dataVersion:(long long)arg5 supportedFeatures:(id)arg6;	// IMP=0x00000000002d3d99

@end

