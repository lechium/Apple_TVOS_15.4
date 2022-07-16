//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVContentKeyRecipient-Protocol.h>
#import <AVFCore/AVContentKeySessionDelegate-Protocol.h>

@class AVAsset, AVStreamDataParserInternal, NSData, NSError, NSString;
@protocol AVStreamDataParserOutputHandling;

@interface AVStreamDataParser : NSObject <AVContentKeySessionDelegate, AVContentKeyRecipient>
{
    AVStreamDataParserInternal *_parser;	// 8 = 0x8
}

+ (_Bool)canParseExtendedMIMEType:(id)arg1;	// IMP=0x00000000000ba713
+ (id)audiovisualMIMETypes;	// IMP=0x00000000000ba5e6
+ (id)outputMIMECodecParameterForInputMIMECodecParameter:(id)arg1;	// IMP=0x00000000000bb4ba
+ (id)_createNSDataWithBlockBuffer:(struct OpaqueCMBlockBuffer *)arg1;	// IMP=0x00000000000bb54e
+ (struct OpaqueCMBlockBuffer *)_createBlockBufferUsingNSData:(id)arg1 withOffset:(unsigned long long)arg2 withLength:(unsigned long long)arg3;	// IMP=0x00000000000bb518
- (void)_createAssetIfNecessary;	// IMP=0x00000000000bb152
- (_Bool)shouldProvideMediaDataForTrackID:(int)arg1;	// IMP=0x00000000000bb111
- (void)setShouldProvideMediaData:(_Bool)arg1 forTrackID:(int)arg2;	// IMP=0x00000000000bafa3
@property(readonly, nonatomic) AVAsset *asset;
- (void)providePendingMediaData;	// IMP=0x00000000000baf09
- (void)appendStreamData:(id)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x00000000000badf2
- (void)_appendStreamData:(struct OpaqueCMBlockBuffer *)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x00000000000ba76a
- (void)_setError:(id)arg1;	// IMP=0x00000000000ba563
@property(readonly) NSError *error;
- (void)appendStreamData:(id)arg1;	// IMP=0x00000000000ba541
- (void)setStatus:(long long)arg1;	// IMP=0x00000000000ba4cd
@property(readonly) long long status2;
@property(readonly) long long status;
@property(readonly, nonatomic) id <AVStreamDataParserOutputHandling> delegate;
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000ba34d
- (void)dealloc;	// IMP=0x00000000000ba268
- (void)_willDeallocOrFinalize;	// IMP=0x00000000000ba08a
- (id)init;	// IMP=0x00000000000b9f21
- (int)_createFigManifoldWithBlockBuffer:(struct OpaqueCMBlockBuffer *)arg1 manifold:(struct OpaqueFigManifold **)arg2;	// IMP=0x00000000000bc869
- (int)_figManifold:(struct OpaqueFigManifold *)arg1 discoveredNewTrackID:(int)arg2 mediaType:(id)arg3;	// IMP=0x00000000000bc708
- (void)_figManifoldAllNewTracksReady:(struct OpaqueFigManifold *)arg1;	// IMP=0x00000000000bc6f6
- (int)_unregisterForFigManifoldCallbacksForTrackID:(int)arg1;	// IMP=0x00000000000bc6b5
- (int)_registerForFigManifoldCallbacksForTrackID:(int)arg1;	// IMP=0x00000000000bc65c
- (int)_figManifold:(struct OpaqueFigManifold *)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 orDecryptorDidChange:(void *)arg3 forTrackID:(int)arg4;	// IMP=0x00000000000bbc5d
- (int)_figManifold:(struct OpaqueFigManifold *)arg1 trackDidEnd:(int)arg2;	// IMP=0x00000000000bbb3b
- (int)_figManifold:(struct OpaqueFigManifold *)arg1 pushedSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 trackID:(int)arg3 flags:(unsigned int)arg4;	// IMP=0x00000000000bb657
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;	// IMP=0x00000000000bc9f8
- (void)contentKeySession:(id)arg1 didProvideContentKeyRenewalRequest:(id)arg2;	// IMP=0x00000000000bc9e6
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;	// IMP=0x00000000000bc9b6
- (id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 trackID:(int)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000bcd12
- (void)renewExpiringContentKeyResponseDataForTrackID:(int)arg1;	// IMP=0x00000000000bccf8
- (void)processContentKeyResponseError:(id)arg1 forTrackID:(int)arg2;	// IMP=0x00000000000bcc17
- (void)processContentKeyResponseData:(id)arg1 forTrackID:(int)arg2;	// IMP=0x00000000000bca81
@property(readonly) NSData *contentProtectionSessionIdentifier;
- (_Bool)_attachedToExternalContentKeySession;	// IMP=0x00000000000bcfd8
- (id)contentKeySession;	// IMP=0x00000000000bcfbe
- (void)setSession:(id)arg1;	// IMP=0x00000000000bce74
- (void)expire;	// IMP=0x00000000000bce2f
- (_Bool)hasProtector;	// IMP=0x00000000000bcdfc
- (int)_attachToContentKeySession:(id)arg1 failedSinceAlreadyAttachedToAnotherSession:(_Bool *)arg2;	// IMP=0x00000000000bd030
@property(readonly, nonatomic) _Bool mayRequireContentKeysForMediaDataProcessing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

