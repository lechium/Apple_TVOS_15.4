//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SagaArtworkImporter
{
}

- (void)_importOriginalContainerArtworkWithClientIdentity:(id)arg1;	// IMP=0x00400000000f04a9
- (void)_importOriginalItemArtworkWithClientIdentity:(id)arg1;	// IMP=0x00100000000f03a5
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f00c0
- (void)importScreenshotForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000efd8e
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000efa5c
- (void)importAllItemArtworkWithClientIdentity:(id)arg1;	// IMP=0x00100000000efa07
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000000ef9d3

@end
