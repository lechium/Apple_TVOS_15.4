//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, NSArray, NSData, NSString;

@interface VCPMADServiceImageAsset : NSObject
{
    _Bool _hasCachedParseData;	// 8 = 0x8
    NSString *_clientBundleID;	// 16 = 0x10
    NSString *_clientTeamID;	// 24 = 0x18
    NSArray *_documentObservations;	// 32 = 0x20
    NSArray *_barcodeObservations;	// 40 = 0x28
    NSData *_cachedParseData;	// 48 = 0x30
    NSString *_signpostPayload;	// 56 = 0x38
}

+ (id)assetWithPhotosAsset:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 orientation:(unsigned int)arg3 clientBundleID:(id)arg4 clientTeamID:(id)arg5;	// IMP=0x000000000016dcc9
+ (id)assetWithPhotosAsset:(id)arg1 clientBundleID:(id)arg2 clientTeamID:(id)arg3;	// IMP=0x000000000016dc1e
+ (id)assetWithURL:(id)arg1 identifier:(id)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4;	// IMP=0x000000000016db56
+ (id)assetWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 identifier:(id)arg3 clientBundleID:(id)arg4 clientTeamID:(id)arg5;	// IMP=0x000000000016da98
- (void).cxx_destruct;	// IMP=0x000000000016de3d
@property(retain, nonatomic) NSString *signpostPayload; // @synthesize signpostPayload=_signpostPayload;
@property(copy, nonatomic) NSData *cachedParseData; // @synthesize cachedParseData=_cachedParseData;
@property(readonly, nonatomic) _Bool hasCachedParseData; // @synthesize hasCachedParseData=_hasCachedParseData;
@property(copy, nonatomic) NSArray *barcodeObservations; // @synthesize barcodeObservations=_barcodeObservations;
@property(copy, nonatomic) NSArray *documentObservations; // @synthesize documentObservations=_documentObservations;
@property(readonly, nonatomic) NSString *clientTeamID; // @synthesize clientTeamID=_clientTeamID;
@property(readonly, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
- (int)loadPixelBuffer:(struct __CVBuffer **)arg1 orientation:(unsigned int *)arg2;	// IMP=0x000000000016ddb9
@property(readonly, nonatomic) NSArray *nsfwClassifications;
@property(readonly, nonatomic) NSArray *faces;
@property(readonly, nonatomic) _Bool isScreenshot;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithClientBundleID:(id)arg1 andClientTeamID:(id)arg2;	// IMP=0x000000000016d9e1

@end
