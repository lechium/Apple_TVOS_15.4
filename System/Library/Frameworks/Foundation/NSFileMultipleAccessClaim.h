//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileAccessNode, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSFileMultipleAccessClaim
{
    NSMutableArray *_readingURLs;	// 208 = 0xd0
    unsigned long long *_readingOptions;	// 216 = 0xd8
    _Bool *_readingURLsDidChange;	// 224 = 0xe0
    NSMutableArray *_writingURLs;	// 232 = 0xe8
    unsigned long long *_writingOptions;	// 240 = 0xf0
    _Bool *_writingURLsDidChange;	// 248 = 0xf8
    NSMutableArray *_readingLocations;	// 256 = 0x100
    NSMutableArray *_writingLocations;	// 264 = 0x108
    NSFileAccessNode *_rootNode;	// 272 = 0x110
    unsigned long long _currentlyLinkResolvingURLIndex;	// 280 = 0x118
    long long _readingLinkResolutionCount;	// 288 = 0x120
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e4676
- (void)protectFilesAgainstEviction;	// IMP=0x00000000001e79f1
- (_Bool)shouldCancelInsteadOfWaiting;	// IMP=0x00000000001e798d
- (id)allURLs;	// IMP=0x00000000001e7924
- (_Bool)shouldBeRevokedPriorToInvokingAccessor;	// IMP=0x00000000001e789b
- (_Bool)blocksClaim:(id)arg1;	// IMP=0x00000000001e76a8
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;	// IMP=0x00000000001e7440
- (void)devalueSelf;	// IMP=0x00000000001e6fab
- (void)invokeClaimer;	// IMP=0x00000000001e6cb2
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e622e
- (void)granted;	// IMP=0x00000000001e58ae
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001e566a
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001e550e
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;	// IMP=0x00000000001e4c61
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e467e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e40ad
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e3db2
- (void)dealloc;	// IMP=0x00000000001e3cdb
- (id)initWithPurposeID:(id)arg1 intents:(id)arg2 claimer:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e3971

@end

