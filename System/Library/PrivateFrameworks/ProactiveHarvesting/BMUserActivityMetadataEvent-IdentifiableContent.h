//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMUserActivityMetadataEvent.h>

#import <ProactiveHarvesting/BMIdentifiableContentEvent-Protocol.h>

@class NSString;

@interface BMUserActivityMetadataEvent (IdentifiableContent) <BMIdentifiableContentEvent>
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000162a1
- (id)hv_bundleId;	// IMP=0x000000000001628f
- (id)hv_uniqueId;	// IMP=0x000000000001627d

// Remaining properties
@property(readonly, nonatomic) double absoluteTimestamp;
@property(readonly, nonatomic) NSString *bundleId; // @dynamic bundleId;
@property(readonly, nonatomic) NSString *domainId;
@property(readonly, nonatomic) NSString *uniqueId; // @dynamic uniqueId;
@end

