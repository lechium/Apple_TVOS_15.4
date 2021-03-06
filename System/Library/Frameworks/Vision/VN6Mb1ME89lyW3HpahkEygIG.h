//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNImageIdealImageSizeProviding-Protocol.h>

@class NSArray, NSString;

@interface VN6Mb1ME89lyW3HpahkEygIG <VNImageIdealImageSizeProviding>
{
}

+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;	// IMP=0x0000000000180fcf
+ (id)supportedPrivateRevisions;	// IMP=0x0000000000180f9f
+ (Class)configurationClass;	// IMP=0x0000000000180f8e
+ (id)knownClassificationsForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000180c75
@property(readonly) NSArray *supportedImageSizeSet;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000181753
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;	// IMP=0x000000000018169e
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000181597
- (CDUnknownBlockType)resultsSortingComparator;	// IMP=0x000000000018158a
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x00000000001813d2
@property unsigned long long imageCropAndScaleOption;
- (id)supportedIdentifiersAndReturnError:(id *)arg1;	// IMP=0x00000000001811c1
- (id)_applicableDetectorAndOptions:(id *)arg1 loadedInSession:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001810a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSArray *results; // @dynamic results;
@property(readonly) Class superclass;

@end

