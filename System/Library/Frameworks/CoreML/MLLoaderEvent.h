//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MLLoaderEvent : NSObject <CUTCoreAnalyticsMetric>
{
    NSNumber *_modelType;	// 8 = 0x8
    NSNumber *_modelLoadTime;	// 16 = 0x10
    NSString *_modelVersion;	// 24 = 0x18
    NSString *_compilerVersion;	// 32 = 0x20
    NSNumber *_computeUnits;	// 40 = 0x28
    NSNumber *_modelOrigin;	// 48 = 0x30
    NSNumber *_modelLoadError;	// 56 = 0x38
    NSString *_bundleIdentifier;	// 64 = 0x40
    NSString *_modelName;	// 72 = 0x48
    NSNumber *_firstPartyExecutable;	// 80 = 0x50
    NSNumber *_modelIsEncrypted;	// 88 = 0x58
    NSString *_modelHash;	// 96 = 0x60
    NSString *_nnModelNetHash;	// 104 = 0x68
    NSString *_nnModelShapeHash;	// 112 = 0x70
    NSString *_nnModelWeightsHash;	// 120 = 0x78
    NSNumber *_modelDimension;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000d679c
@property(copy, nonatomic) NSNumber *modelDimension; // @synthesize modelDimension=_modelDimension;
@property(copy, nonatomic) NSString *nnModelWeightsHash; // @synthesize nnModelWeightsHash=_nnModelWeightsHash;
@property(copy, nonatomic) NSString *nnModelShapeHash; // @synthesize nnModelShapeHash=_nnModelShapeHash;
@property(copy, nonatomic) NSString *nnModelNetHash; // @synthesize nnModelNetHash=_nnModelNetHash;
@property(copy, nonatomic) NSString *modelHash; // @synthesize modelHash=_modelHash;
@property(copy, nonatomic) NSNumber *modelIsEncrypted; // @synthesize modelIsEncrypted=_modelIsEncrypted;
@property(copy, nonatomic) NSNumber *firstPartyExecutable; // @synthesize firstPartyExecutable=_firstPartyExecutable;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSNumber *modelLoadError; // @synthesize modelLoadError=_modelLoadError;
@property(copy, nonatomic) NSNumber *modelOrigin; // @synthesize modelOrigin=_modelOrigin;
@property(copy, nonatomic) NSNumber *computeUnits; // @synthesize computeUnits=_computeUnits;
@property(copy, nonatomic) NSString *compilerVersion; // @synthesize compilerVersion=_compilerVersion;
@property(copy, nonatomic) NSString *modelVersion; // @synthesize modelVersion=_modelVersion;
@property(copy, nonatomic) NSNumber *modelLoadTime; // @synthesize modelLoadTime=_modelLoadTime;
@property(copy, nonatomic) NSNumber *modelType; // @synthesize modelType=_modelType;
- (id)numberFromCString:(const char *)arg1;	// IMP=0x00000000000d6499
- (void)extractAndSetModelDetailsFromArchive:(void *)arg1;	// IMP=0x00000000000d589a
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

