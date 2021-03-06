//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMIVideoAssetWriterDelegate-Protocol.h>

@class NSString;

@interface HMIVideoAssetWriterDelegateAdapter : HMFObject <HMIVideoAssetWriterDelegate>
{
    CDUnknownBlockType _assetWriterDidOutputInitializationSegment;	// 8 = 0x8
    CDUnknownBlockType _assetWriterDidOutputSeparableSegment;	// 16 = 0x10
    CDUnknownBlockType _assetWriterDidFailWithError;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c3920
@property(copy) CDUnknownBlockType assetWriterDidFailWithError; // @synthesize assetWriterDidFailWithError=_assetWriterDidFailWithError;
@property(copy) CDUnknownBlockType assetWriterDidOutputSeparableSegment; // @synthesize assetWriterDidOutputSeparableSegment=_assetWriterDidOutputSeparableSegment;
@property(copy) CDUnknownBlockType assetWriterDidOutputInitializationSegment; // @synthesize assetWriterDidOutputInitializationSegment=_assetWriterDidOutputInitializationSegment;
- (void)assetWriter:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000c3804
- (void)assetWriter:(id)arg1 didOutputSeparableSegment:(id)arg2 segmentReport:(id)arg3;	// IMP=0x00000000000c3745
- (void)assetWriter:(id)arg1 didOutputInitializationSegment:(id)arg2;	// IMP=0x00000000000c369e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

