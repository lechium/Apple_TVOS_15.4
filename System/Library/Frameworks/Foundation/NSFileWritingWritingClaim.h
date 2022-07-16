//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileAccessNode, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileWritingWritingClaim
{
    NSURL *_url1;	// 208 = 0xd0
    _Bool _url1DidChange;	// 216 = 0xd8
    unsigned long long _options1;	// 224 = 0xe0
    NSURL *_url2;	// 232 = 0xe8
    _Bool _url2DidChange;	// 240 = 0xf0
    unsigned long long _options2;	// 248 = 0xf8
    NSFileAccessNode *_location1;	// 256 = 0x100
    NSFileAccessNode *_location2;	// 264 = 0x108
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e20a9
- (void)protectFilesAgainstEviction;	// IMP=0x00000000001e3909
- (id)allURLs;	// IMP=0x00000000001e38a0
- (_Bool)blocksClaim:(id)arg1;	// IMP=0x00000000001e382a
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;	// IMP=0x00000000001e3794
- (void)devalueSelf;	// IMP=0x00000000001e3630
- (void)invokeClaimer;	// IMP=0x00000000001e32d2
- (void)resolveURLsThenContinueInvokingClaimer:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e301f
- (void)granted;	// IMP=0x00000000001e292d
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001e289e
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001e27fb
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;	// IMP=0x00000000001e259c
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e20b1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e1ee8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e1d6e
- (void)dealloc;	// IMP=0x00000000001e1cf3
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 url:(id)arg4 options:(unsigned long long)arg5 claimer:(CDUnknownBlockType)arg6;	// IMP=0x00000000001e1c4d

@end
