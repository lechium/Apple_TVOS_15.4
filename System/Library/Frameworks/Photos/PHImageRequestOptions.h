//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>
#import <Photos/PHMediaRequestThreadingOptions-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PHImageRequestOptions : NSObject <PHMediaRequestThreadingOptions, NSCopying>
{
    int _requestID;	// 8 = 0x8
    _Bool _networkAccessAllowed;	// 12 = 0xc
    _Bool _synchronous;	// 13 = 0xd
    _Bool _allowPlaceholder;	// 14 = 0xe
    _Bool _allowSecondaryOpportunisticImage;	// 15 = 0xf
    _Bool _includeHDRGainMap;	// 16 = 0x10
    _Bool _includeHDRGainMapInIntermediateImage;	// 17 = 0x11
    _Bool _onlyUseFetchedAssetPropertiesDuringChoosing;	// 18 = 0x12
    _Bool _useLowMemoryMode;	// 19 = 0x13
    _Bool _useLimitedLibraryMode;	// 20 = 0x14
    long long _version;	// 24 = 0x18
    long long _deliveryMode;	// 32 = 0x20
    long long _resizeMode;	// 40 = 0x28
    CDUnknownBlockType _progressHandler;	// 48 = 0x30
    long long _loadingMode;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_resultHandlerQueue;	// 64 = 0x40
    CDUnknownBlockType _cachingCompleteHandler;	// 72 = 0x48
    long long _downloadIntent;	// 80 = 0x50
    long long _downloadPriority;	// 88 = 0x58
    struct CGSize _fallbackTargetSizeIfRequestedSizeNotLocallyAvailable;	// 96 = 0x60
    struct CGRect _normalizedCropRect;	// 112 = 0x70
}

+ (id)defaultOptionsAllowingPlaceholder;	// IMP=0x00000000001beafe
- (void).cxx_destruct;	// IMP=0x00000000001be967
@property(nonatomic) struct CGSize fallbackTargetSizeIfRequestedSizeNotLocallyAvailable; // @synthesize fallbackTargetSizeIfRequestedSizeNotLocallyAvailable=_fallbackTargetSizeIfRequestedSizeNotLocallyAvailable;
@property(nonatomic) long long downloadPriority; // @synthesize downloadPriority=_downloadPriority;
@property(nonatomic) long long downloadIntent; // @synthesize downloadIntent=_downloadIntent;
@property(nonatomic) _Bool useLimitedLibraryMode; // @synthesize useLimitedLibraryMode=_useLimitedLibraryMode;
@property(nonatomic) _Bool useLowMemoryMode; // @synthesize useLowMemoryMode=_useLowMemoryMode;
@property(copy, nonatomic) CDUnknownBlockType cachingCompleteHandler; // @synthesize cachingCompleteHandler=_cachingCompleteHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue; // @synthesize resultHandlerQueue=_resultHandlerQueue;
@property(nonatomic) _Bool onlyUseFetchedAssetPropertiesDuringChoosing; // @synthesize onlyUseFetchedAssetPropertiesDuringChoosing=_onlyUseFetchedAssetPropertiesDuringChoosing;
@property(nonatomic) _Bool includeHDRGainMapInIntermediateImage; // @synthesize includeHDRGainMapInIntermediateImage=_includeHDRGainMapInIntermediateImage;
@property(nonatomic) _Bool includeHDRGainMap; // @synthesize includeHDRGainMap=_includeHDRGainMap;
@property(nonatomic) _Bool allowSecondaryOpportunisticImage; // @synthesize allowSecondaryOpportunisticImage=_allowSecondaryOpportunisticImage;
@property(nonatomic) _Bool allowPlaceholder; // @synthesize allowPlaceholder=_allowPlaceholder;
@property(nonatomic) long long loadingMode; // @synthesize loadingMode=_loadingMode;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic, getter=isSynchronous) _Bool synchronous; // @synthesize synchronous=_synchronous;
@property(nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property(nonatomic) struct CGRect normalizedCropRect; // @synthesize normalizedCropRect=_normalizedCropRect;
@property(nonatomic) long long resizeMode; // @synthesize resizeMode=_resizeMode;
@property(nonatomic) long long deliveryMode; // @synthesize deliveryMode=_deliveryMode;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001be091
- (id)init;	// IMP=0x00000000001bdfcf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

