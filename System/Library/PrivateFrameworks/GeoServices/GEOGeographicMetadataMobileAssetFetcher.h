//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMobileAssetResource, NSDictionary;

__attribute__((visibility("hidden")))
@interface GEOGeographicMetadataMobileAssetFetcher : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSDictionary *_parameters;	// 16 = 0x10
    CDUnknownBlockType _responseBlock;	// 24 = 0x18
    GEOMobileAssetResource *_result;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001134f76
- (void)fetchMetadataWithResponseQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000001134d85
- (id)initForType:(unsigned long long)arg1 parameters:(id)arg2;	// IMP=0x0000000001134cf4

@end

