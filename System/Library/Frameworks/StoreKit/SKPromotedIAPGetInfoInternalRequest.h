//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SKPromotedIAPGetInfoInternalRequest
{
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSString *_bundleId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000026734
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_start;	// IMP=0x00000000000265ee
- (void)_handleReply:(id)arg1;	// IMP=0x00000000000262b4
- (id)initWithBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026216

@end

