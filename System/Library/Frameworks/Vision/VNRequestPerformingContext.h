//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/VNImageBufferProviding-Protocol.h>

@class NSMapTable, VNImageBuffer, VNObservationsCache, VNRequestForensics, VNRequestPerformer, VNSession;

__attribute__((visibility("hidden")))
@interface VNRequestPerformingContext : NSObject <VNImageBufferProviding>
{
    unsigned long long _serialNumber;	// 8 = 0x8
    VNSession *_session;	// 16 = 0x10
    unsigned int _qosClass;	// 24 = 0x18
    VNRequestPerformer *_weakRequestPerformer;	// 32 = 0x20
    VNImageBuffer *_imageBuffer_DO_NOT_DIRECTLY_ACCESS;	// 40 = 0x28
    NSMapTable *_requestToObservationsCacheKeyMap;	// 48 = 0x30
    VNObservationsCache *_observationsCache;	// 56 = 0x38
    VNRequestForensics *_requestForensics;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000024b7ff
- (id)previousSequencedObservationsAcceptedByRequest:(id)arg1;	// IMP=0x000000000024b77a
- (void)recordSequencedObservationsOfRequest:(id)arg1;	// IMP=0x000000000024b700
- (id)cachedObservationsAcceptedByRequest:(id)arg1;	// IMP=0x000000000024b63a
- (_Bool)cacheObservationsOfRequest:(id)arg1;	// IMP=0x000000000024b50e
- (id)imageBufferAndReturnError:(id *)arg1;	// IMP=0x000000000024b4b1
- (unsigned int)qosClass;	// IMP=0x000000000024b4a8
- (id)requestForensics;	// IMP=0x000000000024b49a
- (id)requestPerformerAndReturnError:(id *)arg1;	// IMP=0x000000000024b426
@property(readonly) VNSession *session;
@property(readonly) unsigned long long serialNumber;
- (id)_observationsCacheKeyForRequest:(id)arg1;	// IMP=0x000000000024b362
- (id)initWithSession:(id)arg1 requestPerformer:(id)arg2 imageBuffer:(id)arg3 forensics:(id)arg4 observationsCache:(id)arg5 qosClass:(unsigned int)arg6;	// IMP=0x000000000024b213
- (id)initWithSession:(id)arg1 requestPerformer:(id)arg2 imageBuffer:(id)arg3 forensics:(id)arg4 observationsCache:(id)arg5;	// IMP=0x000000000024b151

@end
