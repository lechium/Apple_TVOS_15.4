//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/VNClassCodeProviding-Protocol.h>
#import <Vision/VNDetectorKeyProviding-Protocol.h>

@class NSDictionary, NSString, VNMetalContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VNDetector : NSObject <VNClassCodeProviding, VNDetectorKeyProviding>
{
    NSDictionary *_configurationOptions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_processingQueue;	// 16 = 0x10
    VNMetalContext *_metalContext;	// 24 = 0x18
    unsigned long long _backingStore;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_synchronizationQueue;	// 40 = 0x28
}

+ (unsigned int)VNClassCode;	// IMP=0x0000000000061d34
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000061cf0
+ (id)supportedImageSizeSetForEspressoModelWithName:(id)arg1 inputImageBlobName:(id)arg2 analysisPixelFormatType:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x0000000000061bf3
+ (id)detectorKeyComponentForDetectorConfigurationOptionKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000061bdd
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;	// IMP=0x0000000000061892
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x0000000000061862
+ (id)detectorWithConfigurationOptions:(id)arg1 forSession:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006173b
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000061732
+ (id)fullyPopulatedConfigurationOptionsWithOverridingOptions:(id)arg1;	// IMP=0x0000000000061694
+ (void)fullyPopulateConfigurationOptions:(id)arg1;	// IMP=0x0000000000061633
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x0000000000061555
+ (id)detectorName;	// IMP=0x0000000000061296
+ (Class)detectorClassForDetectorType:(id)arg1 configuredWithOptions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000061197
+ (Class)detectorClassForDetectorType:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000061068
+ (_Bool)isReentrant;	// IMP=0x0000000000061060
- (void).cxx_destruct;	// IMP=0x0000000000060e52
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(readonly, nonatomic) unsigned long long backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) VNMetalContext *metalContext; // @synthesize metalContext=_metalContext;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(readonly, copy) NSDictionary *configurationOptions; // @synthesize configurationOptions=_configurationOptions;
- (id)validatedProcessingDeviceInOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000060d02
- (_Bool)supportsProcessingDevice:(id)arg1;	// IMP=0x0000000000060cfa
- (id)requiredCancellerInOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000060c75
- (_Bool)getOptionalCanceller:(id *)arg1 inOptions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000060bee
- (id)newMetalContextForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000060a9f
- (_Bool)needsMetalContext;	// IMP=0x0000000000060a04
- (id)validatedImageBufferFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000608c7
- (_Bool)validateImageBuffer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000607fe
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000606ed
- (id)tracedProcessWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000060532
- (_Bool)currentQueueIsSynchronizationQueue;	// IMP=0x00000000000604ce
- (id)processInSynchronizationQueueUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000601c8
- (_Bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000601c0
- (_Bool)useGPU;	// IMP=0x00000000000601a1
- (_Bool)shouldBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x0000000000060199
- (_Bool)canBehaveAsDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x00000000000600c4
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005fe79
- (void)dealloc;	// IMP=0x000000000005fdea
- (id)initWithConfigurationOptions:(id)arg1;	// IMP=0x000000000005fc0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

