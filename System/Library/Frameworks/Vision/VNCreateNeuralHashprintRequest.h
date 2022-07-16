//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNImageIdealImageSizeProviding-Protocol.h>

@class NSArray, NSString;

@interface VNCreateNeuralHashprintRequest <VNImageIdealImageSizeProviding>
{
}

+ (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011bc8
+ (Class)configurationClass;	// IMP=0x0000000000011bb7
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;	// IMP=0x0000000000011b9e
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x0000000000012149
- (id)_detectorAndOptions:(id *)arg1 loadedInSession:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012080
@property(readonly) NSArray *supportedImageSizeSet;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000011d8b
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011c84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSArray *results; // @dynamic results;
@property(readonly) Class superclass;

@end

