//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FeatureStore/FSFFeatureStoreStream-Protocol.h>

@class BMStreamDatastore;

@interface FSFBiomeFeatureStoreStream : NSObject <FSFFeatureStoreStream>
{
    BMStreamDatastore *_writeStore;	// 8 = 0x8
    BMStreamDatastore *_readStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003a68
@property(retain, nonatomic) BMStreamDatastore *readStore; // @synthesize readStore=_readStore;
@property(retain, nonatomic) BMStreamDatastore *writeStore; // @synthesize writeStore=_writeStore;
- (id)initWithConfig:(id)arg1 streamId:(id)arg2;	// IMP=0x00000000000038d5
- (id)retrieveEvents:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000000000356f
- (id)retrieve:(id)arg1;	// IMP=0x00000000000032ef
- (_Bool)insert:(id)arg1 withInteractionId:(id)arg2 atTime:(double)arg3;	// IMP=0x000000000000326e

@end
