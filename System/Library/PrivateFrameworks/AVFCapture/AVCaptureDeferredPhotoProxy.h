//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface AVCaptureDeferredPhotoProxy
{
    NSString *_captureRequestIdentifier;	// 16 = 0x10
    NSString *_photoIdentifier;	// 24 = 0x18
}

@property(readonly, copy) NSString *persistentStorageUUID; // @synthesize persistentStorageUUID=_photoIdentifier;
- (id)description;	// IMP=0x0000000000008b79
- (id)debugDescription;	// IMP=0x0000000000008a63
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000089b0
- (void)dealloc;	// IMP=0x0000000000008958
- (id)captureRequestIdentifier;	// IMP=0x000000000000893a
@property(readonly) NSString *deferredPhotoIdentifier;
- (id)initWithDeferredPhotoIdentifier:(id)arg1;	// IMP=0x0000000000008793
- (id)initWithTimestamp:(CDStruct_1b6d18a9)arg1 proxySurface:(struct __IOSurface *)arg2 proxySurfaceSize:(unsigned long long)arg3 proxyFileType:(id)arg4 previewPhotoSurface:(struct __IOSurface *)arg5 metadata:(id)arg6 captureRequest:(id)arg7 sequenceCount:(unsigned long long)arg8 photoCount:(unsigned long long)arg9 captureRequestIdentifier:(id)arg10 photoIdentifier:(id)arg11 expectedPhotoProcessingFlags:(unsigned int)arg12 sourceDeviceType:(id)arg13;	// IMP=0x0000000000008690
- (id)initWithTimestamp:(CDStruct_1b6d18a9)arg1 captureRequestIdentifier:(id)arg2 photoIdentifier:(id)arg3 expectedPhotoProcessingFlags:(unsigned int)arg4;	// IMP=0x000000000000858a

@end

