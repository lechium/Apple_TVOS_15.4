//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/NSCopying-Protocol.h>
#import <CoreML/NSSecureCoding-Protocol.h>

@class NSDictionary, NSURL;
@protocol MTLDevice;

@interface MLModelConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _allowBackgroundGPUComputeSetting;	// 8 = 0x8
    _Bool _trainWithMLCompute;	// 9 = 0x9
    _Bool _useWatchSPIForScribble;	// 10 = 0xa
    _Bool _allowLowPrecisionAccumulationOnGPU;	// 11 = 0xb
    _Bool _enableTestVectorMode;	// 12 = 0xc
    _Bool _usePreloadedKey;	// 13 = 0xd
    long long _computeUnits;	// 16 = 0x10
    id <MTLDevice> _preferredMetalDevice;	// 24 = 0x18
    NSDictionary *_parameters;	// 32 = 0x20
    NSURL *_rootModelURL;	// 40 = 0x28
    long long _profilingOptions;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000623dd
+ (id)defaultConfiguration;	// IMP=0x00000000000623c4
- (void).cxx_destruct;	// IMP=0x0000000000062391
@property(nonatomic) _Bool usePreloadedKey; // @synthesize usePreloadedKey=_usePreloadedKey;
@property(nonatomic) long long profilingOptions; // @synthesize profilingOptions=_profilingOptions;
@property(retain) NSURL *rootModelURL; // @synthesize rootModelURL=_rootModelURL;
@property(retain) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool enableTestVectorMode; // @synthesize enableTestVectorMode=_enableTestVectorMode;
@property(retain, nonatomic) id <MTLDevice> preferredMetalDevice; // @synthesize preferredMetalDevice=_preferredMetalDevice;
@property _Bool allowLowPrecisionAccumulationOnGPU; // @synthesize allowLowPrecisionAccumulationOnGPU=_allowLowPrecisionAccumulationOnGPU;
@property(nonatomic) _Bool useWatchSPIForScribble; // @synthesize useWatchSPIForScribble=_useWatchSPIForScribble;
@property _Bool trainWithMLCompute; // @synthesize trainWithMLCompute=_trainWithMLCompute;
@property _Bool allowBackgroundGPUComputeSetting; // @synthesize allowBackgroundGPUComputeSetting=_allowBackgroundGPUComputeSetting;
@property long long computeUnits; // @synthesize computeUnits=_computeUnits;
- (id)description;	// IMP=0x00000000000621fe
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000061ffe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000061e47
- (unsigned long long)hash;	// IMP=0x0000000000061d50
- (_Bool)isEqualToModelConfiguration:(id)arg1;	// IMP=0x0000000000061bf4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000061b91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000619d7
@property(nonatomic) _Bool allowBackgroundGPUCompute;
@property(retain, nonatomic) id <MTLDevice> preferredMTLDevice;
@property(nonatomic) _Bool allowFloat16AccumulationOnGPU;
- (id)init;	// IMP=0x000000000006195d
- (id)initWithComputeUnits:(long long)arg1;	// IMP=0x00000000000618f3
- (id)computeUnitsToString:(long long)arg1;	// IMP=0x00000000000618ba

@end

